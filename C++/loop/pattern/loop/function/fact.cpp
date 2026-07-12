#include<iostream>
using namespace std;
int raka(int x, int y )
{
  int ans = x + y ;
  return ans; 
}
int fact(int x ){
int ans = 1;
for(int i =1; i<=x; i++){
    ans = ans*i;
}
return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<raka(a,b)<<endl;
    cout<<fact(a);
}