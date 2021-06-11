#include<bits/stdc++.h>
using namespace std;


void help(string in, string pre){
    if(pre.empty()){
        return;
    }
    char root = pre[0];
    int k = in.find(root);
    pre.erase(pre.begin());
    string leftPre = pre.substr(0,k);
    string rightPre = pre.substr(k);
    string leftIn = in.substr(0,k);
    string rightIn = in.substr(k+1);
    help(leftIn, leftPre);
    help(rightIn, rightPre);
    cout<<root;
}
int main(){
    string pre, in;
    cin >> in >> pre;
    help(in, pre);
    return 0;
}