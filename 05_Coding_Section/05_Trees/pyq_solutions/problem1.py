# Problem: Find depth/height of binary tree.
# Time: O(N), Space: O(H) recursive stack space.

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def max_depth(root):
    if not root: return 0
    return max(max_depth(root.left), max_depth(root.right)) + 1
