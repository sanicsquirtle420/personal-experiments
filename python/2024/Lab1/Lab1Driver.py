from Carlot import * ## the wildcard is back
## 10/13/24

def main():
    lot1 = Carlot('Oxford, MS')
    lot1.add_car('Black', 'Honda', 'Civic', 94715.12)
    lot1.add_car('Blue', 'Ford', 'F-150', 85732.34)
    lot1.add_car('Gray' , 'Honda' , 'CR-V' , 87431.56)
    lot1.add_car('Silver' , 'Chevy' , 'Traverse' , 25351.78)

    print(lot1.print())
    print('Logical Length: ' + str(lot1.logical_length()))
    print(repr(lot1))

if __name__ == "__main__":
    main()
