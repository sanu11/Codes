#!/bin/python

import math
import os
import random
import re
import sys


def findCombinations(toDo,numbers,count,dayHours):
    dp=[]
    for i in range(1,len(numbers)+1):
        l = [0 for j in range(0,toDo+1)]
        dp.append(l)
     
    for i in numbers:
        # counter+=1
        for j in range(1,toDo+1):
            if(dp[i-1][j]==1):
                dp[i][j]=1
            elif dp[i-numbers[j]+numbers[j]][j] == dp[i][j]:
                dp[i][j]=1

    print dp


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
    numbers = [num for num in range(1,dayHours+1)]*7
    print len(numbers)
    # subset_sum(numbers,toDo,count)
    findCombinations(toDo,numbers,count,dayHours)   
    return ""        

if __name__ == '__main__':
   

    workHours = int(raw_input().strip())

    dayHours = int(raw_input().strip())

    pattern = raw_input()

    result = findSchedules(workHours, dayHours, pattern)
    print result