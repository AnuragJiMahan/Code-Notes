#include<iostream>
//using namespace std;
int main()
{
    int a[10],i,sum=0;
    std::cout<<"Enter ten value in array=\n";
    for(i=0;i<=9;i++)
    {
        std::cin>>a[i];
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    std::cout<<sum;
    return 0;
}