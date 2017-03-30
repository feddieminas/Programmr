#
#  http://www.programmr.com/zone/python
#
#  Remove_Duplicates_from_a_List.py
#  ProgrammrPy
#


import sys

def main():
    size = int(input("Enter the size of the list: "))
    
    myList = []
    
    for i in range(size):
        if (sys.version_info[0]>=3): 
            data = int(input("Enter element %d: " % (i + 1)))
        else:
            data = raw_input("Enter element %d: " % (i + 1))
            data=int(data)
        myList.append(data)
    
    if (sys.version_info[0]>=3):
        print("List after removing duplicates:")
    else:
        print "List after removing duplicates:"   
   #{Write your code here
   
    checked = []
    for e in myList:
       if e not in checked:
           checked.append(e)
           
    if (sys.version_info[0]>=3):
        print (checked)
    else:
        print checked
   
  #}

if __name__ == '__main__':
	main()
