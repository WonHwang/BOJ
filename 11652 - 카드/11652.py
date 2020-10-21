import sys

N = int(input())

numbers = {}

for i in range(N):
    tmp = int(sys.stdin.readline().rstrip())
    if tmp in numbers:
        numbers[tmp] += 1
    else:
        numbers[tmp] = 1

max = 0
for key in numbers:
    if numbers[key] > max:
        max = numbers[key]

sorted_numbers = sorted(numbers.items(), key = lambda x:(x[0]))

for i in range(N):
    if sorted_numbers[i][1] == max:
        print(sorted_numbers[i][0])
        break