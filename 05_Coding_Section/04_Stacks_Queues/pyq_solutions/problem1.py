# Problem: Check if brackets are balanced.
# Test Case: '{[()]}' -> True, '{[(])}' -> False

def is_balanced(s):
    # Time: O(N), Space: O(N)
    stack = []
    mapping = {')': '(', '}': '{', ']': '['}
    for char in s:
        if char in mapping.values():
            stack.append(char)
        elif char in mapping.keys():
            if not stack or stack.pop() != mapping[char]:
                return False
    return len(stack) == 0
