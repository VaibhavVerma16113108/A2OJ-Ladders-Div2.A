m, n = list(map(int, input().split(' ')))
inputList = []
strawberryPosRow = []
strawberryPosCol = []
for row in range(m):
    ch = input()
    inputList.append(ch)
for i in range(len(inputList)):
    for j in range(n):
        if inputList[i][j] == 'S':
            strawberryPosRow.append(i)
            strawberryPosCol.append(j)
  	

r = len(set(strawberryPosRow))
c = len(set(strawberryPosCol))
print(m*n - r*c)