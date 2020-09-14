vowels = "aeiouyAEIOUY"
    
s = input()
ans = ""
for i in range(len(s)):
    if s[i] in vowels:
        continue
    elif s[i] not in vowels:
        ans += '.'
        ans += s[i]
    
ans = ans.lower()
print(ans)