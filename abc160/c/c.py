def travel(k, a):
    dis = []
    for i in range(len(a)):
        if i != len(a) - 1:
            dis.append(a[i + 1] - a[i])
        else:
            dis.append(k - a[i] + a[0])
    return k - max(dis)


def main():
    k, n = map(int, input().split())
    a = list(map(int, input().split()))

    print(travel(k, a))


if __name__ == "__main__":
    main()
