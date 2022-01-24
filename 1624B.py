t = int(input())
for i1 in range(t):
    arr = list(map(int,input().split()))
    if arr[0]+arr[2]==2*arr[1]:
        print("YES")
    elif (arr[2]+arr[0])!=0 and (arr[2]+arr[0])%(2*arr[1])==0:
        print("YES")
    elif (2*arr[1]-arr[0])!=0 and (2*arr[1]-arr[0])%arr[2]==0:
        print("YES")
    elif (2*arr[1]-arr[2])!=0 and (2*arr[1]-arr[2])%arr[0]==0:
        print("YES")
    else:
        print("NO")
