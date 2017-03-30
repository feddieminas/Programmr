#
#  http://www.programmr.com/zone/python
#
#  Number_or_not.py
#  ProgrammrPy
#


import sys

if (sys.version_info[0]>=3): raw_input=input

num=raw_input("Enter a number:")

numchk=str(num)
if all(c in '+-.0123456789' for c in numchk):
    print("You entered the number " + str(float(num)))
else:
    print("That was not a number!")