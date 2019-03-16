import copy
def recur(temp,l,i,n,k):
	if(i>=n):
		return
	# print temp
	if(sum(temp)==k):
		print temp
	temp2 = copy.deepcopy(temp)
	temp2.append(l[i])
	i+=1
	recur(temp2,l,i,n,k)
	recur(temp,l,i,n,k)



l = [1,2,3,4,5,6]
temp = []
recur(temp,l,0,len(l),7)
