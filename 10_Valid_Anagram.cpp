/**
 * @file 10_Valid_Anagram.cpp
 * @author Kashif Raza (kashifraza08012001@gmail.com)
 * @brief Given two string return whether one is an anagram of other
 * @date 2021-12-03
 */
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
/*
    Time and Space: O(n)

*/
bool isValidAnagram(string s, string t){
    if(s.length() != t.length()) return false;
    unordered_map<char, int> map;
    for(int idx = 0; idx < s.length(); idx++){
        map[s[idx]] = idx;
    }

    for(int i = 0; i < t.length(); i++){
        if(map.find(t[i]) == map.end()){
            return false;
        }
    }

    return true;
}

// Testing main function
int main(){
    int testCases;
    cin >> testCases;
    int showCase = 0;
    while(testCases){
        showCase += 1;
        cout<<"Case: #"<<showCase<<endl;
        string s, t;
        cin >> s >> t;
        int ans = isValidAnagram(s, t);
        cout<<ans;
        cout<<endl;
        testCases--;
    }

    return 0;
}