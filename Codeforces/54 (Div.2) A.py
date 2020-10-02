import re

s = input()
r = re.search('h.*e.*l.*l.*o', s)

if r:
    print("YES")
else:
    print("NO")
