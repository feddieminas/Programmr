#
#  http://www.programmr.com/zone/python
#
#  Current_Date_and_Time.py
#  ProgrammrPy
#


import sys
import time

if (sys.version_info[0]>=3):
    YN = input("Current Day, Date and Time (y/n):")
    YN = YN.lower()
else:
    YN=raw_input("Current Day, Date and Time (y/n):").lower()

if YN in ('y'):
    print (time.strftime("%c"))
elif YN in ('n'):
    print ('Thank You')
else:
    #pass
    print ('Thank You')