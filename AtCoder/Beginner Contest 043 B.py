s = input() 
l = []
for i in s:
	if i == 'B':
		if l:
			del l[-1]
	else:
		l.append(i)

print("".join(l))
