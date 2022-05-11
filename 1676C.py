def Combinations(l):
    lr = []
    for x in l:
        for y in l:
            if x != y:
                lr.append([x, y])
    return lr


t = int(input())
for _ in range(t):
    l = [int(i) for i in input().split()]
    n = l[0]
    m = l[1]
    lr = []
    for i in range(m):
        s = input()
        lr.append(s)
    min1 = 10000001
    for x in Combinations(lr, 2):
        diff = 0
        for i in range(m):
            diff += abs(ord(x[0][i]) - ord(x[1][i]))
            min1 = min(min1, diff)
    print(min1)
