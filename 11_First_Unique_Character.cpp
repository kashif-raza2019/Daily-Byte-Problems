/**
 * @file 11_First_Unique_Character.cpp
 * @author Kashif Raza (https://www.kashifraza.tech)
 * @brief Problem 11 Day 11 First Unique Character
 * @date 2021-12-03
 */
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;

int firstUniqueChar(string str){
    // First we will iterate through all 
    // saving the char, its index and its count in whole string
    // in a Hash Map
    //   Key         Value
    //   |             |
    //   |         Index Count
    //   |          |     |
    map<char, pair<int, int>> map;
    for(int idx = 0; idx < str.length(); idx++){
        if(map.find(str[idx]) != map.end()){
            map[str[idx]].second++;
        }
        else{
            map[str[idx]] = make_pair(idx, 1);
        }
    }
    for(int i = 0; i < str.length(); i++){
        if(map[str[i]].second == 1){
            return map[str[i]].first;
        }
    }

    return 0;
}

// Testing main function
int main(){
    int testCases;
    cin >> testCases;
    int showCase = 0;
    while(testCases){
        showCase += 1;
        cout<<"Case: #"<<showCase<<endl;
        string str;
        cin >> str;
        cout<<firstUniqueChar(str);
        cout<<endl;
        testCases--;
    }

    return 0;
}