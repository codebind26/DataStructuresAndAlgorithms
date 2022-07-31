#include<iostream>
using namespace std;



int partition(int input[],int l,int h){
    int pivot = input[l];
    //check elements less than pivot
    int cnt = 0;
    for(int i=l+1;i<=h;i++){
        if(input[i] <= pivot){
            cnt++;
        }
    }
    
    //place pivot at right position
    
    int pivotIndex = l + cnt;
    std::swap(input[pivotIndex],input[l]);
    
    //left and right elements of pivot to be smaller and greater resp
    
    int i = l;
    int j = h;
   while(i < pivotIndex && j > pivotIndex){
       while(input[i] <= pivot){
        i++;
    }
    while(input[j] > pivot){
        j--;
    }
    if(i < pivotIndex && j > pivotIndex) {
        std::swap(input[i++],input[j--]);
    }
       
   } 
   
	return pivotIndex;
}


void quickSortHelper(int arr[],int l,int h){
    //base case
    
    if(l>=h){
        return;
    }
    
    //partitioning
    
    int p = partition(arr,l,h);
    //left part to sort
    
    quickSortHelper(arr,l,p-1);
    quickSortHelper(arr,p+1,h);

}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    
    quickSortHelper(input,0,size-1);
	

}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}

