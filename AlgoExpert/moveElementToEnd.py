def moveElementToEnd(array, toMove):
    run = 0
    high = len(array) - 1

    while run < high:
        while run < high and array[high] == toMove:
            high -= 1
        if array[run] == toMove:
            array[run], array[high] = array[high], array[run]
        run += 1
    
    return array


def main():
    print(moveElementToEnd([2, 1, 2, 2, 2, 3, 4, 2], 2))
    print(moveElementToEnd([3, 24, 1, 56, 2, 4, 2, 1, 7, 8, 1, 7], 1))


if __name__ == '__main__':
    main()


# Leetcode - Not available. Can be checked - https://leetcode.com/problems/move-zeroes/
# Difficulty - Easy