// wap to find area of a rectangle
// 1. a class is a backbone of object oriented programming
// 2. a class is a collection of variables and methods related to a particular object
/*#include<iostream>
using namespace std;
class rectangle
{
    public:
    int l,b,a;
    void setval()  // this method is only setting the members variable of the class
    {
        l=5;
        b=10;
    }
};
int main()
{
    rectangle object;  // create an object of class rectangle
    object.setval();  // call the function setval of class rectangle
    object.a=object.l*object.b;
    cout<<"Area of rectangle="<<object.a;
    return(0);
}*/

// 1. a class is a backbone of object oriented programming
// 2. a class is a collection of variables and methods related to a particular object
// 3. a structure is just a collection of variables (different data types) whereas a class is a collection of methods and variables
//4. all of the activitives/processes should be in a seperate function of the class
/*#include<iostream>
using namespace std;
class rectangle
{
    public:
    int l,b,a;
    void setval()  // this method is only setting the members variable of the class
    {
        l=5;
        b=10;
    }
    void getarea()  // this method is actually calculating the area of rectangle
    {
        a=l*b;
    }
};
int main()
{
    rectangle object;  // create an object of class rectangle
    object.setval();  // call the function setval of class rectangle
    object.getarea(); // call the function getarea of the class rectangle
    cout<<"Area of rectangle="<<object.a<<endl;
    return 0;
}*/

/*
1. a class is a backbone of object oriented programming
2. a class is a collection of variables and methods related to a particular object
3. a structure is just a collection of variables (different data types) whereas a class is a collection of methods and variables
4. all of the activitives/processes should be in a seperate function of the class
5. all of the member variables of a class should be private and methods may be public
6. all of the functions related to class must be inside the class
7. a class should be created in a way that it can be reused any number of times in efficient manner
*/
// below is an example of class as a collection of variables (just like strcuture)
/*#include<iostream>
using namespace std;
class rectangle
{
    private:
    int l,b,a;
    public:
    void setval()  // this method is only setting the members variable of the class
    {
        l=5;
        b=10;
    }
    void getarea()  // this method is actually calculating the area of rectangle
    {
        a=l*b;
    }
    void display() // this method is actually printing  the area of rectangle
    {
        cout<<"area of rectangle is "<<a<<endl;
    }
};
int main()
{
    rectangle object;  // create an object of class rectangle
    object.setval();  // call the function setval of class rectangle
    object.getarea(); // call the function getarea of the class rectangle
    object.display();  // we can call this method becoz it is public
    return(0);
}*/

// enter lenght and breadth to find area of a rectangle 
/*#include<iostream>
using namespace std;
class rectangle
{
    private:
    int l,b,a;
    public:
    void setval(int x,int y)
    {
        l=x;
        b=y;
    }
    void getarea()  // this method is actually calculating the area of rectangle
    {
        a=l*b;
    }
    void display() // this method is actually printing  the area of rectangle
    {
        cout<<"area of rectangle is "<<a<<endl;
    }
};
int main()
{
    int l,b;
    rectangle object;  // create an object of class rectangle
    cout<<"Enter lenght="<<endl;
    cin>>l;
    cout<<"Enter breadth="<<endl;
    cin>>b;
    object.setval(l,b);
    object.getarea(); // call the function getarea of the class rectangle
    object.display();  // we can call this method becoz it is public
    return(0);
}*/

//Enter radius and find circle and circumference;
/*#include<iostream>
using namespace std;
class circle{
    private:
    float r,a,b;
    public:
    void setval(float x)
    {
        r=x;
    }
    void getarea()
    {
        a=3.14*r*r;
    }
    void getcircle()
    {
        b=2*3.14*r;
    }
    void display()
    {
        cout<<"Area of circle is "<<a<<endl;
        cout<<"Area of circle circumference is "<<b<<endl;
    }
};
int main(){
    circle object;
    float r;
    cout<<"Enter radius="<<endl;
    cin>>r;
    object.setval(r);
    object.getarea();
    object.getcircle();
    object.display();
return 0;
}*/

