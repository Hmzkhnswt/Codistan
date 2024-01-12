def LinearSearch(array, num):
    for i in range(len(array)):
        if array[i] == num:
            return f"The searched number has been found at index {i}"

    return "The searched number was not found in the array"

# Input
size = int(input("Enter the size of the array: "))
number = int(input("Enter a number to search: "))
array = list(map(int, input(f"Enter an array of size {size} separated by spaces: ").split()))

# This is the function call for Linear Search
result = LinearSearch(array, number)
print(result)
