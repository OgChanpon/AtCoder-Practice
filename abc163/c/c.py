def manage(n, a):
    res = [0] * (n + 1)
    for i in a:
        res[i] += 1
    return res


def main():
    n = int(input())
    a = list(map(int, input().split()))
    ans = manage(n, a)
    for i in range(1, n + 1):
        print(ans[i])


if __name__ == "__main__":
    main()
