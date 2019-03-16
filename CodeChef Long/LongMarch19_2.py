t = input()
while t:
	inp = raw_input().split(" ")
	n = inp[0]
	d = int(inp[1])
	# print n,d
	l=[]
	for i in n:
		if int(i)<d:
			# print i,d
			l.append(int(i))
	# print l
	while len(l)<len(n):
		l.append(d)


	l = map(str,l)
	print long(''.join(l))
	

	t-=1