# BOJ - 2011번 암호코드 문제

def solution():
    N = input()
    length = len(N)
    N = ' ' + N
    DP = [1] * (length + 1)
    if N[1] == '0':
        return 0
    for i in range(2, length + 1):
        if N[i] == '0' and (N[i-1] > '2' or N[i-1] == '0'):
            return 0
        if N[i] == '0' and N[i-1] <= '2' and N[i-1] >= '1':
            DP[i] = DP[i-2] % 1000000
        elif N[i-1] == '2' and (N[i] < '7' and N[i] > '0'):
            DP[i] = (DP[i-1] + DP[i-2]) % 1000000
        elif N[i-1] == '1' and N[i] > '0':
            DP[i] = (DP[i-1] + DP[i-2]) % 1000000
        else:
            DP[i] = DP[i-1] % 1000000
    answer = DP[length]
    return answer

print(solution())