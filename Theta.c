#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
        int i,n,c1,c2,f,g1,g2;
        cout<<"Enter 'c1' and 'c2' values for the function:";
        cin>>c1>>c2;
        n=0;
        while(1)
        {
                f=7*n*n+7*n+5;
                g1=c1*n*n;
                g2=c2*n*n;
                if((f>=g1)&&(f<=g2))
                {

                        break;
                }
                else n++;
        }
        if(c1<=n && c2>=n)
                cout<<"The constants chosen are wrong:";
        else cout<<"The value of n0 is: "<<n;
        cout<<"The value table\n";
        printf("\tn\tf(n)\tc1*g(n)\tc2*g(n)\n");
        for(i=1;i<=30;i++)
        {
                f=7*i*i+7*i+5;
                g1=c1*i*i;
                g2=c2*i*i;
                printf("\t%d\t%d\t%d\t%d\n",i,f,g1,g2);
        }
return 0;
}
