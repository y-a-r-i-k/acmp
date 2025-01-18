def main():
    k, n = map(int, input().split())
    dp = [1]

    for i in range(n):
        dp += [sum(dp[-k:])]

    print(dp[n])
    

if __name__ == "__main__":
    main()