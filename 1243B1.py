def change(str1,str2,i,j):
    str1[i],str2[j]=str2[j],str1[i]
    if str1 == str2:
        return True
    else:
        return False


t = int(input())
for _ in range(t):
    n =  int(input())
    str1 = input()
    str2 = input()
    counter = 0
    l = []
    for i in range(n):
        if str1[i] != str2[i]:
            counter += 1
            l.append(i)
    if counter == 2:
        if change(str1,str2,l[0],l[1]):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")