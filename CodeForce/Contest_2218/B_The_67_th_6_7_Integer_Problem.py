t = int(input())
for test in range(t):
    lst = list(map(int, input().split()))
    maxEle = max(lst)
    lst.pop(lst.index(maxEle))
    total = -1 * sum(lst)
    total = total + maxEle
    print(total)