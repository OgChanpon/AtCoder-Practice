n = int(input())
a = list(map(int, input().split()))

for x in a:
    if x % 2 == 0 and x % 3 != 0 and x % 5 != 0:
        print("DENIED")
        exit()
print("APPROVED")
