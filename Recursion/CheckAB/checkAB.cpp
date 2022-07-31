#include <iostream>
using namespace std;
bool checkAB(char input[]) {
	// Write your code here
	if(input[0] == '\0'){
        return true;
    }
    
    if(input[0] == 'a'){
        if(input[1] == '\0' || input[1] == 'b' || input[1] == 'a'){
            if(input[2] == 'b'){
                if(input[3] == '\0' || input[3] == 'a'){
                    return true;
                }
            }
        }
        
    }
    else{
        return false;
    }
    
    bool smallwork = checkAB(input + 1);
    
    
}

int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
