/*
A friend funcition possessec certain special charaacteristics:

1. it is not in the scope of the class to which it has been declared as friend.
2. since it is not in the scope of the class, it cannot be called using the object if that class.
3. it can be invoked like a normal function without the help of any object.
4. unlike member function, it cannot access the member names directly and has to use an object name and dot membership operator with each member name (e.g. A.x)
5. it can be declared either in the public or the private part of a class without affecting its meaning.
6. usually, it has the objects as argument.
7. private variables using as a public variables with friend function.
*/

/*#include<iostream>
using namespace std;
class sample{
    int a;
    int b;
    public:
    void setval()
    { 
        a=25; 
        b=40; 
    }
    friend float mean(sample s);
};
float mean(sample s)
{
    return(s.a + s.b)/2.0;
}
int main(){
    sample x;   //object x
    x.setval();
    cout<<"Mean value = "<<mean(x)<<"\n";
return 0;
}*/

//friend function with in two class
/*#include<iostream>
using namespace std;
class num;
class sample{
    int a,b;
    public:
    void setval()
    { 
        a=25; 
        b=40; 
    }
    friend void mean(sample s , num n);
};
class num{
    int x,y;
    public:
    void setval()
    {
        x=10;
        y=15;
    }
    friend void mean(sample s, num n);
};
void mean(sample s , num n)
{
    float q,p;
    p=(s.a + s.b)/2.0;
    cout<<p<<endl;
    q=(n.x + n.y)/2.0;    
    cout<<q<<endl;
}
int main(){
    sample i;   //object x
    i.setval();
    num j;
    j.setval();
    mean(i,j);
    return 0;
}
*/
//friend function with in two class
/*#include<iostream>
using namespace std;
class num;
class sample{
    int a,b,i,j;
    public:
    void setval()
    { 
        a=25; 
        b=40; 
    }
    friend num  mean(sample s , num n);
};
class num{
    int x,y;
    public:
    void setval()
    {
        x=10;
        y=15;
    }
    void display()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
    friend num mean(sample s, num n);
};
num mean(sample s , num n)
{
    num q;
    q.x=(s.a + n.x)/2.0;
    q.y=(s.b+n.y)/2;
    return(q);
}
int main(){
    num r;
    sample i;   
    i.setval();
    num j;
    j.setval();
    r=mean(i,j);
    r.display();
    return 0;
}*/

//enter current date , birth date and find current age using one friend class;
/*#include<iostream>
using namespace std;
class mydate{
    int d,m,y;
    public:
    void setval(int a, int b, int c)
    {
        d=a;
        m=b;
        y=c;
    }
    void displayage()
    {
       cout<<"Your Age: "<<y<<" Year "<<m<<" Month "<<d<<" Days ";
    }
    friend mydate age(mydate t, mydate t1);
};
mydate age(mydate t , mydate t1)
{
    mydate s;
    int date,year,month;
    s.d=t.d-t1.d;
    s.m=t.m-t1.m;
    s.y=t.y-t1.y;

    if(s.d<0)
    {
        s.d=s.d+30;
        s.m=s.m-1;
    }
    if(s.m<0)
    {
        s.m=s.m+12;
        s.y=s.y-1;
    }
    return(s);
}
int main(){
    mydate obj1,obj2,finalage;
    int d,m,y,d1,m1,y1;
    cout<<"Enter current date, month, year: "<<endl;
    cin>>d>>m>>y;     
    cout<<"Enter birth date, month, year: "<<endl;
    cin>>d1>>m1>>y1;
    obj1.setval(d,m,y);
    obj2.setval(d1,m1,y1);
    finalage=age(obj1,obj2);
    finalage.displayage();
    return 0;
}*/

//enter current date , birth date and find current age using two friend class;
/*#include<iostream>
using namespace std;
class birth;
class date{
    int d,m,y;
    public:
    void setval(int a, int b, int c)
    {
        d=a;
        m=b;
        y=c;
    }
    friend void age(birth b , date t);
};
class birth{
    int i,j,k;
    public:
    void setval(int x, int y, int z)
    {
        i=x;
        j=y;
        k=z;
    }
    friend void age(birth b , date t);
};
void age(birth b ,date t)
{
    int date,year,month;
    date=t.d-b.i;
    month=t.m-b.j;
    year=t.y-b.k;

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
    cout<<"Your Age: "<<year<<" Year "<<month<<" Month "<<date<<" Days ";
}
int main(){
    int d,m,y,i,j,k;
    cout<<"Enter current date, month, year: "<<endl;
    cin>>d>>m>>y;     
    cout<<"Enter birth date, month, year: "<<endl;
    cin>>i>>j>>k;
    date p;
    p.setval(d,m,y);

    birth q;
    q.setval(i,j,k);
    age(q,p);
return 0;
}*/

// dot product of two matrics wiht using friend function.
/*#include<iostream>
using namespace std;
class matrix{
    int a[3][3],i,j;
    public:
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
    friend void matric(matrix p, matrix q);
};
void matric(matrix p, matrix q)
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
    matrix obj1,obj2;
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
        for(j=0;j<3 ;j++)
        {
            cin>>b[i][j];
        }
    }
    obj1.setval(a);
    obj2.setval(b);
    matric(obj1,obj2);
    return 0;
}*/

// dot product of two matrics without using friend function.
/*#include<iostream>
using namespace std;
class matrix{
    public:
    int a[3][3],b[3][3],c[3][3],i,j;
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
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                cout<<" "<<c[i][j];
            }
            cout<<"\n";
        }
    }
};
matrix getmatric(matrix p, matrix q)
{
    matrix m;
    int i,j,c[3][3],k;
    cout<<"Result for first and second matrix:\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            m.c[i][j]=0;
            for(k=0;k<=2;k++)
            {
                m.c[i][j]=m.c[i][j]+p.a[i][k]*q.a[k][j];
            }
        }
    }
    return(m);
}
int main(){
    matrix obj1,obj2,multi;
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
    obj1.setval(a);
    obj2.setval(b);
    multi=getmatric(obj1,obj2);
    multi.display();
    return 0;
}*/

// dot product of two matrics.
#include<iostream>
using namespace std;
class matrix{
    public:
    int a[3][3],b[3][3],c[3][3],i,j,k;
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
    void getmatric(matrix p)
    {
        cout<<"Result for first and second matrix:\n";
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                c[i][j]=0;
                for(k=0;k<=2;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*p.a[k][j];
                }
                cout<<" "<<c[i][j];
            }
            cout<<"\n";
        }
    }
};
int main(){
    matrix obj1,obj2,multi;
    int a[3][3],b[3][3],c[3][3],i,j;
    cout<<"Enter First matrix:\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter Second matrix:\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>b[i][j];
        }
    }
    obj1.setval(a);
    obj2.setval(b);
    multi.getmatric(obj2);
    return 0;
}