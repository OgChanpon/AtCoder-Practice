a, b = map(int, input().split())

for i in range(1001):
    aa = int(i * 0.08)
    bb = int(i * 0.1)
    if aa == a and bb == b:
        print(i)
        exit()

print(-1)
