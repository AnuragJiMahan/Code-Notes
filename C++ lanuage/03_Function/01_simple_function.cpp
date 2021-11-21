//Calculate area of rectangle
/*#include<iostream>
using namespace std;
void area(){
    int l,b,x;
    cout<<"Enter lenght=";
    cin>>l;
    cout<<"Enter breath=";
    cin>>b;
    x=l*b;
    cout<<"Area of rectangle="<<x;
}
int main(){
    area();
return 0;
}*/

//Calculate area of triangle
/*#include<iostream>
using namespace std;
void area(){
    float b,h,x;
    cout<<"Enter base=";
    cin>>b;
    cout<<"Enter hight";
    cin>>h;
    x=(b*h)/2;
    cout<<"Area of rectangle="<<x;
}
int main(){
    area();
return 0;
}*/

//Calculate area of circle;
/*#include<iostream>
using namespace std;
void area(){
    float r,x;
    cout<<"Enter radius=";
    cin>>r;
    x=3.14*r*r;
    cout<<"Area of circle="<<x;
}
int main(){
    area();
return 0;
}*/

//Calculate area of circle circumference;
/*#include<iostream>
using namespace std;
void area(){
    float r,k;
    cout<<"Enter radius=";
    cin>>r;
    k=2*3.14*r;
    cout<<"Area of circle="<<k;
}
int main(){
    area();
return 0;
}*/

//Enter x value and print factorial number;
/*#include<iostream>
using namespace std;
int factorial(){
    int f=1,x;
    cout<<"Enter value of x=";
    cin>>x;
    while(x>=1)
    {
        f=f*x;
        x--;
    }
    cout<<"Factorial="<<f;
}
int main(){
    factorial();
return 0;
}*/

//Enter 10 value in array and print sum;
/*#include<iostream>
using namespace std;
void add(){
    int a[10],sum=0,b;
    cout<<"Enter ten value in array=";
    for(b=0;b<=9;b++)
    {
        cin>>a[b];
    }
    for(b=0;b<=9;b++)
    {
        sum=sum+a[b];
    }
    cout<<"\ntotal sum="<<sum;
}
int main(){
    add();
return 0;
}*/

//Enter ten value in array and search value use with function;
/*#include<iostream>
using namespace std;
void search(){
    int a[10],b,f,x;
    cout<<"Enter ten value in array=";
    for(b=0;b<=9;b++)
    {
        cin>>a[b];
    }
    cout<<"Enter search element=";
    cin>>x;
    for(b=0;b<=9;b++)
    {
        if(a[b]==x)
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
    search();
return 0;
}*/

//table of x use with function;
/*#include<iostream>
using namespace std;
void table(){
    int x,i,j;
    cout<<"Enter table number=";
    cin>>x;
    for(i=1;i<=10;i++)
    {
        j=x*i;
        cout<<x<<"x"<<i<<"="<<j;
        cout<<endl;
    }
}
int main(){
    table();
return 0;
}*/

//Enter no. and print palindrom or not using with function;
/*#include<iostream>
using namespace std;
void palindrom(){
    int a,x=0,r,b;
    cout<<"Enter no.=";
    cin>>a;
    for(b=a;a>0;a=a/10)
    {
        r=a%10;
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
    palindrom();
return 0;
}*/

//Enter ten value in array and print interchange first five value to last five values;
/*#include<iostream>
using namespace std;
void interchange(){
    int a[10],b,t;
    cout<<"Enter ten value in array=\n";
    for(b=0;b<=9;b++)
    {
        cin>>a[b];
    }
    for(b=0;b<=4;b++)
    {
        t=a[b];
        a[b]=a[b+5];
        a[b+5]=t;
    }
    cout<<"After interchange of Element:";
    for(b=0;b<=9;b++)
    {
        cout<<"\n"<<a[b];
        //cout<<endl;
    }
}
int main(){
    interchange();
return 0;
}*/

//Enter string and count vowels using function;
/*#include<iostream>
#include<string.h>
using namespace std;
void vowel(){
    int l=0,x,vc=0,i;
    char b[20];
    cout<<"Enter string=";
    gets(b);
    l=strlen(b);
    for(i=0;i<l-1;i++)
    {
        if(b[i]=='a'|| b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
        {
            vc++;
        }
    }
    cout<<"Total vowel in string="<<vc;
}
int main(){
    vowel();
return 0;
}*/

