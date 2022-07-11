#include "../resources/main.h"


 // Definition for singly-linked list.
 struct ListNode {
     int val;
    ListNode *next;
     ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* h1 = list1;
        ListNode* h2 = list2;
        bool fst = 1;
        int eq = 0;
        ListNode* h=h1;
        if(h1&&!h2) return h1;
        if(!h1&&h2) return h2;
        while(h1!=NULL&&h2!=NULL){
           
            if((h1->val < h2->val) || ((h1->val == h2->val) && (eq == 1))) {
                if(fst) fst = 0;
                if(h1->next==NULL || h1->next->val > h2->val) {
                    ListNode* tmp = h1->next;
                    h1->next = h2;
                    h1 = tmp;
                    eq = 0;
                }
                else {
                    h1 = h1->next;
                    eq = 2;
                }
            }
            else if((h1->val > h2->val) || ((h1->val == h2->val) && (eq == 2))){
                if(fst){
                    fst = 0;
                    h = h2;
                }
                if(h2->next==NULL || h2->next->val > h1->val) {
                    ListNode* tmp = h2->next;
                    h2->next = h1;
                    h2 = tmp;
                    eq = 0;
                }
                else {
                    h2 = h2->next;
                    eq = 1;
                }
            }   
        }
        return h;
    }
};