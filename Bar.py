drinks = ['ABSINTH', 'BEER', 'BRANDY', 'CHAMPAGNE', 'GIN', 'RUM', 'SAKE', 'TEQUILA', 'VODKA', 'WHISKEY', 'WINE']
n = int(input())
count = 0
for _ in range(n):
	s = input()
	try:
		s = int(s)
		if(s < 18):
			count += 1
	except:
		if s in drinks:
			count += 1
print(count)
