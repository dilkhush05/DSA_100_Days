/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
       
        while(node){
            node->val = node->next->val;
             if(node->next->next == NULL){
                node->next = NULL;
                break;
            }
            node = node->next;
           
        }
        

        // if(node == NULL)
        //     return;

        // ListNode* nextNode = node->next;

        // if(nextNode != NULL) {
        //     node->val = nextNode->val;
        //     node->next = nextNode->next;
        //     delete nextNode;
        // }
        // else {
        //     // Node to be deleted is the last node in the list
        //     delete node;
        //     node = NULL; 
        // }
    
    }
};