def main():
    height: int = int(input("Height: "))
    while height <= 0:
        height: int = int(input("Height: "))

    draw(height)


def draw(n: int) -> None:
    for i in range(n):
        for _ in range((n - 1) , i , -1):
            print(" " , end = "")
        for _ in range(i + 1):
            print("#" , end = "")

        print("  " , end = "")

        for _ in range(i + 1):
            print("#" , end = "")

        print()

if __name__ == "__main__":
    main()
