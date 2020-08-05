/*83. ɾ�����������е��ظ�Ԫ��
����һ����������ɾ�������ظ���Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Ρ�

ʾ�� 1:

����: 1->1->2
���: 1->2
ʾ�� 2:

����: 1->1->2->3->3
���: 1->2->3*/

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 


struct ListNode* deleteDuplicates(struct ListNode* head)
{
    if(head == NULL) return NULL;
    struct ListNode*p = head;  
    while(p!=NULL&&p->next!=NULL)
    {
        if(p->val == p->next->val)
        {
            p->next = p->next->next;
        }
        else
        {
            p = p->next;
        }
    }
    return head;  
}
struct ListNode *readlist()
{
	struct ListNode *head,*tail,*p;
	int n;
	int size=sizeof(struct ListNode);
	scanf("%d",&n);
	head = tail = NULL;
	while(n != -1)
	{
		p=(struct ListNode *)malloc(size);
		p->val = n;
		if(head == NULL)
		{
			head = p;
		}
		else
		{
			tail->next = p;
		}
		tail = p;
		scanf("%d",&n);
	}
	tail->next = NULL;
	return head;

}
int main()
{
    struct ListNode*head;
	readlist();
    deleteDuplicates(head);

	return 0;
}