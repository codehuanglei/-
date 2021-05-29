#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> ans;
        if(k == 0){
            return ans;
        }
        priority_queue<int> q;
        for(int i = 0; i < k; i++){
            q.push(arr[i]);
        }
        for(int i = k; i < arr.size(); i++){
            if(arr[i] < q.top()){
                q.pop();
                q.push(arr[i]);
            }
        }
        for(int i = 0; i < k; i++){
            ans.push_back(q.top());
            q.pop();
        }
        return ans;
    }
};
    return 0;
}