#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(93);
    q.push(95);
    q.push(956);
    q.push(92);
    q.push(90);
    //print
    int n=q.size();
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
        
    }
}