#include<iostream>
using namespace std;
void subsequnece(int arr[], int index, vector<int>&temp, vector<vector<int>>&ans){
    if(index >= 3){
        ans.push_back(temp);
        return;
    }
    temp.push_back(arr[index]);
    subsequnece(arr, index+1, temp, ans);
    temp.pop_back();
    subsequnece(arr, index+1, temp, ans);
}
int main(){
    int arr[] = {1, 2, 3};
    vector<vector<int>>ans;
    vector<int>temp;
    subsequnece(arr, 0, temp, ans);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}