t = int(input())
for test in range(t):
    a = int(input())
    lst = list(map(int, input().split()))
    if lst == sorted(lst):
        print(a)
    else:
        print(1)

