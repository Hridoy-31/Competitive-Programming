s = input()
c = 0
up = s.upper()

if ('a' <= s[0] <= 'z'):
	l = len(s)
	for i in range(l):
		if ('a' <= s[i] <= 'z'):
			c = c + 1
	if (c <= 1):
		print(f"{s.title()}")
	else:
		print(s)

elif ('A' <= s[0] <= 'Z'):
	l = len(s)
	for i in range(l):
		if ('A' <= s[i] <= 'Z'):
			c = c + 1
	if (c < l):
		print(s)

if (s == up):
	print(f"{s.lower()}")
