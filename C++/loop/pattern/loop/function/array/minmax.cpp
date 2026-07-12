#include<iostream>

using namespace std;
int main(){
    int arr[6] ={4,6,7,8,5};
    int ans = INT_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]<ans)
        ans =arr[i];
    }
    cout<<ans<<endl;
      ans = INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>ans)
        ans =arr[i];
    }
    cout<<ans<<endl;
    return 0;
}