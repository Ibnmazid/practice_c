def find_missing_element(b, n):
    # Calculate the sum S
    S = sum(b[i] if i % 2 == 0 else -b[i] for i in range(2 * n))
    
    # Try each element in b as the missing element
    for x in b:
        a1 = S + x
        a = [a1] + b
        a.remove(x)
        
        # Check if the sequence satisfies the conditions
        valid = True
        for i in range(1, 2 * n + 1):
            if a[i] == a1:
                valid = False
                break
            if i % 2 == 1:
                a1 -= a[i]
            else:
                a1 += a[i]
        
        if valid and a1 == 0:
            return a
    
    return None

def solve(test_cases):
    results = []
    for n, b in test_cases:
        result = find_missing_element(b, n)
        results.append(result)
    return results

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    index = 1
    test_cases = []
    
    for _ in range(t):
        n = int(data[index])
        b = list(map(int, data[index + 1:index + 1 + 2 * n]))
        test_cases.append((n, b))
        index += 1 + 2 * n
    
    results = solve(test_cases)
    
    for result in results:
        print(' '.join(map(str, result)))

if __name__ == "__main__":
    main()