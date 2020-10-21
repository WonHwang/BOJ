import sys

N = int(input())

students = []

for i in range(N):
    tmp = sys.stdin.readline().rstrip().split(' ')
    students.append([tmp[0], 100 - int(tmp[1]), int(tmp[2]), 100 - int(tmp[3])])

sorted_students = sorted(students, key = lambda x:(x[1], x[2], x[3], x[0]))

for i in range(N):
    print(sorted_students[i][0])