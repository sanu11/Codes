class Solution():
	def getList(self,S):
		l1=[]
		for x in S:
			if(x!='#'):
				l1.append(x)
			if(len(l1)!=0 and x=='#'):
				l1.pop()
		return l1
		
	def backspaceCompare(self, S, T):
		l1= self.getList(S)
		l2 = self.getList(T)
		print l1,l2
		if(l1==l2):	
			return True
		else:
			return False


S = raw_input()
T = raw_input()
sol =Solution()
val = sol.backspaceCompare(S,T)
print val