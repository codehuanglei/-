#include<iostream>
#include<math.h>
#include<queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue< pair<int, int> > q;
    for(int i = 1; i <= pow(2,n); i++){
        int num;
        cin >> num;
        q.push(make_pair(i, num));
    }
    while(q.size() > 2){
        pair<int, int> q1 = q.front();
        q.pop();
        pair<int, int> q2 = q.front();
        q.pop();
        if(q1.second > q2.second){
            q.push(q1);
        }else{
            q.push(q2);
        }
    }
    pair<int, int> last1 = q.front();
    q.pop();
    pair<int, int> last2 = q.front();
    q.pop();
    if(last1.second > last2.second){
        cout<<last2.first;
    }else{
        cout<<last1.first;
    }
    return 0;
}