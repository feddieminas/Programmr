#
#  http://www.programmr.com/zone/python
#
#  Rotate_List.py
#  ProgrammrPy
#


import collections

def main():
    size = int(input("Enter size of the list: "))
    myList = []
    
    print("Enter %d elements: " % size)
    
    for i in range(size):
        data = int(input("Enter element %d: " % (i + 1)))
        myList.append(data)   
    
    d = int(input("By how much you want to rotate the elements of the list: "))

    #1)
    myList=list(leftRotateList(myList, d))
    print("After rotating by a factor of %d:" %d)
    print(myList)
    
    #2)
    #T=rotator(myList,d)
    #MyRotT=T.next() #the rotated one
    #print("After rotating by a factor of %d:" %d)
    #print (MyRotT) #however while testing the code the exercise do not accept it
    
#{Write your code here

#1)
def leftRotateList(myList, d):
    #1a) 
    myList = collections.deque(myList)
    myList.rotate(-d)
    return myList
    #OR
    #1b)
    #return myList[x:]+myList[:x] #however while testing the code the exercise do not accept it

#2)
#def rotator(seq,offset=1):
#    while True:
#        seq=seq[offset:] + seq[:offset]
#        yield seq

#}
if __name__ == '__main__':
    main()    