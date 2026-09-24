def battle(a, b, c, d):
    while True:
        c -= b
        if c <= 0:
            return "Yes"
        a -= d
        if a <= 0:
            return "No"


def main():
    a, b, c, d = map(int, input().split())
    print(battle(a, b, c, d))


if __name__ == "__main__":
    main()
