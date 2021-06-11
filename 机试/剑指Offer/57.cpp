#include<bits/stdc++.h>
using namespace std;

int main(){
    // solution 1: hashmap
    class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]] = target - nums[i];
        }
        int i;
        for(i = 0; i < nums.size(); i++){
            unordered_map<int, int>::iterator iter = mp.find(target - nums[i]);
            if(iter != mp.end()){
                ans.push_back(nums[i]);
                ans.push_back(mp[nums[i]]);
                break;
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int i = 0, j = nums.size() - 1;
        for(;i < j;){
            if(nums[i] + nums[j] > target){
                j--;
            }else if(nums[i] + nums[j] == target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                break;
            }else{
                i++;
            }
        }
        return ans;
    }
};
}