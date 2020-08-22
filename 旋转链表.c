/*61. ��ת����
����һ��������ת����������ÿ���ڵ������ƶ� k ��λ�ã����� k �ǷǸ�����

ʾ�� 1:

����: 1->2->3->4->5->NULL, k = 2
���: 4->5->1->2->3->NULL
����:
������ת 1 ��: 5->1->2->3->4->NULL
������ת 2 ��: 4->5->1->2->3->NULL
ʾ�� 2:

����: 0->1->2->NULL, k = 4
���: 2->0->1->NULL
����:
������ת 1 ��: 2->0->1->NULL
������ת 2 ��: 1->2->0->NULL
������ת 3 ��: 0->1->2->NULL
������ת 4 ��: 2->0->1->NULL*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* rotateRight(struct ListNode* head, int k)
{
    int len = 1;
    struct ListNode*p = head;
    if(!p) return NULL;
    while(p->next!=NULL)
    {
        p = p->next;
        len++;
    }
    k = len - (k%len);
    if(len == 1||k == 0)
    {
        return head;
    }
    p->next = head;
    while(k--)
    {
        p = head;
        head = head->next;
    }
    p->next = NULL;
    
    return head;
}