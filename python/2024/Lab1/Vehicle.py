## 10/13/24
## Rewriting my Csci 112 - Lab 1 classes / program in python
class Vehicle (object):
        def __init__(self, color: str , make: str , model: str , cost: float) -> None:
                # Equivalent to a parameterized constructor in java
                self.color = color
                self.make = make
                self.model = model
                self.cost = cost

        def get_cost(self) -> float:
                return self.cost

        def __str__(self) -> str:
                # Equivalent to a toString() function in java
                return f"A {self.color} {self.make} {self.model} costs ${self.cost}"

        def __repr__(self) -> str:
                return (f'Vehicle(color="{self.color}" make="{self.make}" model="{self.model}"'
                        f' cost="{self.cost}")')
