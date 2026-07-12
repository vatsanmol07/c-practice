// Online C++ compiler to run C++ program online
#include <iostream>
 using namespace std;
int main() {
 int x;
 cin>>x;
 int arr[6] = {3,5,6,7,8,9};
 for(int i=0; i<6;i++){
     if(arr[i]==x){
     cout<<i<<endl;    
     }
 }
   
    return 0;
}