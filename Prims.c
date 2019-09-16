#include<stdio.h>
int main()
{
        int cost[10][10];
        int i,j,a,b,u,v,n,min,mincost=0,visited[10]={0},ne=1;
        printf("Enter number of vertices:");
        scanf("%d",&n);
        printf("Enter weights:\n");
        for(i=1;i<=n;i++)
                for(j=1;j<=n;j++)
                        {
                        printf("Enter the weight between node %d and node %d:",i,j);
                        scanf("%d",&cost[i][j]);
                        }
        visited[1]=1;
        while(ne<n)
        {
        min=999;
        for(i=1;i<=n;i++)
                for(j=1;j<=n;j++)
                        if(cost[i][j]<min)
                        if(visited[i]!=0)
                        {
                                min=cost[i][j];
                                a=u=i;
                                b=v=j;
                        }
        if(visited[u]==0||visited[v]==0)
        {
                ne++;
                mincost+=min;
                printf("\nNode %d and node %d:Cost %d.",a,b,min);
                visited[b]=1;
        }
        cost[a][b]=cost[b][a]=999;
        }
        printf("\nThe minimmum cost is %d:\n",mincost);
return 0;
}
