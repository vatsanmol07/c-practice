#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    vector<int>v1(5,1);
    cout<<"size of v"<<v.size()<<endl;
    cout<<"capacity of vector"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"size of v"<<v.size()<<endl;
    cout<<"capacity of vector"<<v.capacity()<<endl;
    v[1]=6;
    cout<<"size of v"<<v.size()<<endl;
    cout<<"capacity of vector"<<v.capacity()<<endl;
    v1.push_back(1);
    cout<<"size of v :"<<v1.size()<<endl;
    cout<<"capacity of vector :"<<v1.capacity()<<endl;
}