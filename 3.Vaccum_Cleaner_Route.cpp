/**
 * @file 2_Vaccum_Cleaner_Route.cpp
 * @author Kashif Raza (kashifraza08012001@gmail.com)
 * @brief Problem For Day 3
 * @date 2021-11-24
 */  


/* Time Complexity: O(n)
 *  Space Complexity: O(1)
 */
#include <iostream>
#include <string>
using namespace std;

// Solve this function
bool checkForReturn(string s){
    // Suppose it is starting from Origin
    // (x, y) in cartesian plane
    int arr[2] = {0, 0};
    for(int idx = 0; idx < s.length(); idx++){
        //Moving -x
        if(s[idx] == 'L'){
            arr[0] -=1;
        }else if(s[idx] == 'R'){
            //Moving +x
            arr[0] += 1;
        }else if(s[idx] == 'U'){
            //Moving +y
            arr[1] += 1;
        }else if(s[idx] == 'D'){
            //Moving -y
            arr[1] -= 1;
        }
        
    }
    // If it gets back to Origin
    if(arr[0] == 0 && arr[1] == 0){
        return true;
    }

    return false;
}


// Testing Function
int main(){
    int t;
    cin>>t;
    while(t != 0){
        string s;
        cin>>s;
        if(checkForReturn(s)){
            cout<<"Yes the Robot will comeback to it's O.P";
        }else{
            cout<<"No it would not come back!";
        }
        t--;
        cout<<endl;
    }
    return 0;
}
