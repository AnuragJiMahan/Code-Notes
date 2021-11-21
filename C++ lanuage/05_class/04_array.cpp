// enter 10 values in array and count a. perfect   b. prime   c. palindrome   d. armstrong 
/*#include<iostream>
using namespace std;
class count {
    private:
    int a[10],b,c,i,p,r,f,x;
    int count=0,sum=0,primecount=0,perfectcount=0,palindromecount=0,armstrongcount=0;
    public:
    void setval(int m[])
    {
        for(b=0;b<10;b++)
        {
            a[b]=m[b];
        }
    }
    void getprime()
    {
        for(b=0;b<10;b++)
        {
            i=0;
            for(c=2;c<a[b];c++)
            {
                if(a[b]%c==0)
                {
                    i=1;
                    break;                    
                }
            }
            if(i==0)
            {
                primecount++; 
            }
        }
    }
    void getperfect()
    {
        for(b=0;b<=9;b++)
	    {
		    sum=0;
		    for(c=1;c<a[b];c++)
		    {
			    if(a[b]%c==0)
			    {
				    sum=sum+c;
			    }
		    }
		    if(sum==a[b])
		    {
			    perfectcount++;
		    }
	    }
    }
    void getpalindrome()
    {
        for(b=0;b<=9;b++)
	    {
    		i=0;
	    	for(c=a[b];c>0;c=c/10)
		    {
 			    r=c%10;
			    i=(i*10)+r;
		    }
		    if(i==a[b])
		    {
			    palindromecount++;
		    }
	    }
    }
    void getarmstrong()
    {
        for(b=0;b<=9;b++)
	    {
		    count=0;
		    for(i=a[b];i>0;i=i/10)
		    {
    			count++;
	    	}
    		sum=0;
	    	for(x=a[b];x!=0;x=x/10)
    		{
			    r=x%10;
			    f=1;
			    p=count;
			    while(p>=1)
			    {
				    f=f*r;
				    p--;
			    }
			    sum=sum+f;
		    }
		    if(sum==a[b])
		    {
			    armstrongcount++;
			}
	    }
    }
    void display()
    {
        cout<<"Total Prime No: "<<primecount<<endl;
        cout<<"Total Perfect No: "<<perfectcount<<endl;
        cout<<"Total Palindrome No: "<<palindromecount<<endl;
        cout<<"Total Armstrong No: "<<armstrongcount<<endl;
    }
};
int main(){
    count object;
    int a[10],b;
    cout<<"Enter 10 value in array: "<<endl;
    for(b=0;b<10;b++)
    {
        cin>>a[b];
    }
    object.setval(a);
    object.getprime();
    object.getperfect();
    object.getpalindrome();
    object.getarmstrong();
    object.display();
return 0;
}*/

// enter roll, name and five subject marks of a student and find total, percenta and division for five student
/*#include<iostream>
#include<string.h>
using namespace std;
class marks{
    private:
    int r,marks[5],i,total;
    char div[20],n[20];
    public:
    float per;
    void setval(int i, int k[], char a[])
    {
        int q;
        r=i;
        for(q=0;q<5;q++)
        {
            marks[q]=k[q];
        }
        strcpy(n,a);
    }
    void getmarks()            
    {
        total=0;
        for(i=0;i<=4;i++)
        {
        total=total+marks[i];
        }
    }
    void getper()
    {
        per=(float)total/5;   
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
        cout<<r<<"\t\t"<<n<<"\t\t"<<total<<"\t\t"<<per<<"\t\t"<<div;
    }
};
int main(){
    marks object[5];   // this statement is create an array of objects
    marks faltu;
    int marks[5],r,i,j,t;
    char n[20];
    float per[5];
    for(i=0;i<3;i++)
    {
    cout<<"Enter Roll no.=";
    cin>>r;
    cout<<"enter five subject marks\n";
     for(j=0;j<=4;j++)
     {
     cin>>marks[j];
     }
    cout<<"Enter Name=";
    cin>>n;
    
    object[i].setval(r,marks,n);
    object[i].getmarks();
    object[i].getper();
    object[i].getdiv();
    }

    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(object[i].per<object[j].per)
            { 
                faltu=object[i];
                object[i]=object[j];
                object[j]=faltu;
            }
        }
        
    }
    cout<<"\t\t-:Table Of Formate:-\t"<<endl;
    cout<<"-------------------------------------------------------\n";
    cout<<"Roll\t\tName\t\tTotal\t\tPercentage\tDivision\tRank\n";
    cout<<"-------------------------------------------------------\n";
    
    for(i=0;i<3;i++)
    {
    object[i].display();
    cout<<"\t"<<i+1<<endl;
    }
return 0;
}*/

// enter code, name, and salary of employee and find hra,da,ta,gs,pf,ns
/*#include<iostream>
#include<string.h>
using namespace std;
class income{
    private:
    int salary,hra,da,ta;
    char n[20];
    public:
    int gs,pf,ns;
    void setval(int i, char k[])
    {
        salary=i;
        strcpy(n,k);
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
    void getgs()
    {
        gs=salary+hra+da+ta;
    }
    void getpf()
    {
        pf=(15*salary)/100;
    }
    void getns()
    {
        ns=gs-pf;
    }
    void display()
    {
        cout<<salary<<"\t\t"<<n<<"\t\t"<<gs<<"\t\t"<<pf<<"\t\t"<<ns<<endl;
    }
};
int main(){
    income object[5];
    int salary,i,gssum=0,pfsum=0,nssum=0;
    char n[20];
    for(i=0;i<5;i++)
    {
    cout<<"Enter Salary: ";
    cin>>salary;
    cout<<"Enter Name: ";
    cin>>n;
    object[i].setval(salary,n);
    object[i].gethra();
    object[i].getda();
    object[i].getta();
    object[i].getgs();
    object[i].getpf();
    object[i].getns();
    }
    for(i=0;i<5;i++)
    {
        gssum=gssum+object[i].gs;
        pfsum=pfsum+object[i].pf;
        nssum=nssum+object[i].ns;
    }
    cout<<"\t\t\t-:Table Of Formate:-\t"<<endl;
    cout<<"Salary"<<"\t\t"<<"Name"<<"\t\t"<<"Gs"<<"\t\t"<<"Pf"<<"\t\t"<<"Ns"<<"\n";
    cout<<"---------------------------------------------------------------------\n";
    for(i=0;i<5;i++)
    {
    object[i].display();
    }
    cout<<"---------------------------------------------------------------------\n";
    cout<<"Total:\t\t\t\t"<<gssum<<"\t\t"<<pfsum<<"\t\t"<<nssum;
return 0;
}*/