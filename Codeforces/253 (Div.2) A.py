s = input()
x = list()
l = len(s)

for i in range(l):
	if s[i].isalpha():
		x.append(s[i])

r = set(x)
print(len(r))
