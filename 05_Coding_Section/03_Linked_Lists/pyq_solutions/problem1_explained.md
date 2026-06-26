# 📝 Solution Explanation: Reverse a Linked List

## 💡 Problem Statement
Reverse a Linked List

## 🛠️ Code Implementations

### 🐍 Python (Optimal)
```python
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

```

### 👾 C++ Alternative
```cpp
// C++ Alternative
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while(curr) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

```

## 📈 Complexity Analysis

* **Time Complexity**: $O(N)$ - we iterate through the input elements exactly once.
* **Space Complexity**: $O(1)$ - auxiliary workspace utilizes constant memory storage.
