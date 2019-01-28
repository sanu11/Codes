from fractions import gcd
t=input()
while(t>0):
	n=input()
	sum=n
	if(n>2):
		sum=sum+1
	for i in range (2,n):
		sum=sum+n/gcd(n,i)
	print sum
	t=t-1
	