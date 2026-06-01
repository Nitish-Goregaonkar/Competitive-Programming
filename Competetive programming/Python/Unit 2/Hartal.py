print("===== HARTALS =====\n")

days = int(input("Enter total number of days: "))

parties = int(input("Enter number of political parties: "))

hartals = []

for i in range(parties):

    value = int(input(f"Party {i+1} hartal parameter: "))
    hartals.append(value)

lost_days = 0

for day in range(1, days + 1):

    if day % 7 == 6 or day % 7 == 0:
        continue

    strike = False

    for h in hartals:

        if day % h == 0:
            strike = True
            break

    if strike:
        lost_days += 1

print("\nLost Working Days =", lost_days)