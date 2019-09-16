#include<stdio.h>
int main()
{
        int i,n,c;
        printf("Enter the 'c' value for the function:");
        scanf("%d",&c);
        i=1;
        while(1)
        {
                if((3*i*i+4*i+3)>(c*i*i))
                {
                        printf("\nThe value of 'n0' is %d:",i);
                        n=i;
                        break;
                }
                else i++;
        }
        printf("The value table:\n");
        printf("\tn\tf(n)\tc*g(n)\n");
        for(i=1;i<=30;i++)
                printf("\t%d\t%d\t%d\n",i,(3*i*i+4*i+3),(c*i*i));
        return 0;
}
