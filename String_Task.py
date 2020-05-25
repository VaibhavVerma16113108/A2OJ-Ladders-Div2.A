s = input()
s.lower()
vowels = ['a','e','i','o','u']

for i in s:
	if i not in vowels:
		print('.'+i)