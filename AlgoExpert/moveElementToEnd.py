def moveElementToEnd(arr, target):
    run = 0
    high = len(arr) - 1

    while(run < high):
        if(run == target):
            arr[run], arr[high] = arr[high], arr[run]
            high -= 1
        else:
            run += 1
    
    return arr


def main():
    moveElementToEnd([2, 1, 2, 2, 2, 3, 4, 2], 2)

if __name__ == '__main__':
    main()


# Leetcode - Not available. Can be checked - https://leetcode.com/problems/move-zeroes/
# Difficulty - Easy