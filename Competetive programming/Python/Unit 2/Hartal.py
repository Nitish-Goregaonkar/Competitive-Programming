print("===== HARTALS =====\n")

days = int(input("Enter total number of days: "))

parties = int(input("Enter number of political parties: "))

h = []

print("Enter hartal parameter for each party:")

for i in range(parties):
    h.append(int(input()))

lost_days = 0

for day in range(1, days + 1):

    if day % 7 == 6 or day % 7 == 0:
        continue

    for i in range(parties):

        if day % h[i] == 0:
            lost_days += 1
            break

print("\nLost Working Days =", lost_days)