import random

number = random.randint(1, 99)
user_input = int(input("Enter number from 1 - 99: "))


if user_input < number:
    print(f"You lost! AI number = {number}")

elif user_input > number:
    print(f"You win! AI number = {number}")

else:
    print(f"Blocked! AI number = {number}")
