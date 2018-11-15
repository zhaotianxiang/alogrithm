#define NULL 0
struct ListNode 
{
	int val;
	struct ListNode* next;
	ListNode(int x) :
	val(x), next(NULL){
	}
};
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
    	//case 1: do nothing
        if(pHead == NULL && pHead ->next == NULL)
        	return pHead;

        //case 2:
        ListNode* tail = pHead->next;// record tail node
        ListNode* node = pHead->next;
        while(node)
        {
            headInsert(ListNode* pHead,ListNode node);	
        }
        tail = NULL;
    }

    ListNode* headInsert(ListNode* pHead,ListNode node){
    	if(pHead == NULL){
    		pHead->next = node;
    	}

    	if(pHead != NULL){
    		node->next = pHead;
    		pHead->next = node;
    	}
    	return pHead;
    }
};