numbers = [2,3,4,5,6,7,8,9,10]

### use  of lambda function
doubled = map(lambda x: x * 2, numbers)
print("This result is from lambda function: ",list(doubled))  

# use map function
def cube(num):
    return num*num*num

cubes = list(map(cube, numbers))
print("This result is from map function: ",cubes)

### using filter for even numbers
evens = filter(lambda x: x % 2 == 0, numbers)
print("This is the result from the use of filter: ",list(evens)) 

### using reduce
from functools import reduce    # reduce is not a built-in function in python 3
summation = reduce(lambda x, y: x+y, numbers)    
print("This is the reults from the use of reduce function: ",summation)





