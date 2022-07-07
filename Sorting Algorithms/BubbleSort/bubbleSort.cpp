#include<iostream>
using namespace std;


int * bubbleSort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		bool swapped = false;
		for (int j = 0; j < n-i; j++) {
			if (arr[j] > arr[j+1]) {
			    swap(arr[j], arr[j+1]);
			    swapped = true;
			    	
			}
		}
		if(swapped == false) {
		    break;
		}
	    
	}
	return arr;
}

int main() {
    int *result;
	int arr[5] = { 4, 5, 2, 1 ,10};
    result = bubbleSort(arr, 5);
    for (int i=0;i<5;i++){
        cout<<result[i]<<" ";
    }
	return 0;
}