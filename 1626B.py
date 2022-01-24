t = int(input())
for i in range (t):
    x = input()
    maxSum = 0
    if len(x) == 2 :
        maxSum = int(x[0]) + int(x[1])
    else:
        for _ in range (len(x)-1,0,-1):
            if int(x[_]) + int(x[_-1]) >= 10:
                maxSum = int(x[:_-1] + str(int(x[_-1]) + int(x[_])) + x[_+1:])
                break
        if maxSum == 0:
            maxSum = int(str(int(x[0]) + int(x[1])) + x[2:])
    print(maxSum)