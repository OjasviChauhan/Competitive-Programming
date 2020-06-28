def solve(n,k,A):
	x = 0
	count = 0
	while(len(A)>0):
		for i in range(0, len(A)):
			if(A[i]%k == 0):
				del A[i]
				x -= 1
				count -= 1
				break
			elif (A[i]+x)%k == 0:
				# A[i] += x
				del A[i]
				break
		x += 1
		count += 1
	return count

t = int(input())
for _ in range(t):
	n,k = map(int, input().split())
	A = list(map(int, input().split()))
	print(solve(n,k,A))
