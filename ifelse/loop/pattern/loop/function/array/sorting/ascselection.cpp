// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 int arr[1000]={10,4,7,56,67,46,67};
 for(int i=0;i<6;i++){
    int index =i;
    for(int j=i+1;j<7;j++){
        if(arr[j]<arr[index])
        index =j;
    }
    swap(arr[i],arr[index]);
 }
 for(int i=0;i<6;i++){
     cout<<arr[i]<<" ";
 }

}