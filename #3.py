import math

n = 600851475143

largest = 0

while n % 2 == 0:
    largest = 2
    n = n / 2

i = 3
while i * i <= n:
    while n % i == 0:
        largest = i
        n = n / i

    i += 2
# for i in range(3, int(math.sqrt(n)) + 1, 2):
#     while n % i == 0:
#         largest = i
#         n = n / i

if n > 2:
    largest = n


print(math.floor(largest))
