#
#  http://www.programmr.com/zone/python
#
#  Recursive_Functions.py
#  ProgrammrPy
#


import sys

class fact:
    def __init__(self,n):
        self.n=n
    
    def factorial(self):
        if self.n==0:
            return 1
        else:
            temp_n=self.n
            self.n-=1
            return temp_n*self.factorial() # alternatively, (self.n + 1)*self.factorial()


if (sys.version_info[0]>=3):
    inp=int(input())
else:
    inp=raw_input()
    inp=int(inp)

f=fact(inp)
resval=f.factorial()

if (sys.version_info[0]>=3):
    print(resval)
else:
    print resval