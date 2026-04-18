t = int(input())
for test in range(t):
    a = int(input())
    s = input().strip()
    lst = []
    for ch in s:
        if lst and lst[-1] == ch:
            lst.pop()
        else:
            lst.append(ch)
    if not lst:
        print("YES")
    else:
        print("NO")