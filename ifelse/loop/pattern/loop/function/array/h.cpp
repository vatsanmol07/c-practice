#include<iostream>
int main(){
    int arr[10],n,i,key;
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