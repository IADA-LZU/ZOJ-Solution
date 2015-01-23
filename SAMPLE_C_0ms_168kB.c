/*   SAMPLE CODE   */
/* From 《ACM国际大学生程序设计竞赛题解(2)》*/
#include <stdio.h>
#include <string.h>

#define MaxN 100

int main()
{
    char src[MaxN];     //octal decimals
    int i,j;
    while(scanf("%s", src) != EOF)
    {
        char dest[MaxN]={'0'};      //decimal
        int index=0;                //length of the decimal
        for(i=strlen(src)-1; i>1; i--)
        {
            int num= src[i] - '0';      //current place of the octal decimals
            int temp;
            for(j=0; j<index || num; j++)
            {
                temp = num*10 + (j<index?dest[j]-'0':0);
                dest[j] = temp/8+'0';       //quetient
                num = temp%8;               //remainder
            }
            index = j;                      //actual digital of the decimal
        }
        dest[j]='\0';                       //end of string
        printf("%s [8] = 0.%s [10]\n", src,dest);
    }
    return 0;
}
