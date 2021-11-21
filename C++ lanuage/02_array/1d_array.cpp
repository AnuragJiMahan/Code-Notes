//Enter ten values and print sum avg;
/*#include<iostream>
using namespace std;
int  main()
{
int a[10],b,sum=0;
float avg;
cout<<"Enter 10 value in array=\n";
for(b=0;b<=9;b++)
	{
		cin>>a[b];
	}
for(b=0;b<=9;b++)
	{
		sum=sum+a[b];
	}
avg=float(sum)/10;
cout<<"sum="<<sum;
cout<<"avg="<<avg;
return 0;
}*/

//Enter 10 value in array and print largest, smallest value;
/*#include<iostream>
using namespace std;
int main()
{
int a[10],b,l,s;
cout<<"Enter 10 value in array";
for(b=0;b<=9;b++)
{
cin>>a[b];
}
l=a[0];
s=a[0];
for(b=0;b<=9;b++)
{
	if(a[b]>l)
	{
	l=a[b];
	}
	if(s>a[b])
	{
	s=a[b];
	}
}
cout<<"largest value=\n"<<l;
cout<<"smallest value="<<s;
return 0;
}*/

//Enter 10 value and count positive, negative in array formate;
/*#include<iostream>
using namespace std;
int main()
{
	int a[10],i,pc=0,nc=0;
	cout<<"Enter 10 value in array";
	for(i=0;i<=9;i++)
	{
		cin>>a[i];
	}
	pc=0;
	nc=0;
	for(i=0;i<=9;i++)
	{
		if(a[i]>0)
		{
			pc++;
		}
		if(a[i]<0)
		{
			nc++;
		}
	}
	cout<<"Positive value="<<pc;
	cout<<"\nnegative value="<<nc;
}*/

//Enter ten value and print even in array formate;
/*#include<iostream>
using namespace std;
int main(){
	int a[10],b;
	cout<<"Enter ten value in array=\n";
	for(b=0;b<=9;b++)
	{
		cin>>a[b];
	}
	for(b=0;b<=9;b++)
	{
		if(a[b]%2==0)
		{
			cout<<"\t"<<a[b];
		}
	}
return 0;
}*/

//Enter ten value and print odd in array formate;
/*#include<iostream>
using namespace std;
int main(){
	int a[10],b;
	cout<<"Enter ten value in array=\n";
	for(b=0;b<=9;b++)
	{
		cin>>a[b];
	}
	for(b=0;b<=9;b++)
	{
		if(a[b]%2==1)
		{
			cout<<"\t"<<a[b];
		}
	}
return 0;
}*/

//Enter 10 value in array and count prime no;
/*#include<iostream>
using namespace std;
int main(){
	int a[10],b,c,i=0,count=0;
	cout<<"Enter 10 value in array=\n";
	for(b=0;b<=9;b++)
	{
		cin>>a[b];
	}
	cout<<"All prime no.=\n";
	for(b=0;b<=9;b++)
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
			count++;
			cout<<"\t"<<a[b];
		}
	} 
	cout<<"\nCount prime no.="<<count;
return 0;
}*/

//Enter 10 value in array and count perfect no;
/*#include<iostream>
using namespace std;
int main(){
	int a[10],b,c,i,sum=0,count=0;
	cout<<"Enter 10 value in array=\n";
	for(b=0;b<=9;b++)
	{
		cin>>a[b];
	}
	cout<<"perfect no.=";
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
			cout<<"\t"<<c;
			count++;
		}
	}
	cout<<"\nTotal count="<<count;
return 0;
}*/

//Enter 10 value in array and count armstrong no.
/*#include<iostream>
using namespace std;
int main(){
	int a[10],b,c,i,count=0,sum=0,ac=0,p,r,f,x;
	cout<<"Enter 10 value in array=\n";
	for(b=0;b<=9;b++)
	{
		cin>>a[b];
	}
	cout<<"armstrong no.=";
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
			ac++;
			cout<<"\t"<<sum;
		}
	}
	cout<<"\nTotal count="<<ac;
return 0;
}*/

//Enter 10 value and count palindrome from array;
/*#include<iostream>
using namespace std;
int main(){
	int a[10],b,c,i,count=0,r;
	cout<<"Enter 10 value in array=\n";
	for(b=0;b<=9;b++)
	{
		cin>>a[b];
	}
	cout<<"Palindrome no.=";
	count=0;
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
			count++;
			cout<<"\t"<<i;
		}
	}
	cout<<"\nTotal count="<<count;
return 0;
}*/

//Enter ten value in array and search a value;(print found not found)
/*#include<iostream>
using namespace std;
int main(){
	int a[10],b,x,c,r,f;
	cout<<"Enter 10 value in array=\n";
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
	else
	{
		cout<<"Element is not found";
	}
return 0;
}*/

//Enter 10 value in array and find the difference between largest and smallest element;
/*#include<iostream>
using namespace std;
int main(){
	int a[10],b,l,s,d;
	cout<<"Enter 10 value in array=\n";
	for(b=0;b<=9;b++)
	{
		cin>>a[b];
	}
	l=a[0];
	s=a[0];
	for(b=0;b<=9;b++)
	{
		if(a[b]>l)
		{
			l=a[b];
		}
		if(a[b]<s)
		{
			s=a[b];
		}
	}
	cout<<"Largest values="<<l;
	cout<<"\nSmallest values="<<s;
	d=l-s;
	cout<<"\nDifference between largest,smallest value="<<d;
return 0;
}*/

