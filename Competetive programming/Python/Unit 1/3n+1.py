# print("===== THE 3N + 1 PROBLEM =====\n")

# print("Enter starting number:")
# print("Example: 22\n")

# n = int(input())

# count = 1
# current = n

# while current != 1:

#     if current % 2 == 0:
#         current = current // 2
#     else:
#         current = 3 * current + 1

#     count += 1

# print("\nCycle Length =", count)

print("===== THE 3N + 1 PROBLEM =====\n")

print("Enter starting number:")
print("Example: 22\n")

n = int(input())

current = n
count = 1

print("\nComplete Cycle:")

print(current, end=" ")

while current != 1:

    if current % 2 == 0:
        current = current // 2
    else:
        current = 3 * current + 1

    print(current, end=" ")

    count += 1

print("\n")
print("Cycle Length =", count)