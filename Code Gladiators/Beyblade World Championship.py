T=int(input())
for _ in range(T):
    N=int(input())
    A=list(map(int, input().split()))
    B=list(map(int, input().split()))
    A.sort()
    B.sort()
    count=0
    j=0
    for i in range(0,N):
        if(A[i]>B[j]):
            count+=1
            j+=1
    print(count)
