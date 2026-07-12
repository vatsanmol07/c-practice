#include<iostream>

using namespace std;
int main(){
    int arr[6] ={4,6,7,8,7};
   int sum = 0;
    for(int i =0;i<6;i++){
        sum = arr[i] + sum;
    }
    cout<<sum<<endl;
}