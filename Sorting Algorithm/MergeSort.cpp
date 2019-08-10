#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int n){
	int i,j,k;
	int n1 = m-l+1;
	int n2 = n-m;
	int L[n1],R[n2];
	for(int i = 0; i<n1; i++)
		L[i] = arr[l+i];
	for(int j = 0; j<n2; j++)
		R[j] = arr[m+1+j];
	i = 0;
	j = 0;
	k = l;
	while(i<n1 && j<n2){
		if(L[i]>=R[j]){
			arr[k++]=R[j++];
			
		}
		else{
			arr[k++] = L[i++];
		}
	}
	
	while(i<n1){
		arr[k++] = L[i++];
	}
	while(j<n2){
		arr[k++] = R[j++];
	}
}

void MergeSort(int arr[], int l, int r){
	if(l<r){
		int mid = (l+r)/2;
		MergeSort(arr,l,mid);
		MergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}

int main(){
	int arr[]  = {4,2,52,6,44,99,2};
	int n = sizeof(arr)/sizeof(arr[0]);
    MergeSort(arr,0,n);
    for(int i = 0; i<n; i++){
    	cout<<arr[i]<<endl;
	}
}
