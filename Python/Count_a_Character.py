#
#  http://www.programmr.com/zone/python
#
#  Count_a_Character.py
#  ProgrammrPy
#


import sys

if (sys.version_info[0]>=3): raw_input=input

inputstg = raw_input("Enter something:")
inputchar = raw_input("Enter the character you want to count:")

#print(inputstg.count(inputchar))
#or
#found=0
#for i in inputstg:
#    if inputchar==i:
#        found+=1;
#print(found)
#or
found=[i for i in inputstg if inputchar==i]

if (sys.version_info[0]>=3):
    print(len(found))
else:
    print len(found)