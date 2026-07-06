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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c=0;
        int sum =l1->val+l2->val;
        c=sum/10;
        ListNode* res = new ListNode(sum % 10);
        ListNode* cur = res;
        l1=l1->next;
        l2=l2->next;
        while (l1 !=NULL || l2 !=NULL) {
            int t1 = 0;
            int t2 = 0;
            if (l1!=NULL) {
                t1=l1->val;
            }
            if (l2!= NULL) {
                t2=l2->val;
            }
            sum=t1+t2+c;
            c=sum/10;
            cur->next=new ListNode(sum % 10);
            cur=cur->next;
            if(l1!=NULL){
                l1=l1->next;}
            if(l2!=NULL) {
                l2=l2->next;
            }
        }
        if(c!=0){
            cur->next=new ListNode(c);
        }
        return res;
    }
};
