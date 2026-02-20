# WAP to print the list of prime numbers between 100 to 500
def isPrime(num):
    dc = 0
    for i in range(2, num):
        if num % i == 0:
            dc += 1
            break

    if dc == 0:
        return True
    return False


for i in range(100, 500+1):
    if isPrime(i):
        print("prime : ", i)

# WAP to check is a number is armstrong number or not

import math

num = 153
numCP = num
asm = 0

length = len(str(num))

for i in range(length):
    ldPow = math.pow(numCP % 10, length)
    numCP //= 10
    asm += ldPow

if num == int(asm):
    print(int(asm), " Is armstrong")
else:
    pass
    print(int(asm), " Is not armstrong")

# WAP to make a 3x3 metric and fill it with natural number

arr = [[None, None, None],
       [None, None, None],
       [None, None, None]]
num = 1

for i in range(3):
    for j in range(3):
        arr[i][j] = num
        num += 1

print(arr)

# WAP to print min max in an array
arr = [12, 34, 56, 78, 89, 90, 23, 45, 74, 14]
print(min(arr))
print(max(arr))


# WAP to find even factors of a given number

num = 36
for i in range(1,num):
    if num % i == 0 and i % 2 == 0:
        print(i)
