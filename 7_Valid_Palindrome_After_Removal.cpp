/**
 * @file 7_Valid_Palindrome_After_Removal.cpp
 * @author Kashif Raza (https://www.kashifraza.tech)
 * @brief Problem Number 7: Valid Palindrome After Removal
 * @date 2021-11-30
 * 
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string s);

/*
    Complexity Analysis:
    Time O(n) | Space O(1)
*/
bool isValidPalindromeAfterRemoval(string s){
    if(s.empty()) {return false;}
    else if(s.length() == 1) {return true;}

    int leftIdx = 0, rightIdx = s.length()-1;
    while(leftIdx < rightIdx){
        if(s[leftIdx] != s[rightIdx]){
            s.erase(s.begin() + leftIdx);
            if(isPalindrome(s)){
                return true;
            }else {
                return false;
            }
        }
        leftIdx++;
        rightIdx--;
    }
    return true;
}

// Main Function
int main(){
    int t;
    cin>>t;
    while(t != 0){
        string s;
        cin>>s;
        if(isValidPalindromeAfterRemoval(s)){
            cout<<"True";
        }else{
            cout<<"False";
        }
        t--;
        cout<<endl;
    }
    return 0;
}
// Function isPalindrome
bool isPalindrome(string s){
    int lt = 0, rt = s.length()-1;
    while(lt < rt){
        if(s[lt] != s[rt]){
            return false;
        }
        lt++;
        rt--;
    }

    return true;
}