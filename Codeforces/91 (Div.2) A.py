n = input()
m = int(n)
c = 0

if (m % 4 == 0 or m % 7 == 0):
    print("YES")

elif (m % 47 == 0 or m % 74 == 0):
    print("YES")

else:
    for i in n:
        if (i == '4' or i == '7'):
            c = c + 1

    if (c == len(n)):
        print("YES")

    else:
        print("NO")
