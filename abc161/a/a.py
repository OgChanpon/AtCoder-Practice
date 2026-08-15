def swap(x, y, z):
    a, b, c = z, x, y
    return a, b, c


def main():
    x, y, z = map(int, input().split())
    print(*swap(x, y, z))


if __name__ == "__main__":
    main()
