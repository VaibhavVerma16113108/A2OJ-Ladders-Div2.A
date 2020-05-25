ranks = ['6','7','8','9','T','J','Q','K','A']
trump = input()
cards = input()

if cards[1] == trump:
    if cards[4] != trump:
        print("YES")
    else:
        if ranks.index(cards[0]) > ranks.index(cards[3]):
            print("YES")
        else:
            print("NO")
else:
    if cards[1]==cards[4] and ranks.index(cards[0]) > ranks.index(cards[3]):
        print("YES")
    else:
        print("NO")