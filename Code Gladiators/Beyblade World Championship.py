t = int(input())
for i in range(t):
    n = int(input())
    List1 = list(map(int, input().split()))
    List2 = list(map(int, input().split()))
    List2.sort()
    List1.sort()
    x,count = 0,0
    for j in range(n):
        if(x>=n):
            break
        while(List1[x] <= List2[j]):
            if(x<n):
                x+=1
            else:
                break
        if(x>=n):
            break
        count += 1
        x += 1
    print(count)
