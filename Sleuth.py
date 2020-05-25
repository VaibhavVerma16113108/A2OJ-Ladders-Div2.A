s = input()
s = s.lower()
s = s.replace(" ", '')
vowels = ['a','e','i','o','u','y']
if s[-2] in vowels:
    print("YES")
else:
    print("NO")