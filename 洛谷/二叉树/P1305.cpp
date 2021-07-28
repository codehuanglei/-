#include<iostream>
#include<string>
#include<cstring>
using namespace std;

struct Tree{
    char left;
    char rigth;
}tree[130];
char first, ch;

void dfs(char c){
    if(c == '*'){
        return;
    }
    cout<<c;
    dfs(tree[c].left);
    dfs(tree[c].rigth);
}

int main(){
    int n;
    cin >> n;
    cin >> first;
    cin >> tree[first].left;
    cin >> tree[first].rigth;
    for(int i = 0; i < n-1; i++){
        cin >> ch;
        cin >> tree[ch].left;
        cin >> tree[ch].rigth;
    }
    dfs(first);
    return 0;
}
// int main(){
//     int n;
//     string first;
//     cin >> n;
//     cin >> first;
//     for(int i = 0; i < n-1; i++){
//         string s;
//         cin >> s;
//         int k = first.find(s[0]);
//         s.erase(s.begin());
//         first.insert(k+1, s);
//     }
//     for(int i = 0; i < first.length(); i++){
//         if(first[i] != '*'){
//             cout<<first[i];
//         }
//     }
//     return 0;
// }