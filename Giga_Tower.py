n = int(input())
ans = 0
while('8' not in str(n+1)):
	n += 1
	ans += 1
print(ans+1)