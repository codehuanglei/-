#include<iostream>
#include<limits.h>

using namespace std;
const int MAX = 101;
int dis[MAX][MAX];
int num[MAX];
int l, r;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            dis[i][j] = 1000000;
        }
    }
    for(int i = 1; i <=n; i++){
        dis[i][i] = 0;
        cin >> num[i] >> l >> r;
        if(l > 0){
            dis[i][l] = dis[l][i] = 1;
        }
        if(r > 0){
            dis[i][r] = dis[r][i] = 1;
        }
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <=n; i++){
            if(i != k){
                for(int j = 1; j <= n; j++){
                    if(i!=j && k!=j && dis[i][k] + dis[k][j] < dis[i][j]){
                        dis[i][j] = dis[i][k] + dis[k][j];
                    }
                }
            }
        }
    }
    int ans = INT_MAX;
    for(int i = 1; i <= n; i++){
        int total = 0;
        for(int j = 1; j <= n; j++){
            total += dis[i][j] * num[j];
        }
        if(total < ans){
            ans = total;
        }   
    }
    cout<<ans;
    return 0;
}