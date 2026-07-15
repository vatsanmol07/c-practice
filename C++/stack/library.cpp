#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"Top element is: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element after pop is: "<<s.top()<<endl;
    cout<<"Size of stack is: "<<s.size()<<endl;
    cout<<"Is stack empty? "<<(s.empty()?"Yes":"No")<<endl;
}
