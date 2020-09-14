check = 'hello'
    
s = input()
running = 0
    
for i in range(len(s)):
    if check[running] == s[i]:
        # print(str(running) + ' ' + s[i])
        running += 1
    if running >= 5:
        break
    
# print(running)
if running == 5:
    print('YES')
else:
    print('NO')