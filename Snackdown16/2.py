from random import *
t=10
print t
while t:
	n=randint(1,100)
	print n
	for i in range (0,n):
		x=randint(-1000,1000)
		print x,
	print ""
	t=t-1
