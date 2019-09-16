def merge(a):
        print("Splitting ",a,"...")
        if len(a)>1:
                m=len(a)//2
                left=a[:m]
                right=a[m:]
                merge(left)
                merge(right)
                i=0
                j=0
                k=0
                while i<len(left) and j<len(right):
                        if left[i]<right[j]:
                                a[k]=left[i]
                                i+=1
                        else:
                                a[k]=right[j]
                                j+=1
                        k+=1
                while i<len(left):
                        a[k]=left[i]
                        i+=1
                        k+=1
                while j<len(right):
                        a[k]=right[j]
                        j+=1
                        k+=1
        print("Merging ",a,"...")
print("Enter the array:")
a=[int(x) for x in input().split()]
print("Before merging...")
print(a)
merge(a)
print("After merging...")
print(a)
