i=0
j=0
s = raw_input()
t=raw_input()
S = s.split()
T = t.split()
lenS = len(S)
lenT = len(T)
l=[]
while i<lenS and j<lenT:
	if S[i] != T[j]:
		l.append(S[i])
		i+=1
	else:
		i+=1
		j+=1

while i<lenS:
	l.append(S[i])
	i+=1
	
print l

