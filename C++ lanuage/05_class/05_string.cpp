//Enter sentence and count
// 1.Digits 48-57
// 2.Vowels
// 3.Consonants 
// 4.Words
// 5.Symbols    
// 6.Capital letters 65-90
// 7.Small letters  97-122
// 8.Repetative letters
/*#include<iostream>
#include<string.h>
using namespace std;
class words{
    private:
    int l,i,j,dc,vc,conc,wc,syc,capitalc,smallc,repetc;
    char b[200];
    public:
    void setval(int x,char k[])
    {
        l=x;
        for(i=0;i<=l-1;i++)
        {
            b[i]=k[i];
        }
    }
    void getDigits()
    {   
        dc=0;
        for(i=0;i<=l-1;i++)
        {
            if(b[i]>=48 && b[i]<=57)
            {
                dc++;
            }
        }
    }
    void getVowels()
    {
        vc=0;
        for(i=0;i<=l-1;i++)
        {
            if(b[i]=='a'|| b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u' || b[i]=='A'|| b[i]=='E' || b[i]=='I' || b[i]=='O' || b[i]=='U')
            {
                vc++;
            }
        }
    }
    void getConsonants()
    {
        conc=0;
        for(i=0;i<=l-1;i++)
        { 
            if(b[i]>=65&& b[i]<=90)
            {
                if(b[i]!='A' && b[i]!='E'&& b[i]!='I'&& b[i]!='O'&& b[i]!='U')
                {
                    conc++;
                }
            }
            else if(b[i]>=97 && b[i]<=122)
            {
                if(b[i]!='a' && b[i]!='e'&& b[i]!='i'&& b[i]!='o'&& b[i]!='u')
                {
                    conc++;
                }
            }
        }
    }
    void getWords()
    {
        wc=0;
        for(i=0;i<=l-1;i++)
        {
            if(b[i]==' ')
            {
                wc++;
            }
        }   
    }
    void getsymbols()
    {
        syc=0;
        for(i=0;i<=l-1;i++)
        {
            if(!(b[i]>=65 && b[i]<=90) && !(b[i]>=97 && b[i]<=122) && !(b[i]>=48 && b[i]<=57) && !(b[i]==' '))
            {
                syc++;
            }
        }
    }
    void getCapitalLetters()
    {
        capitalc=0;
        for(i=0;i<=l-1;i++)
        {
            if(b[i]>=65 && b[i]<=90)
            {
                capitalc++;
            }
        }
    }
    void getSmallLetter()
    {
        smallc=0;
        for(i=0;i<=l-1;i++)
        {
            if(b[i]>=97 && b[i]<=122)
            {
                smallc++;
            }
        }
    }
    void getRepetativesLatters()
    {
        repetc=0;
        for(i=0;i<=l-1;i++)
        {
            for(j=i+1;j<=l-1;j++)
            {
                if(b[i]==b[j])
                {
                    repetc++;
                }
            }
        }
    }
    void display()
    {
        cout<<"Total Letters: "<<l<<endl;
        cout<<"Total Digits: "<<dc<<endl;   
        cout<<"Total Vowels: "<<vc<<endl;
        cout<<"Total Consonants: "<<conc<<endl;
        cout<<"Total Words : "<<wc+1<<endl;
        cout<<"Total Symbols: "<<syc<<endl;
        cout<<"Total Capital Letter: "<<capitalc<<endl;
        cout<<"Total Small Letter: "<<smallc<<endl;
        cout<<"Total Repetatives Letter: "<<repetc<<endl;
    }

};
int main(){
    words object;
    int l,i;
    char b[200];
    cout<<"Enter sentence: ";
    gets(b);
    l=strlen(b);
    object.setval(l,b);
    object.getDigits();
    object.getVowels();
    object.getConsonants();
    object.getWords();
    object.getsymbols();
    object.getCapitalLetters();
    object.getSmallLetter();
    object.getRepetativesLatters();
    object.display();
    return 0;
}*/

// enter string in find sub string.
/*#include<iostream>
#include<string.h>
using namespace std;
class sub{
    private: 
    int l,i;
    char b[200],sub[200];
    public:
    void setval(int x, char k[])
    {
        l=x;
        for(int i=0;i<=l-1;i++)
        {
            b[i]=k[i];
        }
    }
    void getsubs(int start, int end)
    {
        int j=0;
        for(i=start;i<=end;i++,j++)
        {
            sub[j]=b[i];
        }
        sub[j]='\0';
    }
    void display()
    {
        cout<<"Sub String: "<<sub;
    }
};
int main(){
    sub object;
    int l,p,q;
    char b[200];
    cout<<"Enter sentence: ";
    gets(b);
    l=strlen(b);
    cout<<"enter starting index: ";
    cin>>p;
    cout<<"Enter ending index: ";
    cin>>q;
    object.setval(l,b);
    object.getsubs(p,q);
    object.display();
return 0;
}*/

// Enter string and sort string (ram is a good boy------> a is ram boy good)
/*#include<iostream>
#include<string.h>
using namespace std;
class sorting{
    private:
    int l,i,wc,j=0,k=0;
    char a[20],b[20][20];
    public: 
    void setval(int x, char k[])
    {
        l=x;
        for(i=0;i<=l-1;i++)
        {
            a[i]=k[i];
        }        
    }
    void getsort()
    {
        if(a[i]==' ')
        {
            b[j][k]= '\0';
        }
        
    }
    void display()
    {
        
    }
};
int main(){
    sorting object;
    int l;
    char a[20];
    cout<<"Enter sentence: ";
    gets(a);
    l=strlen(a);
    object.setval(l,a);
    object.getsort();
    object.display();
return 0;
}*/

//Enter x and find factorial of x;
// outside the class defination 

/*#include<iostream>
using namespace std;
rclass factorial{
    private:
    int f=1,x,i;
    public:
    void setval(int a)
    {
        x=a;
    }
    void getfact()
    {
        for(i=1;i<=x;i++)
        {
            f=f*i;
        }
    }
    void display()
    {
        cout<<"Factorial of "<<f<<endl;
    }
};
int main(){
    factorial object;
    int x;
    cout<<"Enter x: ";
    cin>>x;
    object.setval(x);
    object.getfact();
    object.display();
return 0;
}*/


