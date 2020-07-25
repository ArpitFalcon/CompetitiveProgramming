def nextGreaterElement(self, n: int) -> int:
        if n < 10:
            return -1
        arr = list()
        while n:
            arr.append(n%10)
            n = n//10

        arr.reverse()
        arr_check = arr[:]
        arr_check.sort(reverse = True)

        if arr_check == arr:
            return -1
        
        i = n-1
        for i in range(len(arr) - 1, -1, -1):
            if arr[i] > arr[i-1]:
                break
        
        element = arr[i-1]
        min_index = i
        for j in range(i + 1, len(arr)):
            if element < arr[j] and arr[j] < arr[min_index]:
                min_index = j
        
        arr[i-1], arr[min_index] = arr[min_index], arr[i-1]
        arr[i:] = sorted(arr[i:])
        
        ans = 0
        for j in range(len(arr)):
            ans *= 10
            ans += arr[j]

        if(ans>2147483647):
            return -1;
        return ans


# LeetCode - https://leetcode.com/problems/next-greater-element-iii/
# Medium