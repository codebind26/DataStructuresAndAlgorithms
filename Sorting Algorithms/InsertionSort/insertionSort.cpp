#include<iostream>
using namespace std;

//InsertionSort

int * insertionSort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int current = arr[i];
		int j = i-1;
		while(arr[j] > current && j >= 0) {
		    arr[j+1]=arr[j];
		    j--;
		}
		
		arr[j+1] = current;
	    
	}
	return arr;
}

int main() {
    int *result;
	int arr[5] = { 4, 5, 2, 1 ,10};
    result = insertionSort(arr, 5);
    for (int i=0;i<5;i++){
        cout<<result[i]<<" ";
    }
	return 0;
}