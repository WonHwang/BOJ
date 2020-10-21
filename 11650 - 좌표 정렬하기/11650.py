# BOJ - 11650번 좌표 정렬하기 문제
N = int(input())
points = []
for i in range(N):
    point = input().split(' ')
    point = [int(point[0]), int(point[1])]
    points.append(point)
points.sort()
for point in points:
    print(str(point[0]) + ' ' + str(point[1]))