def minmax(list):
    max = list[0]
    min = list[0]
    for i in range(1,len(list)):
        if list[i] > max:
            max = list[i]

        if list[i] < min:
            min  = list[i]

    return min, max


mylist = []
size = int(input("Enter the size of the list: "))
for i in range(1, size+1):
    element = int(input(f"{i}----->"))
    mylist.append(element)

min, max = minmax(mylist)
print("Min is: ",min, "Max is: ", max)



