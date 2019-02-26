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

mxnode=None

def findMaxAvg(node):
	global mx,mxnode	
	sum1=node.value
	count=1
	if node.arr == None:
		return 1
	else:
		for tempNode in node.arr:
			tempCount = findMaxAvg(tempNode)
			count+=tempCount
			node.value+=tempNode.value
			if(float(node.value/count)>mx):
				mx = node.value/count
				mxnode = tempNode

		print count
		return count	

print "\n"

mx = -1
findMaxAvg(node8)
# print mx
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


node9 = node(100,None)
node1 = node(90,[node9])
node2 = node(200,None)
node3 = node(300,None)

node4 = node(15,None)
node5 = node(8,None)



node6 = node(120,[node1,node2,node3])
node7 = node(18,[node4,node5])

node8 = node(20,[node6,node7])



node8.recur()

mxnode=None

def findMaxAvg(node):
	global mx,mxnode	
	sum1=node.value
	count=1
	if node.arr == None:
		print node.value,count
		return 1
	else:
		for tempNode in node.arr:
			tempCount = findMaxAvg(tempNode)
			count+=tempCount
			node.value+=tempNode.value
		if(float(node.value)/count>mx):
			mx = float(node.value)/count
			mxnode = node
			# print mx,mxnode.value,count

		# print node.value,count
		return count	

print "\n"

mx = -1
findMaxAvg(node8)
print "gi"
print mx,mxnode.value
