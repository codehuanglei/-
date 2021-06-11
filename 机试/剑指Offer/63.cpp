#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0){
            return 0;
        }
        int res = 0, min = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
            }else{
                res = max(res, prices[i] - min);
            }
        }
        return res;

    }
};
    return 0;
}