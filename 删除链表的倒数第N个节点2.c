/*19. ɾ������ĵ�����N���ڵ�
����һ������ɾ������ĵ����� n ���ڵ㣬���ҷ��������ͷ��㡣

ʾ����

����һ������: 1->2->3->4->5, �� n = 2.

��ɾ���˵����ڶ����ڵ�������Ϊ 1->2->3->5.*/

 Definition for singly-linked list.
 struct ListNode {
     int val;
     struct ListNode *next;
 };
 


struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode *p = head,*q = head;
    while(p)
    {
        if(n<0)
        {
            q = q->next;
        }
        n--;
        p = p->next;
    }
    if(n==0)
    {
        return head->next;
    }
    q->next = q->next->next;
    return head;

}
int main()