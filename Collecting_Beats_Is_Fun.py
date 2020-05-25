def solve(l, k):
    for i in l:
        if i > 2*k:
            return "NO"
    return "YES"

k = int(input())
count = [0 for x in range(10)]
for _ in range(4):
	s = input()
	for i in range(4):
		if s[i] != '.':
			count[int(s[i])] += 1
print(solve(count,k))
