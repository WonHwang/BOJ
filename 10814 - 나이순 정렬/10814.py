import sys

N = int(input())
people = []

for i in range(N):
    tmp = sys.stdin.readline().rstrip().split(' ')
    people.append([tmp[1], int(tmp[0]), i])

sorted_people = sorted(people, key = lambda item:(item[1], item[2]))

for i in range(N):
    print(str(sorted_people[i][1]) + ' ' + sorted_people[i][0])