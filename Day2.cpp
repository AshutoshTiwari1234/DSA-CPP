//solving first hard level problem on leetcode without any help and it boosts my confidence.
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> res(20001,0);
        for(int i=0;i<lists.size();i++){
            ListNode* temp=lists[i];
            while(temp!=NULL){
                res[temp->val+10000]++;
                temp=temp->next;
            }
        }
        ListNode* Head=NULL;
        ListNode* prev=new ListNode();
        for(int i=0;i<20001;i++){
            while(res[i]!=0){
                ListNode* ans=new ListNode(i-10000);
                res[i]--;
                if(Head==NULL){
                    Head=ans;
                    prev=ans;
                }
                else{
                    prev->next=ans;
                    prev=ans;
                }

            }
        }
        return Head;
    }
};