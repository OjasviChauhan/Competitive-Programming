t = int(input())
for _ in range(t):
	n = int(input())
	count = 0
	while(True):
		if(n == 1):
			print(count)
			break
		elif (n%6 == 2 or n%6 == 4):
			print(-1)
			break
		elif n%6 == 0:
			n /= 6
			count += 1
		else:
			n *= 2 
			count += 1
