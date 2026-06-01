print("===== AUTOMATED JUDGE SCRIPT =====\n")

print("Enter correct output:")
correct = input()

print("\nEnter user output:")
user = input()

if correct == user:

    print("\nAccepted")

elif ''.join(filter(str.isdigit, correct)) == \
     ''.join(filter(str.isdigit, user)):

    print("\nPresentation Error")

else:

    print("\nWrong Answer")