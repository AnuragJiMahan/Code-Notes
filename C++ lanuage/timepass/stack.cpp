#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>container;
    int a;
    for(int i=0;i<10;i++)
    {
        cin>>a;
        container.push(a);
    }
    // container.push(1);
    // container.push(2);
    // container.push(3);
    // container.push(4);
    while(!container.empty())
    {
        cout<<" "<<container.top();
        container.pop();

    }
    // cout<<container.top();

return 0;
}