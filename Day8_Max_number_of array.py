def max_number(mylist):
    maxnum = 0
    for num in mylist:
        if(num > maxnum):
            maxnum = num
    return maxnum

input = input("Enter list of numbers:-- ")
mylist = list(map(int, input.split()))

result = max_number(mylist)
print(result)