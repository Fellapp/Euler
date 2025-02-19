import math

def first(n = 1000):
    result = 0
    for i in range(n):
        if i % 3 == 0 or i % 5 == 0:
            result += i

    return result

def fib(n):
    if n == 0:
        return 0
    if n == 1 or n == 2:
        return n
    else:
        return fib(n - 1) + fib(n - 2)

def sumator(n = 4000000):
    result = 0
    i = 0
    while fib(i) <= n:
        if fib(i) % 2 == 0:
            result += fib(i)
        
        i += 1
    
    return result

def largest_prime_factor( n = 600851475143):
    for i in range(2, n + 1):
        is_prime = True
        for j in range(2, i):
            if i % j == 0:
                is_prime = False
            break

        if is_prime:
            result = i

    return result

def main():
    print(largest_prime_factor())

if __name__ == "__main__":
    main()