#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void help(string in, string post){
    if(post.empty()){
        return;
    }
    char root = post[post.length() - 1];
    int k = in.find(root);
    post.erase(post.end() - 1);
    string leftIn = in.substr(0,k);
    string rightIn = in.substr(k+1);
    string leftPost = post.substr(0,k);
    string rightPost = post.substr(k);
    cout<<root;
    help(leftIn, leftPost);
    help(rightIn, rightPost);
    return;
}
int main(){
    string in, post;
    cin >> in >> post;
    help(in, post);
    return 0;
}