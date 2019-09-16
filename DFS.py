def inpu(g):
        print("Enter the edges or -1 to exit.")
        #x=[int(a) for a in input().split()]
        while(1):
                x=[int(a) for a in input().split()]
                if x[0]==-1:
                        break
                if x[0] in g.keys():
                        g[x[0]].append(x[1])
                else:
                        g[x[0]]=[x[1]]
                if x[1] in g.keys():
                        g[x[1]].append(x[0])
                else:
                        g[x[1]]=[x[0]]
        print("Adjacency list -> ",g)
def dfs(g,i):
        global visited
        visited[i]=True
        print("->",i,end=" ")
        for x in g[i]:
                if not visited[x]:
                        dfs(g,x)
g={}
inpu(g)
visited={}
for i in g.keys():
        visited[i]=False
n=int(input("Enter the starting node for DFS:"))
dfs(g,n)
