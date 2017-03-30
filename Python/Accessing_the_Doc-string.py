#
#  http://www.programmr.com/zone/python
#
#  Accessing_the_Doc-string.py
#  ProgrammrPy
#


import sys

if (sys.version_info[0]>=3):
    a=input("Do you want to see the documentation ? Yes/No  y/n:")
    a=a.lower()
else:
    a=raw_input("Do you want to see the documentation ? Yes/No y/n:").lower()

if len(a)>1: a=a.title()

class MyClass(object):
    """This is my own created class."""
    
    def noAnswer(self):
        """Thank You."""

if (sys.version_info[0]>=3):
    if (a in ("Yes","y")):
        print (MyClass.__doc__)
    elif (a in ("No","n")):
        print (MyClass.noAnswer.__doc__)
    else:
        pass
else:
    if (a in ("Yes","y")):
        print MyClass.__doc__
    elif (a in ("No","n")):
        print MyClass.noAnswer.__doc__
    else:
    	pass