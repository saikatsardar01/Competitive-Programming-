import sys
input = sys.stdin.readline

MAXA = 10**6

# Precompute smallest prime factor
spf = list(range(MAXA + 1))
for i in range(2, int(MAXA**0.5) + 1):
    if spf[i] == i:
        for j in range(i*i, MAXA+1, i):
            if spf[j] == j:
                spf[j] = i

def omega(x):
    cnt = 0
    while x > 1:
        p = spf[x]
        while x % p == 0:
            x //= p
            cnt += 1
    return cnt

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    # If already non-decreasing → Bob
    if all(a[i] <= a[i+1] for i in range(n-1)):
        print("Bob")
        continue
    
    S = 0
    for x in a:
        S += omega(x) - 1
    
    if S % 2 == 1:
        print("Alice")
    else:
        print("Bob")