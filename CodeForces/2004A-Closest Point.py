def helper(arr, n):
    arr.sort()
    if arr[0] + 1 >= arr[1]:
        return "NO"
    
    pt = arr[1] - 1
    
    for i in range(1, n - 1):
        if abs(pt - arr[i]) > min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1])):
            return "NO"
    
    if abs(arr[n - 1] - arr[n - 2]) < abs(pt - arr[n - 1]):
        return "NO"
    
    return "YES"
 
def main():
    t = int(input().strip())
    
    for _ in range(t):
        n = int(input().strip())
        arr = list(map(int, input().strip().split()))
        
        print(helper(arr, n))
 
if __name__ == "__main__":
    main()
