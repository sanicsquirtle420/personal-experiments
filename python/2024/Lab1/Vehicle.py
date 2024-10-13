## Rewriting my Csci 112 - Lab 1 classes / program in python
class Vehicle:
        def __init__(self, color: str , make: str , model: str , cost: float):
                # Equivalent to a parameterized constructor in java
                self.color = color
                self.make = make
                self.model = model
                self.cost = cost

        def __str__(self):
                # Equivalent to a toString() function in java
                return f"A {self.color} {self.make} {self.model} costs ${self.cost}"

def main():
        honda = Vehicle('Blue', 'Honda', 'Civic', 24999.99)
        jeep = Vehicle('Marron', 'Jeep', 'Cherokke', 9999.99)
        blank = Vehicle('' , '' , '' , 0)
        ## Similar to the main function in java
        print(honda)
        print(jeep)
        print(blank)

if __name__ == '__main__':
        main()
