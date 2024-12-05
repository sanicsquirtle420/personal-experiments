def main():
    change: float = float(input("Change: "))
    while change < 0:
        change: float = float(input("Change: "))
    coins: int = 0

    # Coins: 25 , 10 , 5 , 1
    while change != 0.00:
        if change / 0.25 != 0 and change >= 0.25:
            print("QUARTER")
            coins += change / 0.25
            change = change % 0.25

        elif change / 0.1 != 0 and change >= 0.1:
            print("DIME")
            coins += change / 0.1
            change = change % 0.1

        elif change / 0.05 != 0 and change >= 0.05:
            print("NICKLE")
            coins += change / 0.05
            change = change % 0.05

        elif change / 0.01 != 0 and change >= 0.01:
            print("PENNY")
            coins += change / 0.01
            change = change % 0.01
        else:
            change = 0.0

    print(f"COINS={coins:.0f} CHANGE={change:.2f}")
    # print(0.1 % 0.25)

if __name__ == "__main__":
    main()
