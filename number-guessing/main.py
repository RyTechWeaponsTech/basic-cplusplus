import random

number = random.randint(1, 99)
user_guess = int(input("Enter number from 1 - 99: "))


while True:
    if user_guess < number:
        print("Your guess is too low, try again!")

    elif user_guess > number:
        print("Your guess is too high, try again!")

    else:
        print(f"Congrats, you guess it '{number}'")
    break
