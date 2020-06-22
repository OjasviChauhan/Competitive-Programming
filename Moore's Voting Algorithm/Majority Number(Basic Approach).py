def check(a,n):
	find = False
	for i in range(n):
		count = 0
		for j in range(n):
			if(a[i]==a[j]):
				count += 1
			if(count > n//2):
				print(a[j])
				find = True
				break
		if(find):
			break
	if(find != True):
		print('No')

a = list(map(int,input().split()))
check(a,len(a))
