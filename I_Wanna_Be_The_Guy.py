n = int(input())
levelsX = list(map(int,input().split(' ')))
levelsY = list(map(int,input().split(' ')))

count = [0 for x in range(n)]
for i in levelsX[1:]:
    count[i-1] += 1
for i in levelsY[1:]:
    count[i-1] += 1
if 0 in count:
    print("Oh, my keyboard!")
else:
    print("I become the guy.")