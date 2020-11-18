
t = int(input())
for i in range(t):
	n, x = map(int, input().split())
	a = [int(s) for s in input().split()]
	c = 0
	for el in a:
		if el % 2 == 1:
			c += 1
	if c == 0:
		print("No")
	elif x % 2 == 0 and c == n:
		print("No")
	elif x == n and c % 2 == 0:
		print("No")
	else:
		print("Yes")
