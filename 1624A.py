t = int(input())
for i1 in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
    set1 = set(arr)
    count = max(set1)-min(set1)
    print(count)