#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int* ptr=arr;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr+=2;
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<arr+1<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;
    return 0;
}