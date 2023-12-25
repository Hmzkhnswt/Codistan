# If 'n' is 10, the sum of even numbers from 1 to 10 is: 2 + 4 + 6 + 8 + 10 = 30.
# Your program should take 'n' as input from the user and then output the sum of all even numbers between 1 and 'n'.

def sum_of_even(num):
    total_sum = 0
    for i in range(2, num + 1, 2):
        total_sum += i
    
    return total_sum

num = int(input("Enter a number: "))  

print(sum_of_even(num))

