def main():
    s = input()
    sl = len(s)
    sf = s[: (sl - 1) // 2]
    sb = s[(sl + 3) // 2 - 1 :]

    if s == s[::-1] and sf == sf[::-1] and sb == sb[::-1]:
        print("Yes")
    else:
        print("No")


if __name__ == "__main__":
    main()
