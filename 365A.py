def listGen(k):
    l = []
    for i in range(k+1):
        l.append(str(i))
    return l

arr = list(map(int,input().split()))
n = arr[0]
k = arr[1]
count = 0
x = listGen(k)
for i in range(n):
    arr1 = list(input())
    isGood = True
    for y in x:
        if y not in arr1:
            isGood = False
            break
    if isGood:
        count+=1
    
print(count)