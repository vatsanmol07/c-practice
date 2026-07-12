#include<iostream>
using namespace std;
int main(){
    int i,n,num,pow;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"enter the power"<<endl;
    cin>>pow;
num = n;
    for(i =1; i <pow; i = i+1){
        num = num *n;

    }
    cout<<num;
}