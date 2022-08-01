// Change in the given string itself. So no need to return or print the changed string.

#include <iostream>
using namespace std;

int len_input(char input[]){
    	int cnt=0;
        for(int i = 0;input[i]!='\0';i++){
        cnt++;    
        }
        return cnt;
    }

void pairStarHelper(char input[],int start) {
    // Write your code here
	if(input[start] == '\0'){
        return;
    }
    
    if(input[start] == input[start+1]){
        //put null character at the end
        int len = len_input(input);
        input[len + 1] = '\0';
        //move array by one position to the right
        for(int i=len;i>start;i--){
            input[i+1]=input[i];
        }
        input[start+1]='*';
    }
    
     pairStarHelper(input,start+1);
}

void pairStar(char input[]){
    pairStarHelper(input,0);
}


int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
