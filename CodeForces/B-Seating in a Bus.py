t: Codeforces Round 966 (Div. 3), problem: (B) Seating in a Bus, Accepted, #, Copy
def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    index = 0
    tc = int(data[index])
    index += 1
    
    results = []
    
    for _ in range(tc):
        n = int(data[index])
        index += 1
        
        a = list(map(int, data[index:index + n]))
        index += n
        
        b = [-1] * (n + 1)
        
        for i in range(n):
            b[a[i]] = i + 1
        
        ff = True
        
        for i in range(a[0] + 1, n + 1):
            if b[i - 1] > b[i]:
                ff = False
        
        for i in range(a[0] - 1, 0, -1):
            if b[i + 1] > b[i]:
                ff = False
        
        if ff:
            results.append("YES")
        else:
            results.append("NO")
    
    print("\n".join(results))
 
if __name__ == "__main__":
    main()
