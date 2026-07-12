#include<iostream>
using namespace std;

    


int main (){
int n,factorial =1;

cout<<"enter the number"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
   factorial = factorial*i ;
}
cout<<"factorial"<<factorial<<endl;
}