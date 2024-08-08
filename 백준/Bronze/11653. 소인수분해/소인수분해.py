num = int(input())
li = []
for i in range(2, num+1):
    if num % i == 0:
        li.append(i)
index = 0
while index != len(li):
    if num % li[index] == 0:
        num //= li[index]
        print(li[index])
    elif num % li[index] != 0:
        index += 1
