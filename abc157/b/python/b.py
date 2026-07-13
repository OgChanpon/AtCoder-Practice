a = [list(map(int, input().split())) for _ in range(3)]
n = int(input())
c = [[0 for _ in range(3)] for _ in range(3)]
flag = 0

for i in range(n):
    b = int(input())
    for j in range(3):
        for k in range(3):
            if a[j][k] == b:
                c[j][k] = 1

for i in range(3):
    if c[i][0] and c[i][1] and c[i][2]:
        flag = 1
    if c[0][i] and c[1][i] and c[2][i]:
        flag = 1

if c[0][0] and c[1][1] and c[2][2]:
    flag = 1
if c[0][2] and c[1][1] and c[2][0]:
    flag = 1

print("Yes") if (flag) else print("No")
