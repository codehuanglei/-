#include<iostream>
#include<algorithm>
using namespace std;

struct Tree{
    int left;
    int right;
}tree[1000001];

int dfs(int root){
    if(root == 0){
        return 0;
    }
    return max(dfs(tree[root].left), dfs(tree[root].right)) + 1;
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> tree[i].left >> tree[i].right;
    }
    cout<<dfs(1);
    return 0;
}