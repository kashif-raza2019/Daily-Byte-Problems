#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int lt = 0, rt = s.length()-1;
    transform(s.begin(), s.end(),s.begin(), ::tolower);
    // cout<<s<<endl;
    while(lt < rt){
        if(!(s[lt] >= 'a' && s[lt] <= 'z')){
            lt++;
        }else if(!(s[rt] >= 'a' && s[rt] <= 'z')){
            rt--;
        }else if(s[rt] == s[lt]){
            rt--;
            lt++;
        }else{
            return false;
        }
        
    }
    return true;
}

int main(){
    string s = "A man, a plan, a canal:Panama. av";
    if(isPalindrome(s)){
        cout<<"String is a Valid Palindrome\n";
    }else{
        cout<<"Not a Palindrome\n";
    }
    return 0;
}