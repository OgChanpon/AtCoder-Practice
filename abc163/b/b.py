def homework(n, a):
    total = sum(a)
    return n - total if total <= n else -1


def main():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    print(homework(n, a))


if __name__ == "__main__":
    main()
