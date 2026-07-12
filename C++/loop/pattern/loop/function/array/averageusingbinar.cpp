#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n,i,sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
sum+=arr[i];
    }
    float average;
    average=(float)sum/n;
    cout<<average;
    return 0;
}