//Enter qty rate year and find simple interest and compound
/*#include<iostream>
#include<math.h>
using namespace std;
class si{
    private:
    float p,r,t,si,ci;
    public:
    void setval(float i, float j, float k)
    {
        p=i;
        r=j;
        t=k;
    }
    void getsi()
    {
        si=(p*r*t)/100;
    }
    void getci()
    {
        ci=p*pow((1+r/100),t)-p;
    }
    void display()
    {
        cout<<"Simple interest is "<<si<<endl;
        cout<<"Compound interest is "<<ci<<endl;
    }
};
int main(){
    float p,r,t;
    si object;
    cout<<"Enter principal=";
    cin>>p;
    cout<<"Enter rate=";
    cin>>r;
    cout<<"Enter time=";
    cin>>t;
    object.setval(p,r,t);
    object.getsi();
    object.getci();
    object.display();
return 0;
}*/

// enter code, name, and salary of employee and find hra,da,ta,gs,pf,ns
/*#include<iostream>
#include<string.h>
using namespace std;
class salary{
    private:
    int salary,hra,da,ta,gs,pf,ns;
    char n[20];
    public: 
    void setval(int i,char j[])
    {
        salary=i;
        strcpy(n,j);
    }
    void gethra()
    {
        hra=(12*salary)/100;
    }
    void getda()
    {
        da=(20*salary)/100;
    }
    void getta()
    {
        ta=(5*salary)/100;
    }
    void getpf()
    {
       pf=(15*salary)/100;
    } 
    void getgs()
    {
        gs=salary+hra+da+ta;
    }
    void getns()
    {
        ns=gs-pf;
    }
    void display()
    {
        cout<<"Name="<<n<<endl;
        cout<<"Salary="<<salary<<endl;
        cout<<"House Rent Allowence="<<hra<<endl;
        cout<<"Daily Allowence="<<da<<endl;
        cout<<"Total="<<ta<<endl;
        cout<<"Provient Fund="<<pf<<endl;
        cout<<"Gross Salary="<<gs<<endl;
        cout<<"Net Salary="<<ns<<endl;
    }
};
int main(){
    salary object;
    int salary,hra,da,ta,gs,pf,ns;
    char n[20];
    cout<<"Enter Name=";
    cin.getline(n,20);
    cout<<"Enter salary=";
    cin>>salary;
    object.setval(salary,n);
    object.gethra();
    object.getda();
    object.getta();
    object.getpf();
    object.getgs();
    object.getns();
    object.display();
return 0;
}*/

// enter roll, name and five subject marks of a student and find total, percenta and division
/*#include<iostream>
#include<string.h>
using namespace std;
class marks{
    private:
    int r,m,p,c,h,e,marks;
    char div[20],n[20];
    float per;
    public:
    void setval(int i,int j,int k,int x,int y,int z,char a[])
    {
        r=i;
        m=j;
        p=k;
        c=x;
        h=y;
        e=z;
        strcpy(n,a);
    }
    void getmarks()
    {
        marks=m+p+c+h+e;
    }
    void getper()
    {
        per=(float)marks/5;
    }
    void getdiv()
    {
        if(per>=60)
        {
            strcpy(div,"1st");
        }
        else if(per<60)
        {
            strcpy(div,"2nd");
        }
        else if(per>=40)
        {
            strcpy(div,"3rd");
        }
        else
        {
            strcpy(div,"Fail");
        }
    }
    void display()
    {
        cout<<"------------------------------";
        cout<<"Name        :"<<n<<endl;
        cout<<"Roll no.    :"<<r<<endl;
        cout<<"Total Marks :"<<marks<<endl;
        cout<<"Percentage  :"<<per<<endl;
        cout<<"Division    :"<<div<<endl;
    }
};
int main(){
    marks object;
    int r,m,p,c,h,e;
    char n[20];
    cout<<"Enter Name=";
    cin.getline(n,20);
    cin.ignore();
    cout<<"Enter Roll no.=";
    cin>>r;
    cout<<"Maths=";
    cin>>m;
    cout<<"Physice=";
    cin>>p;
    cout<<"Chemistry=";
    cin>>c;
    cout<<"Hindi=";
    cin>>h;
    cout<<"English=";
    cin>>e;
    object.setval(r,m,p,c,h,e,n);
    object.getmarks();
    object.getper();
    object.getdiv();
    object.display();
return 0;
}*/

