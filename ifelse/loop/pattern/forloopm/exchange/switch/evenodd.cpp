#include<iostream>
using namespace std;
bool iseven(int a){
    //1->even
    // 0 ->odd
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cin>>num;
    if(iseven(num)){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is even"<<endl;
    }
}