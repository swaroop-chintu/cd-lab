import string
def check_input(input_value):
    if input_value.isdigit():
        print("Input is an Integer.")
    elif '.' in input_value and input_value.replace('.', '', 1).isdigit():
        print("Input is a Floating Point Number.")
    elif len(input_value) == 1:
        if input_value.islower():
            print("Input is a Lowercase Letter.")
        elif input_value.isupper():
            print("Input is an Uppercase Letter.")
        elif input_value in string.punctuation:
            print("Input is a Special Character.")
    elif input_value in ['+', '-', '*', '/', '%']:
        print("Input is an Arithmetic Operator.")
    elif input_value in ['<', '>', '=']:
        print("Input is a Relational Operator.")
    else:
        print("This is for next Lab.")
input_value = input("Enter a value: ")
check_input(input_value)
