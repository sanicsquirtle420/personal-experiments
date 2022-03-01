import math

print("Which variable is missing? Type 'a' 'b' or 'c'")
missing = input()

if missing == 'a':
  print("What is your b value")
  valueA = input()

  print("What is your c value")
  valueB = input()

  print("Your a value is " + str(float(math.sqrt(int(valueB) ** 2 - int(valueA) ** 2))))

elif missing == 'b':
  print("What is your a value")
  valueA = input()

  print("What is your c value")
  valueB = input()

  print("Your b value is " + str(float(math.sqrt(int(valueB) ** 2 - int(valueA) ** 2))))

elif missing == 'c': 
  print("What is your a value")
  valueA = input()

  print("What is your b value")
  valueB = input()

  print("Your c value is " + str(float(math.sqrt(int(valueB) ** 2 + int(valueA) ** 2))))
