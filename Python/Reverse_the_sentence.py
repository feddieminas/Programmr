#
#  http://www.programmr.com/zone/python
#
#  Reverse_the_sentence.py
#  ProgrammrPy
#


import sys

if (sys.version_info[0]>=3): raw_input=input

sentence = raw_input("Enter a sentence:") #.capitalize()

#1)
words=sentence.split()
sentence_rev=" ".join(reversed(words))
#2)
#sentence_rev = " ".join(sentence.split()[::-1])

if (sys.version_info[0]>=3):
    print (sentence_rev)
else:
    print sentence_rev