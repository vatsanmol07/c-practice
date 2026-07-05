#include<iostream>
using namespace std;
bool twosum(vector<int>&arr,int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<int>arr(5);
    cout<<"enter the element"<<endl;
    for(int i=0;i<5;i++)
    cin>>arr[i];
    int target = 6;
    cout<<((twosum(arr,target))?
"true":"false");
return 0;

}