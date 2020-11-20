t=int(input())
while t>0:
    n=int(input())
    l=[int(x) for x in input().split()]
    best,worst=n,1 
    for i in range(n):
        temp=[0]*n
        temp[i]=1 
        for j in range(i):
            if(l[j]>l[i]):
                temp[j]=1 
        for j in range(i+1,n):
            if(l[j]<l[i]):
                temp[j]=1 
        for j in range(i):
            if(temp[j]==1):
                for k in range(i,n):
                    if(l[k]<l[j]):
                        temp[k]=1 
        for j in range(i+1,n):
            if(temp[j]==1):
                for k in range(i):
                    if(l[j]<l[k]):
                        temp[k]=1
        c=temp.count(1)
        worst=max(c,worst)
        best=min(c,best)
    #print(c)
    print(best,worst)
    t-=1
