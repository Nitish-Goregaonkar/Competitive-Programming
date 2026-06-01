from math import factorial

print("===== POLYNOMIAL COEFFICIENTS =====\n")

n = int(input("Enter n: "))

k = int(input("Enter number of groups: "))

print("\nEnter values:")
print("Example: 2 2 1\n")

arr = list(map(int, input().split()))

answer = factorial(n)

for x in arr:

    answer //= factorial(x)

print("\nPolynomial Coefficient =", answer)