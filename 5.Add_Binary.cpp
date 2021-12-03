/**
 * @file 5_Add_Binary.cpp
 * @author Kashif Raza
 * @brief Problem For Day 5
 * @date 2021-11-28
 * 
 */

// Time O(n + m) | Space O(n)
#include <iostream>
#include <string>
using namespace std;

void solve(string s1, string s2){
    string res = "";
    int sum = 0;
    int i = s1.length()-1, j = s2.length()-1;

    while( i>=0 || j>=0 || sum == 1){

        sum += (( i>= 0)?s1[i] - '0':0);
        sum += ((j >= 0)?s2[j] - '0':0);

        res =  char(sum%2 + '0') + res;
        sum /= 2;
        i--;j--;
    }
    cout<<res;
}

// Testing Function
int main(){
    int t;
    cin>>t;
    while(t != 0){
        string s1, s2;
        cin>>s1 >> s2;
        solve(s1, s2);
        t--;
        cout<<endl;
    }
    return 0;
}
