listOfNodes = []
class node:

	def __init__(self,id,access,accessCows):
		self.id = id
		# 0 confidential
		# 1 shared
		self.access = access
		self.accessCows = accessCows
		self.children =[]
		self.incoming=0
		self.outgoing =0



def insert(listofNodes, parent,child):
	childNode =None
	parentNode=None
	print parent,child

	for node in listofNodes:
		print "ndoe",node.id
		if node.id == parent:
			parentNode = node
		if node.id == child:
			childNode = node
		# print "hi",childNode.id,parentNode.id
	if(childNode!= None and parentNode!= None):
		print "hi",childNode.id,parentNode.id
		parentNode.outgoing = 1
		childNode.incoming = 1
		parentNode.children.append(childNode)


def treeTraverse(root,cows):
	
	if root.outgoing == 0:
		for i in root.accessCows:
			cows[i]+=1
	# if(root.access == 1):
	for child in root.children:
		if child.access == 1:
			child.accessCows.extend(root.accessCows)
		treeTraverse(child,cows)



q = input()
mn = raw_input()
m = int(mn.split()[0])
n = int(mn.split()[1])

for i in range(m):
	# temp = raw_input()
	temp = raw_input().split()
	id1 = int(temp[0])
	numofCows = int(temp[1])
	cowIds=temp[2:]
	cowIds = [int(id1) for id1 in cowIds]

	Node = node(id1,1,cowIds)
	listOfNodes.append(Node)

for i in range(0,n):
	temp = raw_input().split()
	id1 = int(temp[0])
	numofCows = int(temp[1])
	cowIds=temp[2:]
	cowIds = [int(id1) for id1 in cowIds]
	Node = node(id1,0,cowIds)
	listOfNodes.append(Node)
	
d = input()
for i in range(d):
	temp = raw_input().split()
	parent = int(temp[0])
	child = int(temp[1])
	insert(listOfNodes,parent,child)

numLeaf=0
for node in listOfNodes:
	if node.incoming ==0:
		root = node
	if node.outgoing == 0:
		numLeaf+=1

for node in listOfNodes:
	print node.id,node.outgoing,node.incoming
cows = [ 0 for i in range(q) ]

treeTraverse(root,cows)
print cows
print numLeaf
for i in range(0,q):
	# print cow
	if cows[i]!= numLeaf:
		print i