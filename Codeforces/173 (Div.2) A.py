n = int(input())
count = 0

for i in range(0,n):
    val = input()
    if '+' in val:
        count = count + 1
    else:
        count = count - 1
        
print(count)
