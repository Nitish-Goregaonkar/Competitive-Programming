print("===== DOUBLETS =====\n")

word1 = input("Enter first word: ")
word2 = input("Enter second word: ")

if len(word1) != len(word2):

    print("\nDifferent lengths")

else:

    diff = 0

    for a, b in zip(word1, word2):

        if a != b:
            diff += 1

    if diff == 1:
        print("\nValid Doublet")
    else:
        print("\nNot a Doublet")