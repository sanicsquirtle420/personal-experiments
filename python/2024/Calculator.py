import math

def addition(num1 , num2):
    answer = num1 + num2
    print(str(num1) + " + " + str(num2) + " = " + str(answer) + "\n")
    
def subtraction(num1 , num2):
    answer = num1 - num2
    print(str(num1) + " - " + str(num2) + " = " + str(answer) + "\n")
    
def multiplication(num1 , num2):
    answer = num1 * num2
    print(str(num1) + " * " + str(num2) + " = " + str(answer) + "\n")
    
def division(num1 , num2):
    answer = num1 / num2
    print(str(num1) + " / " + str(num2) + " = " + str(answer) + "\n")
    
def power(num1 , num2):
    answer = pow(num1 , num2)
    print(str(num1) + "^" + str(num2) + " = " + str(answer) + "\n")
    
print("This is a calculator running on python!\n")
response = "y"

while response == "yes" or response == "y" :
    print("What are you trying to do (Options: + , - , * , / , ^) ")
    option = input()
    
    if option == "^" :
        print("What is the base?")
        val1 = input()
        print("What is the power?")
        print("Note: You can use decimals for roots ex. 1/2  = 0.5 / square root")
        val2 = input()
        
        power(int(val1) , float(val2))
    
    else:
        print("What is the first value? ")
        val1 = input()
        print("What is the second value? ")
        val2 = input()

    if option == "+" :
        addition(int(val1) , int(val2))
        
    elif option == "-" :
        subtraction(int(val1) , int(val2))
        
    elif option == "*" :
        multiplication(int(val1) , int(val2))
        
    elif option == "/" :
        division(int(val1) , int(val2))
        
    print("Would you like to calculate something else?")
    response = input()
