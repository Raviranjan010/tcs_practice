# Problem: Reverse a singly linked list in place.
# Edge cases: Empty list, single node list.

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def reverse_list(head):
    # Time: O(N), Space: O(1)
    prev = None
    curr = head
    while curr:
        next_node = curr.next
        curr.next = prev
        prev = curr
        curr = next_node
    return prev
