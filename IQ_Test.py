n = int(input())
l = [int(x)%2 for x in input().split(' ')]
if(l.count(0) == 1):
	print(l.index(0))
else:
	print(l.index(1))
