 print("hello world")
 name = input("Enter name: ")
 print("Hello ",name)

# # ----Data Types-----##
# Number
# Integer
a = 1
b = 4

# Complex
a =  2 + 3j

# Float
 a = 1.3333
 b = 34.67

# # Boolean
# t = True
# f = False


# String
 a = "Krish"
 b = "Arman - nikamma"
 c = 'Dalip - nikamma'
 d = """Junaid"""

# print(type(a))


# Sets
 a = {2,4,7,8,9}
 print(type(a))

# list
 a = [1,4,5,6,7,8]
 print(type(a))

#  tuple
 a = (1,4,5,6,7,8)
 print(type(a))

# Mapping

# Dict

 a = {"name":"Krish","age":100}
 print(type(a))
 print(a["age"])

# Number input

 num  = int(input("Enter a Number: "))
 print(type(num))

# swapping 2 number

# General way
 a = 1
 b = 2
 print("Before swapping")
 print("a = ", a, "b = ", b)
 c = a
 a = b
 b = c
 print("After swapping")
 print("a = ", a, "b = ", b)

# Python way

 a = 1
 b = 2
 print("Before swapping")
 print("a = ", a, "b = ", b)
 a,b = b,a
 print("After swapping")

# Adding 2 numbers

# Will not work, because default input type is String
 a = input("Enter Number 1: ")
 b = input("Enter Number 1: ")
 print(a+b)

 Will work due to conversion before adding
 a = int(input("Enter Number 1: "))
 b = int(input("Enter Number 1: "))
 print(a+b)

# Type casting

# Explicit(narrowing)

 a = "45"  # String to integer
 int(a)
 print(a)

 b = "23.45"  # String to float
 float(b)
 print(b)

 c = 23.334  # Float to integer
 int(c)
 print(c)

 d = 23
 float(d)
 print(d)

# Implicit(Widening)

# # Assignment

 ASCII value of char
 ch = input("Enter Character: ")
 print("ASCII value: ", ord(ch))

# program to find simple interest

 pAmt = int(input("Enter amount: "))
 rate = int(input("Enter rate: "))
 time = int(input("Enter time: "))
 print("Interest :",((pAmt*rate*time)/100))

# celsius to fahrenheit

 fahrenheit = float(input("Enter temperature in fahrenheit: "))
 print((fahrenheit-32)/1.8," Celsius")

# program to find percentage

sub1 = int(input("Enter sub1 marks "))
 sub2 = int(input("Enter sub2 marks "))
 sub3 = int(input("Enter sub3 marks "))
 sub4 = int(input("Enter sub4 marks "))
 sub5 = int(input("Enter sub5 marks "))

 percentage = ((sub1+sub2+sub3+sub4+sub5)/500)*100
 print("Percentage is ", percentage)

# * operator

#! addition (+)
 print(2+4)

#! subtraction (-)
 print(2-4)

#! division  (/)
 print(10/4)

#! multiplication ( *)
 print(10*4)

#! Exponent (**)
 print(10**4)

#! flor division  (//)
 print(10//4)

#! assignment (=)
 a = 4
 print(a)

# * Comparison operator
#! and means &&
#! or means ||

# * urinary operator
#! a = 10
#! a = -10
#! print(a)

# * Statement (selective/control/complex)

"""
# syntax #

if header :
    body

"""

# * complex/ conditional

# ! simple if
"""
syntax
if condition:
    statement

    """

 age = int(input("Enter age"))
 if age < 0:
     age = -age
 print("age is ", age)

# ! if else
"""
if condition:
    statement -> run if the condition is true
else:
    statement -> runs if the condition is false

"""
 age = 18
 if age > 18:
     print("Age is greater the 18")
 else:
     print("Age is greater the 18")

# ! nested if
"""
if condition:
    statement 
    
    if 2nd condition:
        statement

    else:
        statement 
"""


# ! if elif else (is else ladder)
 num = 3
 if num < 0:
     print("Negative number")
 elif num > 0:
     print("Positive number")
 else:
     print("Number is zero")


# * iterative

# * for
# ! simple for
# ! nested for

# while

# ! simple while
# ! nested while

# ! functions in python
"""
*syntax*
def functionName(arguments):
    statement
    return statement
"""
# ! Default argument

"""
*syntax*
def functionName(num_1 = 4,num_2 = 10):
    statement
    return statement
"""

# ! arbitrary argument

"""
*syntax*
def functionName(*num):
    statement
    return statement
"""

# ! modules
"""
*Syntax*
import moduleName

"""
# * example
 import random

# # * import name aliasing
 import random as rm

 print(rm.randint(1,10))


# number gassing game

 import random
 num = random.randint(1, 5)
 turns = 1
 while (turns <=4):
     turns+=1
     UserGuess  = int(input("Guess the number between 1-5: "))
     if UserGuess==num:
         print("You guess the right number: ",num)
         break  

#  dir and help for import

 import random
 print(dir(random))# shows all methods, variables and classes in list format
 print(help(random)) # prints guide manual of a module

# ! importing your own modules

 import area

 circleArea = area.calArea(5)
 print(circleArea)

rectangleArea  = area.calRect(10,2)
 print("Area of rectangle is",rectangleArea)

# * copying all function to main file

 from area import *
 rectangleArea  = calRect(10, 2)
 print("Area of rectangle is", rectangleArea)
