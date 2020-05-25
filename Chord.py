notes = ['C', 'C#', 'D', 'D#', 'E', 'F', 'F#', 'G', 'G#', 'A', 'B', 'H']
s = input().split(' ')
a = min((notes.index(s[1])-notes.index(s[0]))%12, 12- (notes.index(s[1])-notes.index(s[0]))%12)
b = min((notes.index(s[2])-notes.index(s[1]))%12, 12- (notes.index(s[2])-notes.index(s[1]))%12)
print(a,b)
if a==4 and b==3:
    print("major")
elif a==3 and b==4:
    print("minor")
else:
    print("strange")
