#
#  http://www.programmr.com/zone/python
#
#  Longest_Word.py
#  ProgrammrPy
#


import sys 

if (sys.version_info[0]>=3): raw_input=input

mystr=raw_input().split()
if not mystr: sys.exit(0)

result=map(lambda x: len(x), mystr)

longest_word=max(result) 
Myindex=result.index(longest_word)
longest_word=mystr[Myindex]

print (longest_word)