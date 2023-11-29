/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;
        while(current!=nullptr){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    void merge(ListNode* l1, ListNode* l2){
        
        while(l2){
            ListNode* l1_new = l1->next;
            ListNode* l2_new = l2->next;
            l1->next = l2;
            l2->next = l1_new;
            l1 = l1_new;
            l2 = l2_new;

        }
    }
    void reorderList(ListNode* head) {
     if(!head || !head->next)   {
         return ;
     }
     ListNode* slow = head;
     ListNode* fast = head;

    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* second_half = reverse(slow->next);
    slow->next = nullptr;

    merge(head, second_half);

    }
};
