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
    ListNode* swapPairs(ListNode* head) {
     vector<int>Ans; //Ans=[];

     ListNode*temp=head;

     while(temp){
        Ans.push_back(temp->val);
        temp=temp->next;
     }
     //Ans=[1,2,3,4];

     int i=0;
     int j=i+1;
     while(i<Ans.size() && j<Ans.size()){
        swap(Ans[i], Ans[j]);
        i=i+2;
        j=j+2;
     }
     temp=head;
     for(int i=0; i<Ans.size(); i++){
        temp->val=Ans[i];
        temp=temp->next;
     }
     return head;
    }
};