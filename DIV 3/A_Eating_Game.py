t = int(input())
for test in range(t):
    a = map(int, input())
    lst = list(map(int, input().split()))
    max_ele = max(lst)
    print(lst.count(max_ele))