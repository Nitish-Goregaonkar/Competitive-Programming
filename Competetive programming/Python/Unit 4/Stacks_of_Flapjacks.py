print("===== STACKS OF FLAPJACKS =====\n")

print("Enter pancake sizes:")
print("Example:")
print("1 5 3 2 4\n")

pancakes = list(map(int, input().split()))

print("\nOriginal Stack:")
print(pancakes)

pancakes.reverse()

print("\nAfter Flipping:")

print(pancakes)