//Enter three value and print sum,avg,min,max;
/*#include<iostream>
using namespace std;
class add{
    private:
    int a,b,c,sum=0,avg,min,max;
    public:
    void setval(int i, int j, int k)
    {
        a=i;
        b=j;
        c=k;
    }
    void getsum()
    {
        sum=a+b+c;
    }
    void getavg()
    {
        avg=sum/3;
    }
    void getmax()
    {
        if(a>b)
        {
            if(a>c)
            max=a;
            else
            max=c;
        }
        else
        {
            if(b>c)
            max=b;
            else
            max=c;
        }
    }
    void getmin()
    {
        if(a<b)
        {
            if(a<c)
            min=a;
            else
            min=c;
        }
        else
        {
            if(b<c)
            min=b;
            else
            min=c;
        }
    }
    void display()
    {
        cout<<"Sum is="<<sum<<endl;
        cout<<"Avg is="<<avg<<endl;
        cout<<"Max is="<<max<<endl;
        cout<<"Min is="<<min<<endl;
    }
};
int main(){
    add object;  
    int a,b,c;
    cout<<"Enter three value=";
    cin>>a>>b>>c;
    object.setval(a,b,c);
    object.getsum();
    object.getavg();
    object.getmax();
    object.getmin();
    object.display();
return 0;
}*/

//Enter x value and find factorial;
/*#include<iostream>
using namespace std;
class fact{
    private:
    int f=1,x;
    public:
    void setval(int a)
    {
        x=a;
    }
    void getfact()
    {
        while(x>=1)
        {
            f=f*x;
            cout<<x<<endl;
            x--;
        }
    }
    void display()
    {
        cout<<"Factorital of "<<f;
    }
};
int main(){
    fact object;
    int x;
    cout<<"Enter number=";
    cin>>x;
    object.setval(x);
    object.getfact();
    object.display();
return 0;
}*/

//Enter three value and print sum,avg,min,max;
/*#include<iostream>
using namespace std;
class add{
    private:
    int a[10],b,sum=0,avg,min,max;
    public:
    void setval(int i[])
    {
        for(b=0;b<=9;b++)
        {
            a[b]=i[b];
        }
    }
    void getsum()
    {
        for(b=0;b<=9;b++)
        {
            sum=sum+a[b];
        }
    }
    void getavg()
    {
        avg=sum/3;
    }
    void getmax()
    {
        max=a[0];
        for(b=0;b<=9;b++)
        {
            if(a[b]>max)
            {
                max=a[b];
            }
        }
    }
    void getmin()
    {
        min=a[0];
        for(b=0;b<=9;b++)
        {
            if(a[b]<min)
            {
                min=a[b];
            }
        }
    }
    void display()
    {
        cout<<"Sum is="<<sum<<endl;
        cout<<"Avg is="<<avg<<endl;
        cout<<"Max is="<<max<<endl;
        cout<<"Min is="<<min<<endl;
    }
};
int main(){
    add object;  
    int a[10],b;
    cout<<"Enter ten value =";
    for(b=0;b<=9;b++)
    {
        cin>>a[b];
    }
    object.setval(a);
    object.getsum();
    object.getavg();
    object.getmax();
    object.getmin();
    object.display();
return 0;
}*/

