print("===== A MULTIPLICATION GAME =====\n")

n = int(input("Enter Target Number: "))

value = 1
stan_turn = True

while value < n:

    if stan_turn:
        value *= 9
    else:
        value *= 2

    stan_turn = not stan_turn

if not stan_turn:
    print("\nStan wins.")
else:
    print("\nOllie wins.")

#162