//Enter 10 value in array and interchange first five elements with last five elements
/*#include<iostream>
using namespace std;
int main(){
	int a[10],b,t;
	cout<<"Enter 10 value in array=\n";
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
	cout<<"After interchange of element=";
	for(b=0;b<=9;b++)
	{
		cout<<"\n"<<a[b];
	}
return 0;
}*/

//Enter ten value in array and insert a new no. in given position.
/*#include<iostream>
using namespace std;
int main(){
	int a[11],b,p,c,i;
	cout<<"Enter ten value in array=\n";
	for(b=0;b<=9;b++)
	{
		cin>>a[b];
	}
	cout<<"Enter position=";
	cin>>p;
	cout<<"Insert New no.=";
	cin>>c;
	cout<<"Insert element after in array=";
	for(b=9;b>=p-1;b--)
	{
		a[b+1]=a[b];
	}
	a[p-1]=c;
	for(b=0;b<=10;b++)
	{
		cout<<"\n"<<a[b];
	}
return 0;
}*/

//Enter 10 value in array and delete a no. in given position;
/*#include<iostream>
using namespace std;
int main(){
	int a[10],b,c=0,p,z;
	cout<<"Enter 10 value in array=\n";
	for(b=0;b<=9;b++)
	{
		cin>>a[b];
	}
	cout<<"Enter a no. you want to delete=";
	cin>>p;
	for(b=0;b<=9;b++)
	{
		if(a[b]==p)
		{
			c=1;
			break;
		}
	}
	if(c==1)
	{
		for(z=b;z<=9;z++)
		{
			a[z]=a[z+1];
		}
		cout<<"Now latest array are=\n";
		for(b=0;b<=8;b++)
		{
			cout<<"\n"<<a[b];
		}
	}
	else
	{
		for(b=0;b<=9;b++)
		{
			cout<<"\n"<<a[b];
		}
	}
return 0;
}*/

//Enter 10 value in array and short in assending order;
/*#include<iostream>
using namespace std;
int main(){
	int a[30],b,i,j,o;
	cout<<"Enter ten value in array=\n";
	for(b=0;b<=9;b++)
	{
		cin>>a[b];
	}
	for(b=0;b<=9;b++)
	{
		for(i=b+1;i<=9;i++)
		{
			if(a[b]>a[i])
			{
				o=a[b];
				a[b]=a[i];
				a[i]=o;
			}
		}
	}
	cout<<"The element arranged in assending order=";
	for(b=0;b<=9;b++)
	{
		cout<<"\n"<<a[b]; 
	}
return 0;
}*/

//Enter 10 value in array and duplicate value will be print zero;
/*#include<iostream>
using namespace std;
int main(){
	int a[10],b,i;
	cout<<"Enter 10 value in array=\n";
	for(b=0;b<=9;b++)
	{
		cin>>a[b];
	}
	cout<<"After zero duplicate value are=";
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
	for(b=0;b<=9;b++)
	{
		cout<<"\n"<<a[b];
	}
return 0;
}*/

//Enter 10 value in array and print binary code;
/*#include<iostream>
using namespace std;
int main(){
	int a[10],b,c,l,u,m,s,i,x;
	cout<<"Enter 10 value in array=\n";
	for(b=0;b<=9;b++)
	{
		cin>>a[b];
	}
	cout<<"Enter value to find=";
	cin>>x;
	l=0;
	u=9;
	while(l<=u)
	{
		m=(l+u)/2;
		if(a[m]==x)
		{
			cout<<"value is found "<<m+1;
			cout<<"positive value="<<a[m];
			break;
		}
		else if(a[m]<x)
		{
			l=m;
		}
		else
		{
			u=m;
		}
	}
	return 0;
}*/

//Enter value in array and search binary or not;
/*#include<iostream>
using namespace std;
int main(){
	int a[100],b,x,i=0;
	cout<<"Enter element in array=\n";
	cin>>x;
	for(b=x;b>0;b=b/2)
	{
		a[i]=b%2;
		i++;
	}
	for(b=i-1;b>=0;b--)
	{
		cout<<a[b];
	}
return 0;
}*/

//Enter value in array and print with oquta(18)
/*#include<iostream>
using namespace std;
int main(){
	int a[100],b,x,i=0;
	cout<<"Enter element in array=";
	cin>>x;
	for(b=x;b>0;b=b/8)
	{
		a[i]=b%8;
		i++;
	}
	for(b=i-1;b>=0;b--)
	{
		cout<<" "<<a[b];
	}
return 0;
}*/

//10=A
//11=B
//12=C
//13=D 
//14=E 
//15=F 
//Type for pattern in using array:-

//Enter element and print this type--->431--->1 10 15--->1 A F
//hexza(16)
/*#include<iostream>
using namespace std;
int main(){
	int a[100],b,x,i=0;
	cout<<"Enter element in array=";
	cin>>x;
	for(b=x;b>0;b=b/16)
	{
		a[i]=b%16;
		i++;
	}
	for(b=i-1;b>=0;b--)
	{
		if(a[b]==10)
		{
			cout<<" A ";
		}
		else if(a[b]==11)
		{
			cout<<"B ";
		}						
		else if(a[b]==12)
		{
			cout<<"C ";
		}		
		else if(a[b]==13)
		{
			cout<<"D ";
		}
		else if(a[b]==14)
		{
			cout<<"E ";
		}		
		else if(a[b]==15)
		{
			cout<<"F ";
		}				
		else
		{
			cout<<a[b];
		}								
	}
return 0;
} */

