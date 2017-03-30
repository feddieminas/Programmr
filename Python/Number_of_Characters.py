#
#  http://www.programmr.com/zone/python
#
#  Number_of_Characters.py
#  ProgrammrPy
#


import sys

if (sys.version_info[0]>=3): raw_input=input

var = raw_input("Enter the String:")                         # we can simply use "input()" in Python 3.x 
   
#write your function NumberOfChar(str) here.  

def NumberOfChar(sstring):
    counter=0
    for character in sstring:
        counter+=1
        yield counter

try:
    items=NumberOfChar(var)
    item=items.next() #getfirst
    
    while item:
    #NumberOfChar(mystring)  #might not needed this line because next line does the job
        item = items.next()  # get next

except StopIteration:
    print (item) 
    #pass