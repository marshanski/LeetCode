struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode* copy = new ListNode(0, head);
        ListNode* prev = copy;
        
        while(head != nullptr)
        {
            if(head->next != nullptr && head->next->val == head->val)
            {
                while(head->next != nullptr && head->next->val == head->val)
                    head->next = head->next->next;

                prev->next = head->next;   
            }
            else
                prev = prev->next;

            head = head->next;
        }
        return copy->next;
        
    }
};