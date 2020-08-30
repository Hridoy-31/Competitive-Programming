n = int(input())

for i in range(n):
    x,y = input().split()
    x = int(x)
    y = int(y)
    #y = int(input())

    if ((1 <= x <= 100) and (1 <= y <= 100)):
        sum = x + y
        print(sum)
