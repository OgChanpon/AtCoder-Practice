n, m = map(int, input().split())
rules = [tuple(map(int, input().split())) for _ in range(m)]

for i in range(1000):
    if len(str(i)) == n:
        for s, c in rules:
            if str(i)[s - 1] != str(c):
                break
        else:
            print(i)
            exit()

print(-1)
