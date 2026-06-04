print("===== STACK 'EM UP =====\n")

n = int(input("Enter number of cards: "))

print("\nEnter card numbers:")
print("Example:")
print("1 2 3 4 5\n")

cards = list(map(int, input().split()))

cards.reverse()

print("\nCards After Shuffle:")

for card in cards:
    print(card, end=" ")