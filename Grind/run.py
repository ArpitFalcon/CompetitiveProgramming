check = 'hello'

s = input()
running = 0

for i in range(len(s)):
    if check[running] == s[i]:
        running += 1

if running >= 4:
    print('YES')
else:
    print('NO')  