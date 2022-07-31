void Merge(int input[],int l,int mid,int h)
{
	int len1 = mid - l + 1;
    int len2 = h - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    //copy values into 2 arrays
    int mainArrIndex = l;
    for(int i=0;i<len1;i++){
        first[i] = input[mainArrIndex++];
    }
    
    mainArrIndex = mid + 1;
    for(int i=0;i<len2;i++){
        second[i] = input[mainArrIndex++];
    }
    //merge sorted arrays
    
    int index1=0;
    int index2=0;
    mainArrIndex = l;
    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            input[mainArrIndex++] = first[index1++];
        }
        else {
            input[mainArrIndex++] = second[index2++];
        }
    }
    
    while(index1 < len1){
        input[mainArrIndex++] = first[index1++];
    }
    
    while(index2 < len2){
        input[mainArrIndex++] = second[index2++];
    }
      
}


void MergeSortHelper(int input[],int l,int h)
{
 int mid;
 if(l<h)
 {
 mid=(l+h)/2;
 MergeSortHelper(input,l,mid);
 MergeSortHelper(input,mid+1,h);
 Merge(input,l,mid,h);

 }
}


void mergeSort(int input[], int size){
	// Write your code here
    MergeSortHelper(input,0,size-1);
   
}
