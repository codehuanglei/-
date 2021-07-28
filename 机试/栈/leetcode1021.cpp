#include<string>
class Solution {
public:
    string removeOuterParentheses(string S) {
        int start = 0, stack = 1;
        string res = "";
        for(int i = 1; i < S.length(); i++){
            if(S[i] == '('){
                stack++;
            }else{
                stack--;
            }
            if(stack == 0){
                res += S.substr(start + 1, i - start - 1);
                start = i + 1;
            }
        }
        return res;
    }
};