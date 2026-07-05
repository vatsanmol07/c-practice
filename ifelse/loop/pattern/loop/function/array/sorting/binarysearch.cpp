#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
int start =0,end=n-1,mid;
while(start<=end){ 
mid = start +(start+end)/2;
if(arr[mid]==key)
return mid;
else if(arr[mid]<key)
    start =mid+1;
    else
    end= mid-1;

}
return -1;
}

int main(){
    int arr[1000];
    int n;
    cin>>n;
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cout<<"enter the key\n";
    cin>>key;
    cout<<binarysearch(arr,n,key);
    return 0;
}
    