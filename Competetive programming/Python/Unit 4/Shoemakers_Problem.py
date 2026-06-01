print("===== SHOEMAKER'S PROBLEM =====\n")

n = int(input("Enter number of jobs: "))

jobs = []

for i in range(n):

    print(f"\nJob {i+1}")

    time = int(input("Time Required: "))
    fine = int(input("Daily Fine: "))

    jobs.append((i+1, time, fine))

jobs.sort(key=lambda x: (-x[2]/x[1], x[0]))

print("\nOptimal Job Order:")

for job in jobs:
    print(job[0], end=" ")

print()