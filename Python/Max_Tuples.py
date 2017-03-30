#
#  http://www.programmr.com/zone/python
#
#  Max_Tuples.py
#  ProgrammrPy
#


import sys

numbers=()
numberscount=("first","second","third","fourth","fifth")
count=0
while count<5:
    if (sys.version_info[0]>=3):
        X = float(input("Enter the " + numberscount[count] + " number :"))
    else:
        X = raw_input("Enter the " + numberscount[count] + " number :")
        X=float(X)
	
	numbers+=(X,)
    count+=1	

if (sys.version_info[0]>=3):
    print(max(numbers))
else:
    print max(numbers)