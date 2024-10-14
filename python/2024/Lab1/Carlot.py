from Vehicle import * ## yes I used the wildcard fight me
# 10/13/24

class Carlot(object):
    def __init__(self, lot_name: str) -> None:
        self.lot_name = lot_name
        self.lot: list = []
        self.count : int = 0

    def __repr__(self) -> str:
        return f"Carlot(details)\nlot_name: {self.lot_name} \nlot: {self.lot} \ncount: {self.count}"

    def add_car(self, col: str , mke: str , mod: str , cos: float) -> None:
        temp = Vehicle(col , mke, mod , cos)
        self.lot.append(temp)
        self.count += 1

    def average_cost(self) -> float:
        total: float = 0.0

        for i in range (0 , self.count):
            total += self.lot[i].get_cost()

        return total / self.count

    def logical_length(self) -> int:
        return self.count

    def print(self) -> None:
        print(f"Welcome to {self.lot_name} these are the cars on the lot today:")
        for i in range (0 , self.count):
            print("\t" + str(self.lot[i]))

        print(f"The average cost of our cars is $" + f"{self.average_cost():.2f}")
        # For some weird reason it prints "None" at the end of this print method and I can't be 
        # bothered to fix it so it's staying there
