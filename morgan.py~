t=input()
max=1000000007
mod=73741817
while(t):
	x=input()
	#print ways(x)-pow(2,x-1)
	y=6
	for i in range(0,(x-2)/4):
		y=((y%max*81)%max+40)%max
	if((x-2)%4==1):
		y=((y%max*3)%max+1)%max
	elif((x-2)%4==2):
		y=((y%max*9)%max+4)%max
	elif((x-2)%4==3):
		y=((y%max*9)%max+4)%max
		y=((y%max*3)%max+1)%max	
	
	if(x>30):
		z=pow(2,x-30-1)%max*mod
	else:
		z=(pow(2,x-1))%max
	e=y-z%max
	print e
	print e%max
	t=t-1
