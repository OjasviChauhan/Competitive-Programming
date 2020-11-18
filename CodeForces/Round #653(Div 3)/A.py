t = int(input())
for _ in range(t):
	x,y,n = map(int, input().split())
	if n%x > y:
		print(n - ((n%x) - y))
	elif n%x < y:
		print((x * ((n//x) - 1)) + y)
	else:
		print(n)
