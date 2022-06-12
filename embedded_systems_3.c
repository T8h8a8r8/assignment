/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char str[30]={'E','m','b','e','d','d','e','d',' ','S','y','s','t','e','m','s'};
    int l=strlen(str);
    int i,j,k,temp;
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;str[j]!=0;j++)
        {
            if(str[j]==str[i])
            {
                for(k=j;str[k]!=0;k++)
                {
                    str[k]=str[k+2];
                }
            }
        }
    }
    printf("%s",str);
    return 0;
}

