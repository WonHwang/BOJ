# BOJ - 11651번 좌표 정렬하기 - 2 문제

import sys

N = int(input())
points = []
for i in range(N):
    point = sys.stdin.readline().rstrip().split(' ')
    point = [int(point[1]), int(point[0])]
    points.append(point)
points.sort()
for point in points:
    print(str(point[1]) + ' ' + str(point[0]))