#include<stdio.h>
#include<math.h>
int main()
{
        int n,c,i;
        printf("\nEnter the 'c' value for the function 7n+5:");
        scanf("%d",&c);
        printf("\nFinding 'n0' value...");
        for(i=1;i<=30;i++)
        {
                if((7*i+5)<(c*i))
                {
                        printf("\nThe value of 'n0' is %d\n",i);
                        n=i;
                        break;
                }
        }
        printf("\nThe table of both functions is:\n");
        printf("\tN\tf(n)\tc*g(n)\n");
        for(i=1;i<=30;i+=1)
                printf("\t%d\t%d\t%d\n",i,(7*i+5),(c*i));
        return 0;
}
