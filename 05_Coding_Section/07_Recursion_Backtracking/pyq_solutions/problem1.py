# Problem: Find N-th Fibonacci number.
# Time: O(N) iterative / O(N) memoized.

def fib_iterative(n):
    if n <= 1: return n
    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b
