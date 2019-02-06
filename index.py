myList = ['2','4','6','8']
myIter = iter(myList)
for i in range(0, len(myList)):
    next_item = next(myIter)
    if next_item == "4":
        print(i,"is the index of the given input")
