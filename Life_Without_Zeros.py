a = int(input())
b = int(input())
c1 = str(a+b)

if int(str(a).replace('0','')) + int(str(b).replace('0','')) == int(str(c1.replace('0',''))):
    print("YES")
else:
    print("NO")

