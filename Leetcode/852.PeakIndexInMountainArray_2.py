input_string = raw_input("Enter a list element separated by space ")
list1  = input_string.split()
lo = 0 
list1 = [int(num) for num in list1]
hi = len(list1)-1
while lo<=hi:
	mid = (lo+hi)/2
	# print mid
	if(list1[mid]==0 and list1[mid+1]==1):
		break
	elif(list1[mid]==0):
		lo = mid+1
	else:
		hi = mid-1
print mid