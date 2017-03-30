#
#  http://www.programmr.com/zone/python
#
#  Replace_Me.py
#  ProgrammrPy
#

import sys

if (sys.version_info[0]>=3): raw_input=input

a=raw_input("Enter something:")
b=raw_input("Enter the character you wanna replace:")
c=raw_input("Enter the character you wanna replace the old one with:")

 
# write your logic here

a=list(a)

#Find character in string and position
#position=a.find(b)  if no found equals to -1 
#position=a.index(b) if no found throws an exception

for i,f in enumerate(a):
    if b==f:
        position=i
        a[position]=c

    

#a=a.replace(b,c)
print (''.join(a))