from collections import Counter

n = int(input())
s = []
ans = []

for i in range(n):
    s.append(input())
scounts = Counter(s)

nummax = max(scounts.values())

for key, value in scounts.items():
    if nummax == value:
        ans.append(key)

ans.sort()

for k in ans:
    print(k)
