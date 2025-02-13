// Author: @DevKahar
#include <bits/stdc++.h>
#define nline "\n"
#define rep(i,a,n) for(int i=a;i<n;i++)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vecin(n,arr) rep(i,0,n) cin>>arr[i];
using namespace std;

// Its Time to Solve Small Problem and 
// and Merge Sol's;
void merge(int arr[],int l,int mid,int r){

	// cout<<"l1 "<<l1<<" r1 "<<r1<<" l2 "<<l2<<" r2 "<<r2<<nline;
	// n1,n2-> size of larr,rarr res;

	int n1 = mid-l+1;
	int n2 = r-(mid+1)+1;
	// Let's Store l and r arr int temp memory;
	int larr[n1],rarr[n2];
	// Index Maintainer
	int idx = l,i=0,j=0;
	// Copy Them 🤫
	while(i<n1){
		larr[i]=arr[idx];
		i++;
		idx++;
	}	
	while(j<n2){
		rarr[j]=arr[idx];
		j++;
		idx++;
	}

	// Now its time to Solve Problem 😈
	idx = l;
	i=0;
	j=0;
	while(i<n1 && j<n2){
		if(larr[i]<=rarr[j]){
			arr[idx]= larr[i];
			i++;
		}else{
			arr[idx]= rarr[j];
			j++;
		}
		idx++;
	}

	while(i<n1){
		arr[idx]= larr[i];
		i++;
		idx++;
	}

	while(j<n2){
		arr[idx]= rarr[j];
		j++;
		idx++;
	}

}

// Firstly its time to divide Problem 
// Into Sub-Problem
void mergeSort(int arr[],int l,int r){
	if(l>=r) return;
	int mid = l + (r-l)/2;
	mergeSort(arr,l,mid);
	mergeSort(arr,mid+1,r);
	merge(arr,l,mid,r);
}

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	vecin(n,arr);
	mergeSort(arr,0,n-1);
	rep(i,0,n) cout<<arr[i]<<" ";
	cout<<nline;
	return 0;
}
