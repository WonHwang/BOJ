# BOJ - 10866번 덱 문제

import sys

deck = []

def operation_command():
    global deck
    command = sys.stdin.readline().rstrip()
    
    if len(deck) == 0:
        is_empty = True
    else:
        is_empty = False
    
    if command == 'pop_front':
        if is_empty:
            print(-1)
        else:
            print(deck[0])
            del(deck[0])
    
    elif command == 'pop_back':
        if is_empty:
            print(-1)
        else:
            print(deck[-1])
            del(deck[-1])
    
    elif command == 'size':
        print(len(deck))
    
    elif command == 'empty':
        if is_empty:
            print(1)
        else:
            print(0)
    
    elif command == 'front':
        if is_empty:
            print(-1)
        else:
            print(deck[0])
    
    elif command == 'back':
        if is_empty:
            print(-1)
        else:
            print(deck[-1])
    
    else:
        command = command.split(' ')
        command, num = command[0], int(command[1])
        
        if command == 'push_front':
            deck = [num] + deck
        
        elif command == 'push_back':
            deck = deck + [num]
    
N = int(input())

for i in range(N):
    operation_command()