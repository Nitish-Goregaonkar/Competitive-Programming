print("===== POKER HANDS =====\n")

print("Enter 5 card values")
print("Use numbers only (2-14)")
print("11=Jack 12=Queen 13=King 14=Ace")
print("\nExample:")
print("2 2 2 5 5\n")

cards = list(map(int, input().split()))

freq = {}

for card in cards:
    freq[card] = freq.get(card, 0) + 1

counts = sorted(freq.values(), reverse=True)

if counts == [5]:
    print("\nYahtzee / Five of a Kind")

elif counts == [4,1]:
    print("\nFour of a Kind")

elif counts == [3,2]:
    print("\nFull House")

elif counts == [3,1,1]:
    print("\nThree of a Kind")

elif counts == [2,2,1]:
    print("\nTwo Pair")

elif counts == [2,1,1,1]:
    print("\nOne Pair")

else:
    print("\nHigh Card")