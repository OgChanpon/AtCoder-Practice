n = int(input())
x = list(map(int, input().split()))
ans, tmp = 100000000, 0

for i in range(1, 101):
    for j in x:
        tmp += (j - i) ** 2
    ans = min(ans, tmp)
    tmp = 0

print(ans)
