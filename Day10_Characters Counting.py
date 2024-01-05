def char_count():
    mystring = input("Enter a String: ")
    char_frequency = {}

    for char in mystring:
        if char in char_frequency:
            char_frequency[char] += 1
        else:
            char_frequency[char] = 1

    print("Character Counts:")
    for char, count in char_frequency.items():
        print(f"'{char}': {count}")

char_count()