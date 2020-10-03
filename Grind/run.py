s = input()
n = len(s)

for i in range(n - 1):
    if int(s[i]) % 2 == 0:
        s[i], s[n - 1] = s[n - 1], s[i]


for i in range(len(s) - 1):
    if int(s[i]) % 2 == 0 and int(s[i]) < int(s[n-1]):
        s[i], s[n-1] = s[n-1], s[i]

if int(s[n-1] % 2):
    print(-1)
else:
    print(s)