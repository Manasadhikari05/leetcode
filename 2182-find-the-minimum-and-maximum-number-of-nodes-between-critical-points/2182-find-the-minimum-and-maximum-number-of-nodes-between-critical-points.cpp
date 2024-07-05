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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>criticalpoint;
        ListNode*pre=nullptr;
        ListNode*curr=head;
        int position=0;
        while(curr!=nullptr && curr->next!=nullptr)
        {
            if(pre!=NULL && curr->next!=NULL){
                if((curr->val >pre->val && curr->val>curr->next->val)||
                curr->val <pre->val && curr->val<curr->next->val)
                criticalpoint.push_back(position);
            }
            pre=curr;
            curr=curr->next;
            position++;
        }
        if(criticalpoint.size()<2)
        {
            return{-1,-1};
        }
        int mindist=INT_MAX;
        int maxdist=criticalpoint.back()-criticalpoint.front();
        for(int i=1;i<criticalpoint.size();i++)
        {
            mindist=min(mindist,criticalpoint[i]-criticalpoint[i-1]);
        }
        return {mindist,maxdist};
        
    }
};