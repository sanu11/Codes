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
		while j < n+1:
			l = a[i:j]
			llen = len(l)
			# count=0
			l.sort()
			c = Counter(l)
			# newC = sorted(c.items())
			
			total=0
			value1=0
			m = long(math.ceil(float(k)/llen))
			# print c,m
			# if(c[key])
			# if()
			# for key,value in newC:
			# 	total+=m*value
			# 	if(total>=k):
			# 		value1=value
			# 		break
			if k%m == 0 :
				temp = k/m -1
			else:
				temp = k/m
			element = l[temp]
			occurence = c[element]
			# print k,m,value1
			if occurence in c:
				# print value
				mainCount+=1

			j+=1
		i+=1
	print mainCount
	t-=1