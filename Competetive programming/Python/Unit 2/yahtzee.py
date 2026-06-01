print("===== YAHTZEE =====\n")

print("Enter 5 dice values (1-6)")
print("Example:")
print("2 2 2 2 5\n")

dice = list(map(int, input().split()))

freq = {}

for d in dice:
    freq[d] = freq.get(d, 0) + 1

counts = sorted(freq.values(), reverse=True)

if counts == [5]:

    print("\nYahtzee!")

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

    print("\nChance")