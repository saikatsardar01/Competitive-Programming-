import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n, x, y = map(int, input().split())
    p = list(map(int, input().split()))
    
    L = p[:x]
    M = p[x:y]
    R = p[y:]
    
    i = j = k = 0
    result = []
    
    while i < len(L) or j < len(M) or k < len(R):
        candidates = []
        if i < len(L):
            candidates.append((L[i], 'L'))
        if j < len(M):
            candidates.append((M[j], 'M'))
        if k < len(R):
            candidates.append((R[k], 'R'))
        
        val, source = min(candidates)
        result.append(val)
        
        if source == 'L':
            i += 1
        elif source == 'M':
            j += 1
        else:
            k += 1
    
    print(*result)