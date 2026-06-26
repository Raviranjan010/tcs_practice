# Problem: Return all primes up to N.
# Time: O(N log log N), Space: O(N)

def sieve(n):
    prime = [True] * (n + 1)
    prime[0] = prime[1] = False
    for p in range(2, int(n**0.5) + 1):
        if prime[p]:
            for i in range(p * p, n + 1, p):
                prime[i] = False
    return [i for i in range(n + 1) if prime[i]]
