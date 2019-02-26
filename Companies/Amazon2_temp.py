class node:
	def __init__(self,value,arr):
		self.value= value
		self.arr = arr
		self.total=value

	def recur(self):
		print self.value,
		if self.arr!=None:
			for node in self.arr:
				node.recur()


node1 = node(11,None)
node2 = node(2,None)
node3 = node(3,None)

node4 = node(15,None)
node5 = node(8,None)

node6 = node(12,[node1,node2,node3])
node7 = node(18,[node4,node5])

node8 = node(20,[node6,node7])

node8.recur()


def findMaxAvg(node,mx,mxnode):
	sum1=node.value
	count=1
	if node.arr == None:
		return node.value,1,mxnode
	else:
		for tempNode in node.arr:
			tempSum,tempCount,mxnode = findMaxAvg(tempNode,mx,mxnode)
			sum1+=tempSum
			count+=tempCount
			if(sum1/count>mx):
				mx = sum1/count
				mxnode = tempNode

		print sum1,count
		return sum1,count,mxnode	

print "\n"
sum1,count1,mxnode = findMaxAvg(node8,-1,None)
print mxnode.value
