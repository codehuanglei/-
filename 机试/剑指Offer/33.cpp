#include<bits/stdc++.h>
using namespace std;

int main(){
    class Solution {
public:
    bool helper(vector<int>& postorder, int left, int right){
        if(left >= right){
            return true;
        }
        int k = left;
        int root = postorder[right];
        while(k < right && postorder[k] < root){
            k++;
        }
        for(int i = k; i < right; i++){
            if(postorder[i] <= root){
                return false;
            }
        }
        if(!helper(postorder, left, k-1)){
            return false;
        }
        if(!helper(postorder, k, right-1)){
            return false;
        }
        return true;
    }
    bool verifyPostorder(vector<int>& postorder) {
        int right = postorder.size() - 1;
        return helper(postorder, 0, right);
    }
};
    return 0;
}