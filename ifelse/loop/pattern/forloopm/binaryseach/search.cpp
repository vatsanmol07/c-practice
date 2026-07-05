#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start = 0;
    int end = size -1;
    int mid = start +(end - start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if (key >arr[mid]){
            start = mid +1;
        }
        else{end = mid -1;
        }
        mid = end + (end -start)/2;
    }
    return -1;
}
int main(){
    int even[6] = { 1,4,5,6,7,8};
    int odd [5] = {5,6,7,8,11};
int evenindex = binarysearch(even, 6,5);
cout<<"index of 5is "<<evenindex<< endl;
int oddindex = binarysearch(odd, 5,5);
cout<<"index of 5 is "<<oddindex<< endl;
    return 0;
}