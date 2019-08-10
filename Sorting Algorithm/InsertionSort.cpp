#include<iostream>
using namespace std;

int main(){
	int arr[]  = {4,2,52,6,44,99,2};
	int n = sizeof(arr)/sizeof(n);
	for(int i=1; i<n; i++ ){
		int temp = arr[i];
		int j = i;
		while(j>0 && arr[j-1]>temp){
			arr[j] = arr[j-1];
			j -= 1;
		}
		arr[j] = temp;
	}
	
	for(int i =0; i<n; i++){
		cout<<arr[i]<<endl;
	}
}