//enter ten value and insert new element in arrat using class function;
/*#include<iostream>
using namespace std;
class insert{
    private:
    int a[11],b,p,c;
    public:
    void setval(int i[], int j, int k)
    {
        for(b=0;b<=9;b++)
        {
            a[b]=i[b];
        }
        p=j;
        c=k;
    }
    void getinsert()
    {
        for(b=9;b>=p-1;b--)
        {
            a[b+1]=a[b];
        }   
        a[p-1]=c;
    }
    void display()
    {
        for(b=0;b<=10;b++)
        {
            cout<<a[b]<<endl;
        }
    }
};
int main(){
    insert object;
    int a[11],b,p,c;
    cout<<"Enter ten value =";
    for(b=0;b<=9;b++)
    {
        cin>>a[b];
    }
    cout<<"Enter Position =";
    cin>>p;
    cout<<"Enter Insert =";
    cin>>c;
    object.setval(a,p,c);
    object.getinsert();
    object.display();
return 0;
}*/

//Enter ten value and delete element in array using class function;
/*#include<iostream>
using namespace std;
class del{
    private:
    int a[10],b,d,f=0,z;
    public:
    void setval(int i[], int j)
    {
        for(b=0;b<=9;b++)
        {
            a[b]=i[b];
        }
        d=j;
    }
    void getdelete()
    {
        for(b=0;b<=9;b++)
	    {
		    if(a[b]==d)
	    	{   
		        for(z=b;z<=9;z++)
		        {
			        a[z]=a[z+1];
		        }
                break;
		    }
	    }
            
    }
	void display()
    {
         cout<<"Now latest array are=\n";
		    for(b=0;b<=8;b++)
		    {
			    cout<<a[b]<<endl;
		    }
    }
};
int main(){
    del object;
    int a[10],b,d;
    cout<<"Enter ten value =";
    for(b=0;b<=9;b++){
        cin>>a[b];
    }
    cout<<"Enter a no. you want to delete =";
    cin>>d;
    object.setval(a,d);
    object.getdelete();
    object.display();
return 0;
}*/

//Enter ten value and duplicatevalue zero in array using function;
/*#include<iostream>
using namespace std;
class same{
    private:
    int a[10],b,i;
    public:
    void setval(int j[])
    {
        for(b=0;b<=9;b++)
        {
            a[b]=j[b];
        }
    }
    void getduplicate()
    {
        for(b=0;b<=9;b++)
        {
            for(i=b+1;i<=9;i++)
            {
                if(a[b]==a[i])
                {
                    a[i]=0;
                }
            }
        }
    }
    void display()
    {
        for(b=0;b<=9;b++)
	    {
		    cout<<a[b]<<endl;
	    }
    }

};
int main(){
    same object;
    int a[10],b;
    cout<<"Enter ten value =";
    for(b=0;b<=9;b++)
    {
        cin>>a[b];
    }
    object.setval(a);
    object.getduplicate();
    object.display();
return 0;
}*/

//Enter ten value and search element using class;
/*#include<iostream>
using namespace std;
class search{
    private:
    int a[10],b,s,f=0;
    public:
    void setval(int i[],int j)
    {
        for(b=0;b<10;b++)
        {
            a[b]=i[b];
        }
        s=j;
    }
    void getfind()
    {
        for(b=0;b<10;b++)
        {
            if(a[b]==s)
            {
                f=1;
                break;
            }
        }
    }
    void display()
    {
        if(f==1)
        {
            cout<<"Element is found"<<endl;
        }
        else
        {
            cout<<"Element is not found"<<endl;
        }
    }
};
int main(){
    search object;
    int a[10],b,s;
    cout<<"Enter ten value in array:"<<endl;
    for(b=0;b<10;b++)
    {
        cin>>a[b];
    }
    cout<<"Enter search element:"<<endl;
    cin>>s;
    object.setval(a,s);
    object.getfind();
    object.display();
return 0;
}*/


