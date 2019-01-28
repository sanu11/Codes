k=input()
l=[]
for i in range(0,k):
	l.append(raw_input())

n=input()
s=raw_input()
x=s.split(" ")
e="";
for i in range(0,n):
	a=0;
	for j in range (0,k):	
		if(l[j] in x[i] or l[j]==x[i]):
			a=1;
	if(a==0):
		e=e+x[i][0].upper()+"."
print e[:(len(e)-1)]	
		
