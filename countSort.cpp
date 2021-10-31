// Author: @DevKahar
#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nline "\n"
#define vecin(n,arr) for(int i=0;i<n;i++) cin>>arr[i];
int main(){
	// n-> size of vector arr-> el in vec;
	int n;
	cin>>n;
	vector<int> arr(n);
	vecin(n,arr);
	// let's Get Max of vector to define count;
	int maxEl = INT_MIN;

	for(auto it : arr) {maxEl= max(maxEl,it);}

	// Init count
	vector<int> count(maxEl+1);
	for(int i =0;i<n;i++){
		count[arr[i]]++;
	}

	// Prefix Sum;
	for(int i =1;i<count.size();i++){
		count[i]+=count[i-1];
	}
	// Getting Ans Using 1base idx so n+1;
	vector<int> ans(n+1);
	for(int i =0;i<n;i++){
		// get count of every element from arr and mark it int
		ans[count[arr[i]]] = arr[i];
		// Decrement it;
		count[arr[i]]--;
	}

	// let's print it 🤩;
	for(int i=1;i<n+1;i++){
		cout<<ans[i]<<" ";
	}
	cout<<nline;
            return 0;
}
