def check(x,y,n):
    k = 0
    for i in range(0,n-1):
        if(x[i] >= y[i] and x[i] <= y[i+1]):
            k += 1
        else: 
            break
    if(k == n-1):
        if(x[-1] >= y[-1]):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")

t = int(input())
for _ in range(t):
    n = int(input())
    b = list(map(int, input().split()))
    g = list(map(int, input().split()))
    b.sort()
    g.sort()
    z = 0
    if(g[0] < b[0]):
        check(b,g,n)
    elif(g[0] > b[0]):
        check(g,b,n)
    else:
        for i in range(n):
            if(b[i] > g[i]):
                check(b[i:], g[i:], n-i)
                break
            elif(b[i] < g[i]):
                check(g[i:], b[i:], n-i)
                break
            z += 1
        if(z == n):
            print("YES")
