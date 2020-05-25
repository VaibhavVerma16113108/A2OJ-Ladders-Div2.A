string = input()
nums = []
for i in string:
	if i != '+':
		nums.append(i)
nums.sort()
print(*nums, sep='+')