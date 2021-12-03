/**
 * @file 8_Two_Sum.cpp
 * @author Kashif Raza (https://www.kashifraza.tech)
 * @brief Problem 8 Two Sum
 * @date 2021-11-30
 */
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
    Complexity Analysis:
    Time O(n) | Space O(1)
*/

vector<int> twoSum1(vector<int> nums,int key){
    if(nums.empty() || nums.size() == 1) return {};
    sort(nums.begin(), nums.end());
    int leftIdx = 0, rightIdx = nums.size()-1;
    while(leftIdx < rightIdx){
        int sum = nums[leftIdx] + nums[rightIdx];
        if(sum == key){
            return {nums[leftIdx], nums[rightIdx]};
        }else if(sum < key){
            leftIdx++;
        }else {
            rightIdx--; 
        }
    }
    return {};
}

/*
    Complexity Analysis
    Time O(n) | Space O(n) 
*/

vector<int> twoSum(vector<int> nums,int key){
    if(nums.empty() || nums.size() == 1) return {};
    unordered_map<int, int> map;
    for(int idx = 0; idx < nums.size(); idx++){
        int x = key - nums[idx];
        if(map.find(x) != map.end()){
            return {x, nums[idx]};
        }
        map[nums[idx]] = x;
    }
    return {};
}

// Main Function
int main(){
    int t;
    cin>>t;
    while(t != 0){
        vector<int> nums;
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            int num;
            cin >> num;
            nums.push_back(num);
        }
        int key;
        cin >> key;
        vector<int> ans = twoSum(nums, key);
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        t--;
        cout<<endl;
    }
    return 0;
}