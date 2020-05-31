s = input()
d = int(input())
n = len(s)
count = 0
g = 0
for i in range(n):
    if(s[i] != '1'):
        g +=1
    if(s[i] == '1'):
        g = 0
    if(g == d):
        count += 1
        g = 0
print(count) 
