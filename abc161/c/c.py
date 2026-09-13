def repi(n, k):
    ans = min(abs(n % k), abs(n % k - k))
    return ans


def main():
    n, k = map(int, input().split())
    print(repi(n, k))


if __name__ == "__main__":
    main()
