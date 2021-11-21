/*#include<iostream>
using namespace std;
class average{
    public:
    int a,b,c;   
    void setval(int i,int j,int k)
    {
        a=i;
        b=j;
        c=k;
    }
    void display()
    {
        cout<<"first value "<<a<<endl;
        cout<<"Second value"<<b<<endl;
        cout<<"Third value "<<c<<endl;
    }
};
void getaverage(average obj)  // getaverage naam ka function kuch bhi return nahin kar raha lekin average class ke object ko recv kar raha hai
{
    float m;
    m=(obj.a+obj.b+obj.c)/3;
    cout<<"average is "<<m<<endl;
}
int main(){
    average object;
    int a,b,c;
    cout<<"Enter three value: ";
    cin>>a>>b>>c;
    object.setval(a,b,c);   
    object.display();
    getaverage(object);  // this line demonstrates object as function argument.
return 0;
}*/

// object as function argument - if an object of a class is passed to a function as an argument, then it is called as object as function argument. advantage is that when we pass an object as a function argument, all of the members of that class also gets automatically transfeered , so we need not to transfrer them individually.


//enter 10 values in array and count 3 digit prime values in it. (object as function argument) 
/*#include<iostream>
using namespace std;
class count{
    public:
    int a[10],i,primecount=0;
    void setval(int k[])
    {
        for(i=0;i<10;i++)
        {
            a[i]=k[i];
        }
    }
};
void getprime(count x)
{   
    int i,b,f,primecount=0,l;
    for(i=0;i<10;i++)
    {
        f=0;
        if(x.a[i]>99&&x.a[i]<1000){
        for(b=2;b<x.a[i];b++)
        {   
            if(x.a[i]%b==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            primecount++;
        }
        }
    }
    cout<<"Total Prime count: "<<primecount;           
}
int main(){
    count object;
    int a[10],i;
    cout<<"Enter 10 value: ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    object.setval(a);
    getprime(object);
return 0;
}*/

// dot product of two matrics
/*#include<iostream>
using namespace std;
class matrix{
    public:
    int a[3][3],c[3][3],i,j;
    void setval(int x[][3])
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                a[i][j]=x[i][j];
            }
        }
    }
    void display()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<" "<<a[i][j];
            }
            cout<<"\n";
        }       
    }
};
void getmatrix(matrix p, matrix q)
{
    int i,j,c[3][3],k;
    cout<<"Result for first and second matrix:\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            c[i][j]=0;
            for(k=0;k<=2;k++)
            {
                c[i][j]=c[i][j]+p.a[i][k]*q.a[k][j];
            }
        cout<<" "<<c[i][j];
        }
        cout<<"\n";
    }
}
int main(){
    matrix object1,object2;
    int a[3][3],b[3][3],c[3][3],i,j;
    cout<<"Enter First matrix:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter Second matrix:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    object1.setval(a);
    object1.display();
    
    object2.setval(b);
    object2.display();
    getmatrix(object1,object2);
return 0;
}*/

//enter current date,birth date and print your current age;
/*#include<iostream>
using namespace std;
class age{
    public:
    int a,b,c,age;
    void setval(int i,int j,int k)
    {
        a=i;
        b=j;
        c=k;
    }
};
void getage(age p, age q)
{
    int a,b,c,date,month,year;
    date=p.a-q.a;
    month=p.b-q.b;
    year=p.c-q.c;

    if(date<0)
    {
        date=date+30;
        month=month-1;
    }
    if(month<0)
    {
        month=month+12;
        year=year-1;
    }
    cout<<"Age is: "<<year<<" Year "<<month<<" Month "<<date<<" Days"; 
}
int main(){
    age object1,object2;
    int a,b,c,x,y,z;
    cout<<"Enter Current Date: ";
    cin>>a>>b>>c;
    cout<<"Enter Birth Date: ";
    cin>>x>>y>>z;
    object1.setval(a,b,c);
    object2.setval(x,y,z);
    getage(object1,object2);
return 0;
}*/