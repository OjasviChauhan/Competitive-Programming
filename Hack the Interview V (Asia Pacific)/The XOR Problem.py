t = int(input())
for _ in range(t):
    x = input()
    k = int(input())
    y = []
    count,i = 0,0
    while(count < k and i < len(x)):
        if x[i] == '0':
            y.append('1')
            count += 1
        else:
            y.append('0')
        i += 1
    for j in range(len(y), len(x)):
        y.append('0')
    print(*y, sep="")
