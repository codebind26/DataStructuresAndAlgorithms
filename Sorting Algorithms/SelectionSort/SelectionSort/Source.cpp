#include<iostream>
using namespace std;


void selectionSort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		swap(arr[minIndex], arr[i]);
		std::cout << arr[i] << " ";
	}
	
}

int main() {
	int arr[5] = { 4, 5, 2, 1 ,10};
	selectionSort(arr, 5);
	return 0;
}