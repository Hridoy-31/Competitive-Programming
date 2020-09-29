t = int(input())
sum = 2
c = 0
for i in range(t):
	n,x = input().split()
	n = int(n)
	x = int(x)

	if (sum > n):
		print(c+1)
	else:
		while (sum < n):
			sum = sum + x
			c = c + 1

		print(c+1)
		c = 0
		sum = 2

