#
#  http://www.programmr.com/zone/python
#
#  Roots.py
#  ProgrammrPy
#


import sys

if (sys.version_info[0]>=3): raw_input=input

n=int(raw_input())  #ex. 9
x=int(raw_input())  #ex. 2

sqrt=float(1.0/x) #difference if u insert 1.0 instead of 1
sqrt=n**(sqrt)

#1)
print (sqrt)
#2)
#if sqrt.is_integer():
#    print ("%0.1f" % sqrt) 
#else:
#    print ("%s" % sqrt)  
#3)
#if sqrt.is_integer():
#    print ("{0:.1f}".format(sqrt))
#else:
#    print ("{0!s}".format(sqrt))