def altstring(n,s):
    ones = s.count('1')
    zeros = s.count('0')
    if ones == n or zeros == n:
        return 1

    if ones == zeros:
        return ones + zeros
    
    if ones == zeros + 1:
        return ones + zeros
    
    if zeros == ones + 1:
        return ones + zeros

    mn = min(ones, zeros)

    return 2*mn + 1

for _ in range(int(input())):
    n = int(input())
    s = input()
    print(altstring(n,s))
