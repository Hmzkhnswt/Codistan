def is_plaindrome(str):
    for i in range(len(str)):
        if(str[i] != str[len(str)-i-1]):
            return False
    
    return True

text = str(input("Enter Text: "))
if(is_plaindrome(text)):
    print("Palindrome Text")
else:
    print("Not Palindrome")
