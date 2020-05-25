s = input()
l = ['h','e','l','l','o']
i = j = 0
while i < 5 and j < len(s):
	if s[j] == l[i]:
		i += 1
	j += 1
if(i<5):
	print("NO")
else:
	print("YES")
