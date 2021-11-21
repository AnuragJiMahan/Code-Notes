//File handling:- file handling is C enable us to create, update, read and delete the files stored on the local file system through our C program.
/*#include<stdio.h>
int main(){
    int i=1,x;
    FILE *fp;// file is a data type;
    fp=fopen("number.txt","w");
    printf("Enter 10 values=\n");
    while(i<=10)
    {
        scanf("%d",&x);
        fprintf(fp,"%d\n",x);
        i++;
    }
    fclose(fp);
    printf("File Successfully write");
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int i=1,x;
    FILE *fp;// file is a data type;
    fp=fopen("number.txt","r");
    printf("Enter 10 values=\n");
    while(i<=10)
    {
        fscanf(fp,"%d",&x);
        printf("%d\n",x);
        i++;
    }
    fclose(fp);
    printf("File Successfully read");
    return 0;
}*/

//Enter 5 name in file handling and write and read.
/*#include<stdio.h>
int main(){
    int i=1;
    char a[20];
    FILE *fp;
    fp=fopen("name.txt","w");
    printf("Enter five name=\n");
    while(i<=5)
    {
        scanf("%s",&a);
        fprintf(fp,"%s\n",);
        i++;
    }
    fclose(fp);
    printf("File Successfully write");
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int i=1;
    char a[20];
    FILE *fp;
    fp=fopen("name.txt","r");
    printf("Enter five name=\n");
    while(i<=5)
    {
        fscanf(fp,"%s",a);
        printf("%s\n",a);
        i++;
    }
    fclose(fp);
    printf("File Successfully read");
    return 0;
}*/

//enter a value in infinine when we enter a no. is 100 then loop will be break;
/*#include<stdio.h>
int main(){
    int x;
    printf("Enter a value in infinine=\n");
    FILE *fp;
    fp=fopen("infinity num.txt","w");
    for(;;)
    {
        scanf("%d",&x);
        if(x==100)
        {
            break;
        }
        fprintf(fp,"%d\n",x);
    }
    fclose(fp);
    printf("File Successfully write");
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int x;
    printf("Enter a value in infinine=\n");
    FILE *fp;
    fp=fopen("infinity num.txt","r");
    while(!feof(fp))
    {
        fscanf(fp,"%d",&x);
        
        printf("%d\n",x);
    }
    fclose(fp);
    printf("File Successfully read");
    return 0;
}*/

