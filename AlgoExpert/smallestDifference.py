## O(N*lgN + M*LgM) Time | O(1) Space
def smallestDifference(arrayOne, arrayTwo):
    # Ask you interviewer if it's okay to sort the array in place. 
    # Sometimes, you can't hamper the data.
    arrayOne.sort()
    arrayTwo.sort()

    idxOne = 0
    idxTwo = 0

    smallest = float("inf")
    current = float("inf")
    smallestPair = []

    while(idxOne < len(arrayOne) and idxTwo < len(arrayTwo)):
        firstNum = arrayOne[idxOne]
        secondNum = arrayTwo[idxTwo]

        if firstNum < secondNum:
            current = secondNum - firstNum
            idxOne += 1
        elif secondNum < firstNum:
            current = firstNum - secondNum
            idxTwo += 1
        else:
            return [firstNum, secondNum]
        
        if smallest > current:
            smallest = current
            smallestPair = [firstNum, secondNum]
    
    return smallestPair


# Leetcode - Not available
# Easy