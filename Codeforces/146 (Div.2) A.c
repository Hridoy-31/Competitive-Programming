#include<stdio.h>
#include<string.h>
 
int main()
{
    char s[105];
    int len,i,j,extra=0,unique=0;
    scanf("%s",&s);
    len=strlen(s);
    for(i=0;i<=len-1;i++)
    {
        for(j=i+1;j<=len-1;j++)
        {
            if(s[i]==s[j])
            {
                extra++;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    unique=len-extra;
    if(unique%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
}
