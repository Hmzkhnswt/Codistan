def reverse_string(input_string):
    reverse_string = ""
    for i in range(len(input_string)-1, -1, -1):
        reverse_string += input_string[i]

    return reverse_string

input = str(input("Enter a String:- "))
print(reverse_string(input))