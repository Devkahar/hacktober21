// Author: @DevKahar
#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nline "\n"
void initCode(){
	fast_io;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}
void display(int arr[],int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<nline;
}
int main(){
	initCode();
	int n;
	cin>>n;
	int arr[n];

	for(int i =0;i<n;i++) cin>>arr[i];

	// Insertion Sort

	for(int i =0;i<n;i++){
		int el = arr[i];
		int j = i-1;
		for(;j>=0;j--){ 
			if(el<arr[j]){
				arr[j+1]=arr[j];
			}
			else break;
		}
		arr[j+1]= el;
	}

	display(arr,n);
	return 0;
}
