from collections import Counter
import math
t = input()

while t:
	inp = raw_input().split(" ")
	n = int(inp[0])
	k = int(inp[1])
	a = raw_input().split(" ")
	a = map(lambda x:int(x),a)	

	i = 0 
	j = 0

	# for all subarrays
	mainCount=0
	while i < n:
		j=i+1
		l=[]
		while j < n+1:
			flag=0
			l.append(a[j-1])
			llen = len(l)
			# count=0
			l.sort()
			c = Counter(l)
			m = long(math.ceil(float(k)/llen))

			if k%m == 0 :
				temp = k/m -1
			else:
				temp = k/m
		
			element = l[temp]
			occurence = c[element]
		
			if c.get(occurence,-1)!=-1:
				mainCount+=1
				flag=1

			j+=1

			if(llen>k):
				if flag:
					mainCount+=(n+1)-j
				break

		i+=1
	print mainCount
	t-=1