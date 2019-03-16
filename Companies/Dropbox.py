#!/bin/python

import math
import os
import random
import re
import sys


def recur(machine,l,initial_machines,network,n,vi):
    for i in range(0,n):
        if vi[i]!=1:
            if network[machine][i] == 1:
                vi[i]=1
                recur(i,l,initial_machines,network,n,vi)
    return vi
            



# Complete the repair_machine function below.
def repair_machine(network, initial_machines):
    n =len(network)
    mainArray = {}
    # for machine in initial_machines:
        # findConnected()
    allVisited = {}
    for machine in initial_machines:
        l=[]
        vi=[0 for i in range(0,n)]
        vi[machine]=1
        vi = recur(machine,l,initial_machines,network,n,vi)
        # print machine
        # print vi
        allVisited[machine] = vi
        # total = sum(vi)
        # print "total",total
        # mainArray[machine] = total
    print "all",allVisited
    for key in allVisited:
        flag=0
        mainArray[key] = 0
        l = allVisited[key]
        for node in range(0,n):
            flag=0
            # this node shouldnt be part of other lists
            if l[node] == 1:
                for key2 in allVisited:
                    if key2!= key:
                        l2 = allVisited[key2]
                        if l2[node] ==1:
                            flag =1
                if flag != 1:
                    mainArray[key]+=1
        # print main?Array
    mx = -1
    print mainArray
    index = 0
    i=0
    for key in mainArray:
        if i==0:
            index = key
            mx = mainArray[key]
        else:
            if mainArray[key]> mx:
                mx = mainArray[key]
                index = key
        i=1
    return [index,mx]


if __name__ == '__main__':