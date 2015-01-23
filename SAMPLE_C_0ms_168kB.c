/*   SAMPLE CODE   */
/* From 《ACM国际大学生程序设计竞赛题解(2)》*/
#include <stdio.h>
#include <string.h>

#define MaxN 100

int main()
{
    char src[MaxN];     //八进制小数
    int i,j;
    while(scanf("%s", src) != EOF)
    {
        char dest[MaxN]={'0'};      //十进制小数
        int index=0;                //十进制小数的长度
        for(i=strlen(src)-1; i>1; i--)
        {
            int num= src[i] - '0';      //八进制小数处理的当前位
            int temp;
            for(j=0; j<index || num; j++)
            {
                temp = num*10 + (j<index?dest[j]-'0':0);
                dest[j] = temp/8+'0';       //商
                num = temp%8;               //余数
            }
            index = j;                      //十进制小数的实际位数
        }
        dest[j]='\0';                       //字符串结束标志
        printf("%s [8] = 0.%s [10]\n", src,dest);
    }
    return 0;
}
