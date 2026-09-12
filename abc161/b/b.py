def vote(n, m, a):
    check = 0
    total = sum(a)
    for i in a:
        if i * 4 * m >= total:
            check += 1
            if check == m:
                return True
    return False


def main():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    if vote(n, m, a):
        print("Yes")
    else:
        print("No")


if __name__ == "__main__":
    main()
