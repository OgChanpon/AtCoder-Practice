def coffee(n):
    if n[2] == n[3] and n[4] == n[5]:
        return True
    else:
        return False


def main():
    s = input()

    if coffee(s):
        print("Yes")
    else:
        print("No")


if __name__ == "__main__":
    main()
