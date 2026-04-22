# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummy = ListNode(-1, head)  # val is -1, point to head
        slow = dummy
        fast = head

        # move fast n
        for i in range(n):
            fast = fast.next

        # move n - 1 times left after moving fast n
        while fast:
            slow = slow.next
            fast = fast.next

        # skip / delete / remove n - 1 node from slow
        slow.next = slow.next.next

        return dummy.next
