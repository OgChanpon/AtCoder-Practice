def sheepwolf(s, w):
    return s <= w


def main():
    s, w = map(int, input().split())
    if sheepwolf(s, w):
        print("unsafe")
    else:
        print("safe")


if __name__ == "__main__":
    main()
