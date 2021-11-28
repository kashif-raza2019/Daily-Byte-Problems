/**
 * @file 6_Longest_Common_Prefix.cpp
 * @author Kashif Raza (kashifraza.tech)
 * @brief Problem for Day 6
 * @date 2021-11-28
 * 
 */
// Time O(n + m) | Space O(n)
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Function declaration
template<typename t>
void display(vector<t> vec);

// Algorithm to complete
void solve(vector<string> vec){
    sort(vec.begin(), vec.end());
    string smallestToCheck = vec[0];
    string currLongestPrefix = smallestToCheck;

    for(int idx = 0; idx < vec.size(); idx++){
        int i = 0;
        int len = currLongestPrefix.length();
        if(vec[idx].length() > 0){
            while(i < len){
                if(vec[idx][i] != currLongestPrefix[i]){
                    currLongestPrefix = vec[idx][i-1];
                    break;
                }
                i++;
            }
        }
    }
    cout<<currLongestPrefix;
}

// No use here created just for my testing functions
// Templatized Function for display of vector
template<typename t>
void display(vector<t> vec){
    for(auto idx = 0; idx < vec.size(); idx++){
        cout<<vec[idx]<<" ";
    }cout<<endl;
}

// Main Function
int main(){
    int t;
    cin>>t;
    while(t != 0){
        vector<string> vec;
        int n;
        cin>>n;
        for(int i =0; i<n; i++){
            string s;
            cin >> s;
            vec.push_back(s);
        }
        solve(vec);
        t--;
        cout<<endl;
    }
    return 0;
}