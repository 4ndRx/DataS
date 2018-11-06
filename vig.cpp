#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int i,j,k,text[100],VKey[100],vig[100];
int main()
{
    char str[100],key[100];
    printf("Text de codificat: \n");
    gets(str);
    for(i=0,j=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
        {
        str[j]=toupper(str[i]);
        j++;
        }
    }

    str[j]='\0';
    printf("Text : %s \n",str);
    //Storing string in terms of ascii
    for(i=0;i<strlen(str);i++)
    {
        text[i]=str[i]-'A';
    }

    printf("Cheia: \n");
    gets(key);
    for(i=0,j=0;i<strlen(key);i++)
    {
        if(key[i]!=' ')
        {
        key[j]=toupper(key[i]);
        j++;
        }
    }

    key[j]='\0';
    for(i=0;i<strlen(str);)
    {
        for(j=0;(j<strlen(key))&&(i<strlen(str));j++)
        {
        VKey[i]=key[j]-'A';
        i++;
        }
    }

    for(i=0;i<strlen(str);i++)
    {
     vig[i]=text[i]+VKey[i];
    }
    for(i=0;i<strlen(str);i++)
    {
     if(vig[i]>25)
     {
      vig[i]=vig[i]-26;
     }
    }

    printf("Vigenere: \n");
    for(i=0;i<strlen(str);i++)
    {
      printf("%c",(vig[i]+'A'));
    }

 printf("\n");

 return 0;
}
