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

    vector<ListNode*> splitListToParts(ListNode* head, int k) {

    int n = 0;
    ListNode* curr = head;
    while(curr)
    {
        n++;
        curr = curr -> next;
    }

    int grpSize = n/k;
    int rem = n%k;

    if(grpSize ==0 )
    {
        grpSize = 1;
        rem = 0;
    }

    vector<ListNode*> list;
    curr = head;
    ListNode* h = curr;
    int count = 0;

    while(curr)
    {
        count++;

        if(count == grpSize)
        {
            if(rem  > 0){
                curr = curr -> next;
                rem--;
            }
            ListNode* temp = curr -> next;
            curr -> next = NULL;
            curr = temp;
            list.push_back(h);
            h = curr;
            count = 0;

        }

        else{
            curr = curr -> next;
        }

    }


    while(list.size() < k)
    {
        ListNode*h = NULL;
        list.push_back(h);
    }

    return list;
        
    }
};