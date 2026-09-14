def luck(n):
    if "7" in n:
        return True
    return False


def main():
    n = input()
    print("Yes" if luck(n) else "No")


if __name__ == "__main__":
    main()
