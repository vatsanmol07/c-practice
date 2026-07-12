#include<iostream>
using namespace std;
void fun(int n){
    if(n==0)
    return;
    fun(n-1);
    if(n%2!=0)
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    fun(n);
    return 0;
}