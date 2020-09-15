    t = int(input())
     
    for i in range(t):
    	n1,n2 = input().split()
    	
    	n1 = n1[::-1]
    	n1 = int(n1)
     
    	n2 = n2[::-1]
    	n2 = int(n2)
     
    	sum = n1 + n2
     
    	sum = str(sum)
     
    	sum = sum[::-1]
     
    	sum = int(sum)
     
    	print(sum) 
