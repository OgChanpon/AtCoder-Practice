def coin(n):
    return 1000 * (n // 500) + 5 * ((n % 500) // 5)


def main():
    x = int(input())
    print(coin(x))


if __name__ == "__main__":
    main()
