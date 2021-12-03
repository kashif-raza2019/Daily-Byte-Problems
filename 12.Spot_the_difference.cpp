/**
 * @file 12_Spot_the_difference.cpp
 * @author Kashif Raza (https://www.kashifraza.tech) 
 * @brief Problem Day 12 Spot the character that is added randomly atmost 1 time 
 * @date 2021-12-03
 */

#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
    Time  O(n) (for iterating twice first for string s then for t)
    Space O(n) (for saving the iterated char of s in hashmap)
*/
char spotTheDifference(string s, string t){
    unordered_map<char, int> map;
    char res;
    bool flag = true;
    for(int idx = 0; idx < s.length(); idx++){
        map[s[idx]] = idx;
    }
    for(int i = 0; i < t.length(); i++){
        if((map.find(t[i]) == map.end()) && flag){
            res = t[i];
            flag = false;
        }else if((map.find(t[i]) == map.end()) && !flag){
            return ' ';
        }
    }

    return res;
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
        cout<<spotTheDifference(s, t);
        cout<<endl;
        testCases--;
    }

    return 0;
}