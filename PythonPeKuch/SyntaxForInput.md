## For space seperated integers stored in an array

```
arr = list(map(int, input().rstrip().split())) 
````

## To take input till the end of file.

```
try:
    while True:
        line = input()
        ...
except EOFError:
    pass
```

## Input a 2D Array

```
arr[]
for _ in range(6):
    arr.append(list(map(int, input().rstrip().split())))
```