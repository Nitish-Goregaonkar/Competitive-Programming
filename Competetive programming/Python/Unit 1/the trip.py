print("===== THE TRIP =====\n")

n = int(input("Enter number of students: "))

money = []

print("\nEnter expenses of each student:")

for i in range(n):
    money.append(float(input()))

avg = sum(money) / n

exchange = 0

for amount in money:
    if amount > avg:
        exchange += amount - avg

print("\nMinimum Exchange Required = $%.2f" % exchange)