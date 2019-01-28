#!/bin/python

import math
import os
import random
import re
import sys
import numpy



#
# Complete the 'findSchedules' function below.
#
# The function is expected to return a STRING_ARRAY.
# The function accepts following parameters:
#  1. INTEGER workHours
#  2. INTEGER dayHours
#  3. STRING pattern
#
import itertools
def findCombinations(toDo,count,dayHours):        
    numbers = [num for num in range(1,dayHours+1)]
    # print numbers
    for i in range(len(numbers), 0, -1):
        for seq in itertools.permutations(numbers, i):
            print seq
            if sum(seq) == toDo:
                print "hi"
    # print "hi"



def findSchedules(workHours, dayHours, pattern):
    # Write your code here 
    total=0
    count=0
    for day in pattern:
        if day != '?':
            total+=int(day)
        else:
            count+=1
    toDo = workHours - total
    print total,toDo,count
    findCombinations(toDo,count,dayHours)   
    return ""        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    workHours = int(raw_input().strip())

    dayHours = int(raw_input().strip())

    pattern = raw_input()

    result = findSchedules(workHours, dayHours, pattern)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()
def subset_sum(numbers,target,count, partial=[]):
    s = sum(partial)

    # check if the partial sum is equals to target
    if s == target and len(partial) == count:    
        print "sum(%s)=%s" % (partial, target)
    if s >= target:
        return  # if we reach the number why bother to continue

    for i in range(len(numbers)):
        n = numbers[i]
        remaining = numbers[i+1:]
        subset_sum(remaining, target,count, partial + [n]) 
