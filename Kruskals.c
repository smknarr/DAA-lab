#include<stdio.h>
int n,cost[10][10];
void kru(void);
int main()
{
        int i,j;
        printf("Enter the number of nodes:");
        scanf("%d",&n);
        printf("Enter the edges:\n");
        for(i=1;i<=n;i++)
                for(j=1;j<=n;j++)
                {
                printf("Enter weight between %d and %d:",i,j);
                scanf("%d",&cost[i][j]);
                }
        kru();
return 0;
}
void kru()
{
        int i,j,mincost=0,ne=0,a,b,u,v,min,parent[10];
        for(i=1;i<=n;i++)
                parent[i]=0;
        while(ne!=n-1)
        {
                min=999;
                for(i=1;i<=n;i++)
                        for(j=1;j<=n;j++)
                                if(cost[i][j]<min)
                                {
                                        min=cost[i][j];
                                        a=u=i;
                                        b=v=j;
                                }
        while(parent[u]!=0)
                u=parent[u];
        while(parent[v]!=0)
                v=parent[v];
        if(u!=v)
        {
                printf("\nNext node:%d---->%d,cost:%d",a,b,min);
                mincost+=min;
                ne++;
                parent[v]=u;
        }
        cost[a][b]=cost[b][a]=999;
        }
printf("The minimun cost is:%d\n",mincost);
}
