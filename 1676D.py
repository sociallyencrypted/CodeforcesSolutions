def sumup(cb, x, y):
    sum1 = 0
    l = []
    for i in range(len(cb)):
        l.append([i, x + y - i])
        l.append([i, y - x + i])
    l = [tuple(x) for x in l]
    l = set(l)
    for x in l:
        try:
            assert x[0] >= 0
            assert x[1] >= 0
            sum1 += cb[x[0]][x[1]]
        except (IndexError, AssertionError):
            continue
    return sum1


t = int(input())
for _ in range(t):
    l = [int(i) for i in input().split()]
    n = l[0]
    m = l[1]
    cb = []
    max1 = 0
    for x in range(n):
        crow = [int(i) for i in input().split()]
        cb.append(crow)
    for x in range(n):
        for y in range(m):
            max1 = max(max1, sumup(cb, x, y))
    print(max1)
