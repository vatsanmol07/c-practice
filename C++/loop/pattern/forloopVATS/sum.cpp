#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int sum = 0;
    for( int i=1; i<=n; i++){
        sum+=i;

    }
cout<<(n*(n+1)*(2*n+1))/6;
}
