def fizbuz(n):
    total = 0
    for i in range(n + 1):
        if i % 3 != 0 and i % 5 != 0:
            total += i
    return total


def main():
    n = int(input())
    print(fizbuz(n))


if __name__ == "__main__":
    main()
