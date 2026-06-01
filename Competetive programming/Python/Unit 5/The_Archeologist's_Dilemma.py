print("===== THE ARCHEOLOGIST'S DILEMMA =====\n")

prefix = input("Enter starting digits: ")

power = 1

while True:

    value = str(2 ** power)

    if value.startswith(prefix):

        print("\nSmallest Exponent =", power)
        break

    power += 1