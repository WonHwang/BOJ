# BOJ - 11052번 카드구매하기 문제

N = int(input())
price = [0] * 1001
DP = [0] * 1001
prices = input()
prices = prices.split(' ')
for i in range(N):
    price[i+1] = int(prices[i])
DP[1] = price[1]
for i in range(2, N+1):
    max = price[i]
    for j in range(1, i+1):
        if DP[i-j] + DP[j] > max:
            max = DP[i-j] + DP[j]
    DP[i] = max
print(DP[N])