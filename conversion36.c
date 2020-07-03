#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int val(char c) 
{ 
    if (c >= '0' && c <= '9') 
        return (int)c - '0'; 
    else
        return (int)c - 'A' + 10; 
} 
int main()
{   char n[10],a[10];
    int i,max,sum,num;
    double base,j;
    scanf("%s",n);
    while(strlen(n)!=0)
    {
        max=0;
        for(i=0;i<strlen(n);i++)
        {
        num=val(n[i]);
        if(num>max)
        max=num;
        }
        base=max+1;
        sum=0;
        j=0;
        for(i=strlen(n)-1;i>=0;i--)
        {
            num=val(n[i]);
            sum=sum+(num*pow(base,j++));
        }
        sprintf(a,"%d",sum);
        if(!strcmp(n,a))
        break;
        strcpy(n,a);
    }
    printf("%s",n);
    return 0;
}
