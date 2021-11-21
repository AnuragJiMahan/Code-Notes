#include<iostream>
#include<vector>
#include<bits/stdc++.h>



using namespace std;
int main()
{
    system("cls");
    vector<int> anuragjimahan;
    // push the new values
    anuragjimahan.push_back(4);
    anuragjimahan.push_back(1);
    anuragjimahan.push_back(3);
    anuragjimahan.push_back(2);

    // to get the size of the
    cout<<anuragjimahan.size()<<endl;

    // print values
    cout<<anuragjimahan[0]<<endl;

    // in loop
    for(int i=0 ; i<anuragjimahan.size() ; i++)
        cout<<anuragjimahan[i];
    
    cout<<endl<<anuragjimahan.front();
    cout<<endl<<anuragjimahan.back();


    // push the new values
    // anuragjimahan.pop_back();
    cout<<endl;
     
    // Sorting
    sort(anuragjimahan.begin()+2 , anuragjimahan.end());
   
    for(int i=0 ; i<anuragjimahan.size() ; i++)
        cout<<anuragjimahan[i];
  
    // check empty !
    cout<<endl<<anuragjimahan.empty();
}