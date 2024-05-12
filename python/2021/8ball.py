import random
import time

responses = ['No', 'Yes', 'Maybe', 'Ask again later.']

def shake8ball():
  print('.')
  time.sleep(.5)
  print('..')
  time.sleep(.5)
  print('...')
  time.sleep(.8)
  print( random.choice(responses) )

def playAgain():
  print('\nAsk another question? (y/n)')
  choice = input()

  if choice=='y':
    print('\n')
    play()
  elif choice=='n':
    print('Bye bye!')
    exit()
  else:
    print('Invalid!')
    playAgain()

def play():
  print('Ask ye ol\' 8 ball')
  input()
  shake8ball()
  playAgain()

play()
