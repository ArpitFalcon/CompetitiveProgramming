s = list(input())
n = len(s)

for i in range(len(s) - 1):
    if int(s[i]) % 2 == 0 and int(s[i]) > int(s[n-1]):
        continue
    elif int(s[i]) % 2 == 0:
        s[i], s[n-1] = s[n-1], s[i]
        break

if int(s[n-1]) % 2:
    for i in range(len(s) - 2, -1, -1):
        if int(s[i]) % 2 == 0:
            s[i], s[n-1] = s[n-1], s[i]
            break


if int(s[n-1]) % 2:
    print(-1)
else:
    print(''.join(s))