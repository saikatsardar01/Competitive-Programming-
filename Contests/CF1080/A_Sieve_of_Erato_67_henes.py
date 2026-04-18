t = int(input())
for test in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    found = False
    for mask in range(1, 1 << n):
        product = 1
        for i in range(n):
            if mask & (1 << i):
                product *= arr[i]
        if product == 67:
            found = True
            break
    if found:
        print("YES")
    else:
        print("NO")
