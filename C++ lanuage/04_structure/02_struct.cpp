// enter day, month and year and print date 
/*#include<iostream>
using namespace std;
struct date{
    int d,m,y;
};
int main(){
    struct date i;
    cout<<"Enter day,month,year=";
    cin>>i.d>>i.m>>i.y;
    cout<<"Date="<<i.d<<"/"<<i.m<<"/"<<i.y;
return 0;
}*/

// enter roll, name and five subject marks of a student and find total, percenta and division
/*#include<iostream>
using namespace std;
struct num{
    int r,m,p,c,h,e,marks,div;
    float per;
    char n[20];
};
int main(){
    struct num i;
    cout<<"Enter roll no.=";
    cin>>i.r;
    cout<<"Maths num=";
    cin>>i.m;
    cout<<"Physics num=";
    cin>>i.p;
    cout<<"Chemistry num=";
    cin>>i.c;
    cout<<"Hindi num=";
    cin>>i.h;
    cout<<"English num=";
    cin>>i.e;
    cout<<"Enter name=";
    cin.getline(i.n,20);
    cin.ignore();
    i.marks=i.m+i.p+i.c+i.h+i.e;
    cout<<"Total marks="<<i.marks<<endl;

    i.per=(float)i.marks/5;
    cout<<"Percentage="<<i.per<<endl;
    if(i.per>=60)
    {
        cout<<"1st division";
    }
    else if(i.per>=45)
    {
        cout<<"2nd div0ision";
    }
    else if(i.per>=38)
    {
        cout<<"3rd division";
    }
    else
    {
        cout<<"Fail";
    }
return 0;
}*/

// enter code, name, and salary of employee and find hra,da,ta,gs,pf,ns
/*#include<iostream>
#include<string.h>
using namespace std;
struct salary{
    int salary,hra,da,ta,gs,pf,ns;
};
int main(){
    struct salary i[5];
    int j;
    for(j=0;j<=4;j++){
    cout<<"Enter salary=";
    cin>>i[j].salary;

    i[j].hra=(12*i[j].salary)/100;
    i[j].da=(20*i[j].salary)/100;
    i[j].ta=(5*i[j].salary)/100;
    i[j].pf=(15*i[j].salary)/100;
    
    i[j].gs=i[j].salary+i[j].hra+i[j].da+i[j].ta;
    i[j].ns=i[j].gs-i[j].pf;
    }
    for(int k=0;k<=4;k++){
    cout<<"Salary="<<i[k].salary<<endl;
    cout<<"house rent allowence="<<i[k].hra<<endl;
    cout<<"daily allowence="<<i[k].da<<endl;
    cout<<"total ="<<i[k].ta<<endl;
    cout<<"provient fund="<<i[k].pf<<endl;
    cout<<"Gross salary="<<i[k].gs<<endl;
    cout<<"Net salary="<<i[k].ns<<endl;
    cout<<"------------------------------"<<endl;
    }
return 0;
}*/

// enter roll, name and five subject marks of a student and find total, percenta and division
/*#include<iostream>
#include<string.h>
using namespace std;
struct num{
    int r,m,p,c,h,e,marks;
    float per;
    char div[20];
};
int main(){
    struct num i[5];
    int j;
    for(j=0;j<=1;j++)
    {
    cout<<"Enter roll no.=";
    cin>>i[j].r;
    cout<<"Maths num=";
    cin>>i[j].m;
    cout<<"Physics num=";
    cin>>i[j].p;
    cout<<"Chemistry num=";
    cin>>i[j].c;
    cout<<"Hindi num=";
    cin>>i[j].h;
    cout<<"English num=";
    cin>>i[j].e;
    i[j].marks=i[j].m+i[j].p+i[j].c+i[j].h+i[j].e;
    cout<<"Total marks="<<i[j].marks<<endl;
    i[j].per=(float)i[j].marks/5;
    cout<<"Percentage="<<i[j].per<<endl;
    if(i[j].per>=60)
    {
        strcpy(i[j].div,"1st");
    }
    else if(i[j].per<=60)
    {
        strcpy(i[j].div,"2nd");
    }
    else if(i[j].per>=40)
    {
        strcpy(i[j].div,"3rd");
    }
    else
    {
        strcpy(i[j].div,"Fail");
    }
}
    cout<<"\t\t-:Table Of Formate:-\t"<<endl;
    cout<<"roll\t\ttotal\t\tpercentage\t\tdivision"<<endl;
    cout<<"......................................................................."<<endl;
    for(j=0;j<=1;j++)
    {
    cout<<i[j].r<<"\t\t"<<i[j].marks<<"\t\t"<<i[j].per<<"\t\t\t"<<i[j].div<<endl;
    }
return 0;
}*/

//enter your current date and enter your birth date and print how many year are old you
/*#include<iostream>
using namespace std;
struct date
{
    int x,y,z;
};

int main(){
    struct date d,d1,age;
    cout<<"Enter current date=";
    cin>>d.x>>d.y>>d.z;
    cout<<"Enter birth date=";
    cin>>d1.x>>d1.y>>d1.z;
    age.x=d.x-d1.x;
    age.y=d.y-d1.y;
    age.z=d.z-d1.z;
    
    if(age.x<0)
    {
        age.x=age.x+30;
        age.y=age.y-1;
    }
    if(age.y<0)
    {
        age.y=age.y+12;
        age.z=age.z-1;
    }
    cout<<"your age="<<age.z<<" year "<<age.y<<" month "<<age.x<<" days"<<endl;
    return 0;
}*/

