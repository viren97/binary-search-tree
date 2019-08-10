#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
	for(int i = 0; i<n-1; i++){
		for(int j= 0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				count += 1;
			}
		}
	}


	cout<<count;
}
