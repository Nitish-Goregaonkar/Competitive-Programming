print("===== BRIDGE =====\n")

n = int(input("Enter number of people: "))

times = []

for i in range(n):

    value = int(input(f"Time of Person {i+1}: "))

    times.append(value)

times.sort()

total = sum(times)

print("\nCrossing Times:")
print(times)

print("\nSimple Total Time =", total)