import random

def main():
    answer = 'y'
    print("Welcome to the Wholesome 6 Digit Number Program :)")

    while answer == 'y':
      rand_num = random.randint(0, 999999)
      rand_str = str(rand_num)
      while len(rand_str) <= 6:
          rand_str = "0" + rand_str
      print(f"\nHere is... \n{rand_str}")
      answer = input("\nContinue [y/n]: ")

    if answer != 'y':
      print('Have Fun :)')

if __name__ == "__main__":
    main()
