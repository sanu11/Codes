def missingWords(s, t):
    # Write your code here

    myarr=[]
    wordsS = s.split()
    wordsT = t.split()

    
    for a in wordsS:
        if a not in wordsT:
            myarr.append(a)
    return myarr

s=raw_input()
t=raw_input()
l=missingWords(s,t)
print l