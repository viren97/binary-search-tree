#include<iostream>
using namespace std;
int partion(int arr[],int l,int h){
	int pivot = arr[l];
	int i = l;
	int j = h-1;
	while(i<j){
		while(pivot>=arr[i])
			i ++;
		while(pivot<arr[j])
			j --;
		if (i<j){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp; 
		}
	}
	int temp = arr[l];
	arr[l] = arr[j];
	arr[j] = temp;
	
	return j;
	
}

void QuickSort(int arr[],int l,int h){
	if(l<h){
		int j = partion(arr,l,h);
		QuickSort(arr,l,j);
		QuickSort(arr,j+1,h);
	}
}

int main(){	
	int arr[]  = {4,2,52,6,44,99,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	QuickSort(arr,0,n);
	for(int i =0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
