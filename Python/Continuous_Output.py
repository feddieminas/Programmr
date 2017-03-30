#
#  http://www.programmr.com/zone/python
#
#  Continuous_Output.py
#  ProgrammrPy
#


import sys

if (sys.version_info[0]>=3): raw_input=input

n=0
nums=[]
while n!=42:
    n=int(raw_input()) #or float or nothing
    if n!=42:
        nums.append(n)
    elif n==101:
        sys.exit(0) #sys.exit() or exit()
    else:
        continue #or pass
    
for i in range(len(nums)):
    print (nums[i])