// returning objects - agar koi function class ke object ko return kare to ise returning objects kehte hain
/*#include<iostream>
using namespace std;
class age{
    public:
    int d,m,y,age;
    void setval(int i,int j,int k)
    {
        d=i;
        m=j;
        y=k;
    }
    void displayumar()
    {
        cout<<"your age is "<<y<<" years ,"<<m<<" months and "<<d<< " days";
    }
};
age getage(age p, age q)
{
    age umar;
    umar.d=p.d-q.d;
    umar.m=p.m-q.m;
    umar.y=p.y-q.y;

    if(umar.d<0)
    {
        umar.d=umar.d+30;
        umar.m=umar.m-1;
    }
    if(umar.m<0)
    {
        umar.m=umar.m+12;
        umar.y=umar.y-1;
    }
    return(umar); 
}
int main(){
    age object1,object2,finalage;
    int d,m,y,x,s,z;
    cout<<"Enter Current Date: ";
    cin>>d>>m>>y;
    cout<<"Enter Birth Date: ";
    cin>>x>>s>>z;
    object1.setval(d,m,y);
    object2.setval(x,s,z);
    finalage=getage(object1,object2);
    finalage.displayumar();
return 0;
}*/

// add two time periods and add them 
/*#include<iostream>
using namespace std;
class time{
    public:
    int h,m,s,t;
    void setval(int i,int j,int k)
    {
        h=i;
        m=j;
        s=k;
    }
    void displaytime()
    {
        cout<<"Time is: "<<h<<" hours "<<m<<" minutes "<<s<<" seconds";
    }
};
time gettime(time p,time q)
{
   time t;
   t.h=p.h+q.h;
   t.m=p.m+q.m;
   t.s=p.s+q.s;
   if(t.h>60)
   {
       t.h=t.h+60;
       t.m=t.m-1;
   }
   if(t.m>60)
   {
       t.m=t.m+60;
       t.s=t.s-1;
   }
   return(t);
}
int main(){
    time object1,object2,finaltime;
    int h,m,s,x,y,z;
    cout<<"Enter Current Time: ";
    cin>>h>>m>>s;
    cout<<"Add time periods: ";
    cin>>x>>y>>z;
    object1.setval(h,m,s);
    object2.setval(x,y,z);
    finaltime=gettime(object1,object2);
    finaltime.displaytime();
return 0;
}*/

// enter name and surname and concatenate them 
/*#include<iostream>
#include<string.h>
using namespace std;
class name{
    public:
    char n[20],s[20],f,l,sl;
    void setval(char i[])
    {
        strcpy(n,i);
    }
    void displayname()
    {
        cout<<"Name:"<<n;
    }
};
name getname(name p, name q)
{
    name f;
    int i,j=0;
    for(i=0;p.n[i]!='\0'; j++,i++)
    {
        f.n[j]=p.n[i];
    }   
    f.n[j]=' ';
    j++;
    for(i=0;q.n[i]!='\0'; j++,i++)
    {
        f.n[j]=q.n[i];
    }
    f.n[j]='\0';
    return(f);
}
int main(){
    name object1,object2,finalname;
    char n[20],s[20];
    cout<<"Enter Name: ";
    cin>>n;
    cout<<"Enter Surname: ";
    cin>>s;
    object1.setval(n);
    object2.setval(s);
    finalname=getname(object1,object2);
    finalname.displayname();
return 0;
}*/