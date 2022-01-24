n = input()
if n[::-1] == n:
    print("YES")
else:
    for i in range (len(n)-1,-1,-1):
        x = 0
        if n[i] != '0':
            string = n[:i+1]
            if string[::-1] == string:
                print("YES")
                break
            else:
                print("NO")
                break
