//Calculate area of rectangle
/*#include<iostream>
using namespace std;
int area(int i,int j){
    int k;
    k=i*j;
    return(k);
}
int main(){
    int l,b,x;
    cout<<"Enter lenght=";
    cin>>l;
    cout<<"Enter breath=";
    cin>>b;
    x=area(l,b);
    cout<<"Area of rectangle="<<x;
return 0;
}*/

//Calculate area of triangle;
/*#include<iostream>
using namespace std;
int area(int i,int j){ 
    int k;
    k=(i*j)/2;
    return(k);    
}
int main(){
    int h,b,x;
    cout<<"Enter base=";
    cin>>b;
    cout<<"Enter hight=";
    cin>>h;
    x=area(b,h);
    cout<<"Area of triangle="<<x;
return 0;
}*/

//Calculate area of circle;
/*#include<iostream>
using namespace std;
float area(float i){
    float x;
    x=3.14*i*i;
    return(x);
}
int main(){
    float r,k;
    cout<<"Enter radius=";
    cin>>r;
    k=area(r);
    cout<<"Area of circle="<<k;
return 0;
}*/

//Calculate area of circle circumference;
/*#include<iostream>
using namespace std;
float area(float i){
    float x;
    x=2*3.14*i;
    return(x);
}
int main(){
    float r,k;
    cout<<"Enter radius=";
    cin>>r;
    k=area(r);
    cout<<"Area of circle="<<k;
return 0;
}*/

//Enter x value and print factorial number;
/*#include<iostream>
using namespace std;
int factorial(int i){
    int f=1;
    while(i>=1)
    {
        f=f*i;
        i--;
    }
    return(f);
}
int main(){
    int x,k;
    cout<<"Enter value of x=";
    cin>>x;
    k=factorial(x);
    cout<<"Factorial="<<k;
return 0;
}*/

//Enter 10 value in array and print sum with function
/*#include<iostream>
using namespace std;
int add(int i[]){
    int sum=0,j;
    for(j=0;j<=9;j++)
    {
        sum=sum+i[j];
    }
    return(sum);
}
int main()
{
    int a[10],b,k;
    cout<<"Enter 10 value in array=\n";
    for(b=0;b<=9;b++)
    {
        cin>>b[a];
    }
    k=add(a);
    cout<<"Total sum="<<k;
    return 0;
}*/

//Enter 10 value in array and search value use with function
/*#include<iostream>
using namespace std;
int search(int i[]){
    int j,x,f=0;
    cout<<"Enter search value=";
    cin>>x;
    for(j=0;j<=9;j++)
    {
        if(i[j]==x)
        {
            f=1;
            break;
        }
    }
    return(f);
}
int main(){
    
    int a[10],b,k=0;
    cout<<"Enter 10 values in array=\n";
    for(b=0;b<=9;b++)
    {
        cin>>a[b];
    }
    k=search(a);
    if(k==1)
    {
        cout<<"Element is found";
    }
    else
    {
        cout<<"Element is not found";
    }    
    return 0;
}*/

//Enter no. and print palindrome or not using with function 
/*#include<iostream>
using namespace std;
int palindrome(int i){
    int x=0,r;
    for(i;i>0;i=i/10)
    {
        r=i%10;
        x=(x*10)+r;
    }
    return(x);
}
int main(){
    int a,b,z;
    cout<<"Enter No.=";
    cin>>a;
    b=a;
    z=palindrome(a);
    if(z==b)
    {
        cout<<"it is palindrome number";
    }
    else
    {
        cout<<"it is not palindrome number";
    }
    return 0;
}*/

//enter string and count vowels using functions;
/*#include<iostream>
#include<string.h>
using namespace std;
int vowel(int j, char k[]){
    int i,vc=0;
    for(i=0;i<=j-1;i++)
    {
        if(k[i]=='a'||k[i]=='e'|| k[i]=='i'|| k[i]=='o'|| k[i]=='u')
        {
            vc++;    
        }
    }
    return(vc);
}
int main(){
    int l=0,x;
    char b[20];
    cout<<"Enter sentences=";
    gets(b);
    l=strlen(b);
    x=vowel(l,b);
    cout<<"Total vowel="<<x;
    return 0;
}*/

//Factorial of x using recursion;
/*#include<iostream>
using namespace std;
int factorial(int i)
{
    cout<<"Calling factorial"<<i;
    cout<<endl;
    if(i==1 || i==0)
    {
        return 1;
    }
    else{
        return i*factorial(i-1);
    }

}
int main(){
    int a=5;
    cout<<"The value of factorial="<<a<<factorial(a);
return 0;
}*/

//print fibonacci series using recursion ;
/*#include<iostream>
using namespace std;
int fibo(int a)
{
    if(a==1 || a==0)
    {
        return a;
    }
    else
    {
        return fibo(a-1) + fibo(a-2);
    }
    
}
int main(){
    int x,i;
    cout<<"Enter terms=";
    cin>>x;
    for(i=0;i<x;i++)
    {
        cout<<"\t"<<fibo(i);
    }
    return 0;
}*/

//Enter value and print power -->eg.-->pow(2,5)--->32;
/*#include<iostream>
using namespace std;
int power(int i,int j){ 
    int p=1;
    while(j!=0)
    {
        p=p*i;
        j--;
    }
    return(p);
}
int main(){
    int a,b,k;
    cout<<"Enter value=";
    cin>>a;
    cout<<"Enter power=";
    cin>>b;
    cout<<a<<"^"<<b<<"=";
    k=power(a,b);
    cout<<k;
return 0;
}*/