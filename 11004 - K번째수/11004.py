# BOJ - 11004번 K번째 수 문제

import sys

N, K = input().split(' ')
N = int(N)
K = int(K)
arr = [0] * N
arr = sys.stdin.readline().rstrip().split(' ')
for i in range(N):
    arr[i] = int(arr[i])


def get_pivot(arr, left, right):
    pivot = int((left + right) / 2)
    return pivot

def swap(a, b):
    tmp = arr[a]
    arr[a] = arr[b]
    arr[b] = tmp

def quick_select(left, right):
    

swap(arr,0,N-1)
print(arr)