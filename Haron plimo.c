#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,p;
    int sum,sub,mul,mod;
    float div;

    //it will take two integer numbers from the terminal

    printf("Enter any two integer numbers:\n");
    scanf("%d%d",&s,&p);

    //arithmetic operations are
    sum=s+p;
    sub=s-p;
    mul=s*p;
    div=s/p;
    mod=s%p;

    //printing the final output of the program
    printf("sum of  %d+%d=d\n",s,p,sum);
    printf("subtraction of %d-%d=%d\n",s,p,sub);
    printf("multiplication of%d*%d\n",s,p,mul);
    printf("Division of  %d/%d=%f\n",s,p,div);
    printf("Modulus of  %d%%%d=%d\n",s,p,mod);

    return 0;
}
