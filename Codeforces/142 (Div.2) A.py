s,n = input().split()
s = int(s)
n = int(n)
l = list()
c = 0

for i in range(n):
	x,y = input().split()
	x = int(x)
	y = int(y)
	l.append([x,y])

l.sort()

for i in range(n):
	if (s > l[i][0]):
		s = s + l[i][1]
	else:
		print("NO")
		c = c + 1
		break 
if (c == 0):
	print("YES")
