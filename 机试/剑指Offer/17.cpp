#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> ans;
        int bound = 0;
        while(n--){
            bound = 10*bound + 9;
        }
        for(int i = 1; i <= bound;i++){
            ans.push_back(i);
        }
        return ans;
    }
};
    return 0;
}