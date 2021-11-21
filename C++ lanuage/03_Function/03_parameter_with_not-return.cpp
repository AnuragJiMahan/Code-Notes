//Calculate area of rectangle
/*#include<iostream>
using namespace std;
void area(int i,int j){
    int x;
    x=i*j;
    cout<<"Area of rectangle="<<x;
}
int main(){
    int l,b;
    cout<<"Enter length=";
    cin>>l;
    cout<<"Enter breath=";
    cin>>b;
    area(l,b);
return 0;
}*/

//Calculate area of triangle;
/*#include<iostream>
using namespace std;
void area(int i,int j){ 
    float x;
    x=(i*j)/2;
    cout<<"Area of triangle="<<x;
}
int main(){
    float h,b;
    cout<<"Enter base=";
    cin>>b;
    cout<<"Enter hight=";
    cin>>h;
    area(b,h);
return 0;
}*/

//Calculate area of circle;
/*#include<iostream>
using namespace std;
void area(int i){
    float x;
    x=3.14*i*i;
    cout<<"Area of circle="<<x;
}
int main(){
    float r,x;
    cout<<"Enter radius=";
    cin>>r;
    area(r);
return 0;
}*/

//Calculate area of circle circumference;
/*#include<iostream>
using namespace std;
void area(float i){
    float x;
    x=2*3.14*i;
    cout<<"Area of circle="<<x;
}
int main(){
    float r,k;
    cout<<"Enter radius=";
    cin>>r;
    area(r);
return 0;
}*/

//Enter x value and print factorial number;
/*#include<iostream>
using namespace std;
void factorial(int i){
    int f=1;
    while(i>=1)
    {
        f=f*i;
        i--;
    }
    cout<<"Factorial ="<<f;
}
int main(){
    int x;
    cout<<"Enter value of x=";
    cin>>x;
    factorial(x);
return 0;
}*/

//Enter 10 value in array and print sum;
/*#include<iostream>
using namespace std;
void add(int j[]){
    int sum=0,i;
    for(i=0;i<=9;i++)
    {
        sum=sum+j[i];
    }
    cout<<"\ntotal sum="<<sum;
}
int main(){
    int a[10],b;
    cout<<"Enter ten value in array=";
    for(b=0;b<=9;b++)
    {
        cin>>a[b];
    }
    add(a);
return 0;
}*/

//Enter ten value in array and search value use with function;
/*#include<iostream>
using namespace std;
void search(int j[]){
    int f=0,i,x;
    cout<<"Enter search element=";
    cin>>x;
    for(i=0;i<=9;i++)
    {
        if(j[i]==x)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"Element is found";
    }
    else{
        cout<<"Element is not found";
    }
}
int main(){
    int a[10],b;
    cout<<"Enter ten value in array=";
    for(b=0;b<=9;b++)
    {
        cin>>a[b];
    }
    search(a);
return 0;
}*/

//table of x use with function;
/*#include<iostream>
using namespace std;
void table(int k){
    int i,j;
    for(i=1;i<=10;i++)
    {
        j=k*i;
        cout<<k<<"x"<<i<<"="<<j;
        cout<<endl;
    }
}
int main(){
    int x;
    cout<<"Enter table number=";
    cin>>x;
    table(x);
return 0;
}*/

//Enter no. and print palindrom or not using with function;
/*#include<iostream>
using namespace std;
void palindrom(int i){
    int r,b,x=0;
    for(b=i;i>0;i=i/10)
    {
        r=i%10;
        x=(x*10)+r;
    }
    if(x==b)
    {
        cout<<"It is palindrom";
    }
    else
    {
        cout<<"It is not palindrom";
    }
}
int main(){
    int a;
    cout<<"Enter no.=";
    cin>>a;
    palindrom(a);
return 0;
}*/

//Enter ten value in array and print interchange first five value to last five values;
/*#include<iostream>
using namespace std;
void interchange(int i[]){
    int b,t;
    for(b=0;b<=4;b++)
    {
        t=i[b];
        i[b]=i[b+5];
        i[b+5]=t;
    }
    cout<<"After interchange of Element:";
    for(b=0;b<=9;b++)
    {
        cout<<"\n"<<i[b];
        //cout<<endl;
    }
}
int main(){
    int a[10],b,t;
    cout<<"Enter ten value in array=\n";
    for(b=0;b<=9;b++)
    {
        cin>>a[b];
    }
    interchange(a);
return 0;
}*/

//Enter string and count vowels using function;
/*#include<iostream>
#include<string.h>
using namespace std;
void vowel(int k,char j[]){
    int vc=0,i;
    for(i=0;i<=k-1;i++)
    {
        if(j[i]=='a'|| j[i]=='e'||j[i]=='i'||j[i]=='o'||j[i]=='u')
        {
            vc++;
        }
    }
    cout<<"Total vowel in string="<<vc;
}
int main(){
    int l=0,x,vc=0,i;
    char b[20];
    cout<<"Enter string=";
    gets(b);
    l=strlen(b);
    vowel(l,b);
return 0;
}*/

//Enter string and print reverse string with using function;
/*#include<iostream>
#include<string.h>
using namespace std;
void reverse(int k,char j[]){
    int a;
    for(a=k-1;a>=0;a--)
    {
        cout<<j[a];
    }
}
int main(){
    int l=0;
    char b[20];
    cout<<"Enter string=";
    gets(b);
    l=strlen(b);
    reverse(l,b);
return 0;
}*/

//Enter string and count -->total space,words,vowel,conentes,digits and symbols;
/*#include<iostream>
#include<string.h>
using namespace std;
void count(int k,char j[]){
    int count=0,vc=0,sc=0,cc=0,dc=0,syc=0,i;
    for(i=0;i<=k-1;i++)
    {
        if(j[i]>=48 && j[i]==57)
        {
            dc++;
        }
        else if(j[i]==' ')
        {
            sc++;
        }
        else if(j[i]=='a'|| j[i]=='e'||j[i]=='i'||j[i]=='o'||j[i]=='u')
        {
            vc++;
        }
        else if(j[i]>=97 && j[i]<=122)
        {
            cc++;
        }
        else{
            syc++;
        }
    }
    cout<<"Total Count="<<k;
    cout<<"\n'Total Digit="<<dc;
    cout<<"\nTotal Space="<<sc;
    cout<<"\nTotal Vowel="<<vc;
    cout<<"\nTotal Consonant="<<cc;
    cout<<"\nTotal Symbols="<<syc;
}   
int main(){
    int l=0;
    char b[20];
    cout<<"Enter string=";
    gets(b);
    l=strlen(b);
    count(l,b);
return 0;
}*/

//Enter string and find lenght with function;
/*#include<iostream>
#include<string.h>
using namespace std;
void lenght(char j[]){
    int i;
    for(i=0;j[i]!='\0';i++)
    {}
    cout<<"total lenght="<<i;
}
int main(){
    int i;
    char b[20];
    cout<<"Enter string=";
    cin>>b;
    lenght(b);
    return 0;
}*/

//Enter value and print power -->eg.-->pow(2,5)--->32;
/*#include<iostream>
using namespace std;
void power(int i, int j){
    int p=1;
    while(j!=0)
    {
        p=p*i;
        j--;
    }
    cout<<p;
}
int main(){
    int a,b;
    cout<<"Enter value=";
    cin>>a;
    cout<<"Enter power=";
    cin>>b;
    cout<<a<<"^"<<b<<"=";
    power(a,b);
return 0;
}*/