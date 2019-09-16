n=int(input("How many items?"))
w=int(input("Enter the knapsack capacity:"))
items=[0]
weights=[0]
value=[0]
for i in range(1,n+1):
        items.append(i)
for i in range(1,n+1):
        print("Enter the value for item ",i,":")
        vi=int(input())
        value.append(vi)
        print("Enter the weight for item ",i,":")
        wi=int(input())
        weights.append(wi)
print(items)
print(value)
print(weights)
m=[[0 for i in range(w+1)]for j in range(n+1)]
i=1
while i<=n:
        x=1
        while x<=w:
                if weights[i]>x:
                        m[i][x]=m[i-1][x]
                else:
                        m[i][x]=max(m[i-1][x],value[i]+m[i-1][x-weights[i]])
                x+=1
        i+=1
for i in m:
        print(i)
print("The maximum value is :",m[n][w])

i=n
k=w
c=[]
while i>0 and k>0:
        if m[i][k]!=m[i-1][k]:
                c.append(i)
                k=k-weights[i]
                i=i-1
        else:
                i=i-1
print("The knapsack elements are -->",c)
