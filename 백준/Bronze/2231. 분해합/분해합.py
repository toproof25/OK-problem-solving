n = int(input())
li = list(map(int, str(n)))
n2 = n - (li[0] + len(li[1:])*9)
minNum = n

for i in range(n, n2-1, -1):
    li = sum(map(int, str(i)))
    if i + li == n:
        if minNum > i:
            minNum = i
print(0 if minNum==n else minNum)
