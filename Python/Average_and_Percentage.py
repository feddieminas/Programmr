#
#  http://www.programmr.com/zone/python
#
#  Average_and_Percentage.py
#  ProgrammrPy
#


import sys

if (sys.version_info[0]>=3):
	x = input("Enter the marks in maths:")
	y = input("Enter the marks in hindi:")
	a = input("Enter the marks in science:")
	b = input("Enter the marks in english:")
else:
	x = raw_input('Enter the marks in maths:')
	y = raw_input('Enter the marks in hindi:')
	a = raw_input('Enter the marks in science:')
	b = raw_input('Enter the marks in english:')
	
numlist=[]
for n in [x,y,a,b]:
    myfinalnum=round(float(n),2)
    numlist.append(myfinalnum)

total=0
for n in numlist:
    total+=n

total=float(total)
myavg=total/len(numlist)
mypercent=(myavg/100)*100

if (sys.version_info[0]>=3):
	print ("{:.2f}".format(myavg))
	print ("{:.2f}".format(mypercent))
else:
	print("%.2f" % myavg)
	print("%.2f" % mypercent)
