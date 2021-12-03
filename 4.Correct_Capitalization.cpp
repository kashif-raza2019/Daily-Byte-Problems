/**
 * @file 4_Correct_Capitalization.cpp
 * @author Kashif Raza
 * @brief Problem For Day 4
 * @date 2021-11-25
 * 
 */

// Time O(n) | Space O(1)
#include <iostream>
#include <string>
using namespace std;

bool check(string s){
    int countUpper = 0, countLower = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            countLower++;
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            countUpper++;
        }
    }
    if(countUpper > 0 && countLower == 0){
        //All Upper Case
        return true;
    }else if(countUpper == 0 && countLower > 0){
        // All Lower Case
        return true;
    }else if((countUpper == 1 && countLower > 0) && (s[0] >= 'A' && s[0] <= 'Z')){//When First Letter is Upper while all other are 
      //Lower example 'Usa'
        return true;
    }
    // Else All Others are false
  return false;
}

// Testing Function
int main(){
    int t;
    cin>>t;
    while(t != 0){
        string s;
        cin>>s;
        if(check(s)){
            cout<<"Correctly Capitalized.";
        }else{
            cout<<"Not Correctly Capitalized.";
        }
        t--;
        cout<<endl;
    }
    return 0;
}
