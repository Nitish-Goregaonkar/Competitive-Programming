print("===== AUTOMATED JUDGE SCRIPT =====\n")

correct = input("Enter Correct Output: ")

output = input("Enter User Output: ")

if correct == output:

    print("\nAccepted")

else:

    num1 = ""
    num2 = ""

    for c in correct:

        if c.isdigit():

            num1 += c

    for c in output:

        if c.isdigit():

            num2 += c

    if num1 == num2:

        print("\nPresentation Error")

    else:

        print("\nWrong Answer")