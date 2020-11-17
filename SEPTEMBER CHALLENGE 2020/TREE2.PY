for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    x=set(a)
    x.discard(0)
    print(len(x))
