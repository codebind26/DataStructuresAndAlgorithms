/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string>
#include<iostream>
#include<cmath>
using namespace std;

int subseq(string input,string output[]){
    if(input.length() == 0){
        output[0]="";
        return 1;
    }
    
    string smallString = input.substr(1);
    int smallOutput = subseq(smallString,output);
    for(int i=0;i<smallOutput;i++){
        output[i + smallOutput] = input[0] + output[i];
    }
    
    return 2*smallOutput;
}


int main()
{
    string input;
    cout<<"Enter the string:";
    cin>>input;
    int outputLength = pow(2,input.length());
    string* output = new string[outputLength];
    int seq = subseq(input,output);
    for(int i=0;i<seq;i++){
        cout<<output[i];
        cout<<endl;
    }
    return 0;
}
