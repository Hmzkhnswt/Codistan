num = int(input("Enter a Number: "))
first = 0
second = 1
next = 0

for i in range(1, num):
    if(num<1):
        next = i
    else:
        next = first + second
        first = second
        second = next
        
    print(next)
        