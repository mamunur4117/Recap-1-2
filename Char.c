#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if('A'<=x && x<='Z')
    {
        printf("%c\n",x+32);
    }
    if('a'<=x && x<='z')
    {
        printf("%c\n",x-32);
    }
return 0;
}
