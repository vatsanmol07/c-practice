#include<iostream>
using namespace std;
int main(){
    string s1="anmol";
    int start=0;
    int end=s1.length()-1;
    while(start<end){
        swap(s1[start],s1[end]);
        start++;
        end--;
    }
    cout<<s1;
}