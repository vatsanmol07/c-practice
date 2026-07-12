#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row =1;
    while(row<=n){
       int column =1;
       int value =1;
       while (column<=row){
        cout<<value<<" ";
        column = value+1;
       }
       cout<<endl;
       row = row+1;
    }
}