n = int(input())
skillz = [int(x) for x in input().split(' ')]
arr = [0,0,0]
index1 = []
index2 = []
index3 = []
for i in range(len(skillz)):
    arr[skillz[i]-1] += 1
    if skillz[i] == 1:
        index1.append(i)
    elif skillz[i] == 2:
        index2.append(i)
    else:
        index3.append(i)
print(min(arr))   
if min(arr) > 0:
    for i in range(min(arr)):
        print(index1[i]+1, index2[i]+1, index3[i]+1)