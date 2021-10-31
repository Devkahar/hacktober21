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
void swap(int *x,int *y){
	int t = *x;
	*x =*y;
	*y = t;
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
	// Take in size of array
	cin>>n;
	int arr[n];
	// Take in Elements of array
	for(int i =0;i<n;i++) cin>>arr[i];
	// Selection Sort
	int min_ptr;
	for(int i =0;i<n;i++){
		min_ptr = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_ptr]){
				min_ptr = j;
			}
		}
		if(i!=min_ptr){
			swap(&arr[i],&arr[min_ptr]);
		}
	}
	display(arr,n);
	return 0;
}
