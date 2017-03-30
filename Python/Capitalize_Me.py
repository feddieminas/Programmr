#
#  http://www.programmr.com/zone/python
#
#  Capitalize_Me.py
#  ProgrammrPy
#


import sys

if (sys.version_info[0]>=3): raw_input=input

a=raw_input("Enter a string:") #could be also a = '123sa'
 
#write your logic here
 
for i,c in enumerate(a):
    if not c.isdigit():
        break

print (a[:i]+a[i:].capitalize())
#print (a[:i]+a[i:].title())
#print (u"a[i:]".title())
#u"hello world".title()