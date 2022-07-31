
#include <iostream>
using namespace std;
int binarySearchHelper(int input[],int size,int element,int l,int h){
    if(l>h){
        return -1;
    }
    int mid = (l+h)/2;
    if(element < input[mid]){
        return binarySearchHelper(input,size,element,l,mid-1);
    }
    else if (element > input[mid]){
        return binarySearchHelper(input,size,element,mid+1,h);
    }
    else if (element == input[mid]) {
        return mid;
    }
    else {
    	return -1;
    }
}


int binarySearch(int input[], int size, int element) {
    // Write your code here
	binarySearchHelper(input,size,element,0,size - 1);
}

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}

