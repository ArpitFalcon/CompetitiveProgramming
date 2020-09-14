luckyNums = [4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777]

chk = False
num = int(input())
for i in range(len(luckyNums)):
    if num % luckyNums[i] == 0.0:
        chk = True
        
if chk:
    print('YES')
else:
    print('NO')