//Enter string and print reverse string with using function;
/*#include<iostream>
#include<string.h>
using namespace std;
void reverse(){
    int a,l=0;
    char b[20];
    cout<<"Enter string=";
    gets(b);
    l=strlen(b);
    for(a=l-1;a>=0;a--)
    {
        cout<<b[a];
    }
}
int main(){
    reverse();
return 0;
}*/

//Enter string and count -->total space,words,vowel,conentes,digits and symbols;
/*#include<iostream>
#include<string.h>
using namespace std;
void count(){
    int i,l=0,count=0,vc=0,sc=0,cc=0,dc=0,syc=0;
    char b[20];
    cout<<"Enter string=";
    gets(b);
    l=strlen(b);
    cout<<"Total Count="<<l;
    for(i=0;i<=l-1;i++)
    {
        if(b[i]>=48 && b[i]==57)
        {
            dc++;
        }
        else if(b[i]==' ')
        {
            sc++;
        }
        else if(b[i]=='a'|| b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
        {
            vc++;
        }
        else if(b[i]>=97 && b[i]<=122)
        {
            cc++;
        }
        else{
            syc++;
        }
    }
    cout<<"\n'Total Digit="<<dc;
    cout<<"\nTotal Space="<<sc;
    cout<<"\nTotal Vowel="<<vc;
    cout<<"\nTotal Consonant="<<cc;
    cout<<"\nTotal Symbols="<<syc;
}   
int main(){
    count();
return 0;
}*/

//Enter string and find lenght with function;
/*#include<iostream>
#include<string.h>
using namespace std;
void lenght(){
    int i;
    char b[20];
    cout<<"Enter string=";
    cin>>b;
    for(i=0;b[i]!='\0';i++)
    {}
    cout<<"total lenght="<<i;
}
int main(){
    lenght();
    return 0;
}*/

//Enter string and print palindrome or not with function;
/*#include<iostream>
#include<string.h>
using namespace std;
int palindrome(){
    int i,l,k=0,f=1;
    char b[20];
    cout<<"Enter string=";
    cin>>b;
    for(i=0;b[i]!=0;i++)
    {}
    for(i=0;i<=k-1;i++,)
    {
        for(l=i-1;l>=0;l--)
        {
            if(b[i]!=b[l])
            {
            cout<<"String is not palindrom";
            f=0;
            break;
            }
        }
    }
    if(f==1)
    {
        cout<<"String is palindrom";
    }
}
int main(){
    palindrome();
return 0;
}*/

//Enter value and print power -->eg.-->pow(2,5)--->32;
/*#include<iostream>
using namespace std;
void power(){
    int a,b,p=1;
    cout<<"Enter value=";
    cin>>a;
    cout<<"Enter power=";
    cin>>b;
    cout<<a<<"^"<<b<<"=";
    while(b!=0)
    {
        p=p*a;
        b--;
    }
    cout<<p;
}
int main(){
    power();
return 0;
}*/

//Enter value and print hexa binary code;
/*#include<iostream>
using namespace std;
void hexa(){
    int a[100],b,x,i=0;
    cout<<"Enter value and check hexa binary=";
    cin>>x;
    for(b=x;b>0;b=b/16)
    {
        a[i]=b%16;
        i++;
    }
    for(b=i-1;b>=0;b--)
    {
        if(a[b]>=10 && a[b]<=15)
        {
            char k=a[b]+55;
            cout<<" "<<k;
        }
        else
        {
            cout<<a[b];
        }
    }
}
int main(){
    hexa();
return 0;
}*/

//Enter binary and print value of binary;
/*#include<iostream>
#include<math.h>
using namespace std;
void binary(){
    int b[100],c,sum=0,x,p=0,r,y,i;
    cout<<"Enter binary lenght=";
    cin>>y;
    cout<<"Enter binary=";
    for(i=0;i<=y-1;i++)
    {
        cin>>b[i];
    }
    cout<<"entered binary is "<<endl;
    for(i=0;i<=y-1;i++)
    cout<<b[i]<<" ";

    for(i=y-1;i>=0;i--)
    {
        r=b[i]%10;
        c=r*pow(2,p);
        p++;
        sum=sum+c;
    }
    cout<<"="<<sum;
}
int main(){
    binary();   
return 0;
}*/

