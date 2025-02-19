def is_palindrome(to_check):
    result = False
    if to_check == "":
        return result

    for i in range(len(to_check)):
        if to_check[i] == to_check[len(to_check) - i - 1]:
            result = True
        else:
            result = False
            break
    
    return result

def is_palindrome2(number):
    return str(number) == str(number)[::-1]

print(is_palindrome2("kajk"))