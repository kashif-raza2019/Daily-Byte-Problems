/**
 * @file 9_Jewels_and_stones.cpp
 * @author Kashif Raza (kashifraza08012001@gmail.com)
 * @brief Jewels and Stones question by Amazon | Strings
 * @date 2021-12-03
 */
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
    n ---> jewels Length
    m ---> stones Length
    O(N) Time O(N) Space
*/
// Function to complete
int jewelsAnsStones(string jewels, string stones){
    int jewelsLen = jewels.length(), stonesLen = stones.length();
    unordered_map<char, int> map;
    if(jewelsLen >= stonesLen){
        int count = 0;
        // O(m)
        for(int i = 0; i < stonesLen; i++){
            map[stones[i]] = i;
        }
        // O(n)
        for(int idx = 0; idx < jewelsLen; idx++){
            // O(1)
            if(map.find(jewels[idx]) != map.end()){
                count++;
            }
        }
        return count;
    }else{
        int count = 0;
        for(int i = 0; i < jewelsLen; i++){
            map[jewels[i]] = i;
        }
        for(int idx = 0; idx < stonesLen; idx++){
            if(map.find(stones[idx]) != map.end()){
                count++;
            }
        }
        return count;
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
        string jewels, stones;
        cin >> jewels >> stones;
        int ans = jewelsAnsStones(jewels, stones);
        cout<<ans;
        cout<<endl;
        testCases--;
    }

    return 0;
}