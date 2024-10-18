#include<stdio.h>
int main()
{
    int A,B,C;
    char S,Q;
    scanf("%d %c %d %c %d",&A,&S,&B,&Q,&C);
    if(S=='+')
    {
        if(A+B==C)
        {
            printf("Yes");
        }
        else
        {
            C=A+B;
            printf("%d",C);
        }
    }
    if(S=='-')
    {
        if(A-B==C)
        {
            printf("Yes");
        }
        else
        {
            C=A-B;
            printf("%d",C);
        }
    }
    if(S=='*')
    {
        if(A*B==C)
        {
            printf("Yes");
        }
        else
        {
            C=A*B;
            printf("%d",C);
        }
    }
return 0;
}
