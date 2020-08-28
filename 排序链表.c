/*148. 排序链表
在 O(n log n) 时间复杂度和常数级空间复杂度下，对链表进行排序。

示例 1:

输入: 4->2->1->3
输出: 1->2->3->4
示例 2:

输入: -1->5->3->4->0
输出: -1->0->3->4->5*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
struct ListNode* partion(struct ListNode* left,struct ListNode* right)
{
    if(left == right||left->next == right)
    {
        return left;
    }
    int pivot = left->val;
    struct ListNode*p1 = left,*p2 = left->next;
    while(p2!=right)
    {
        if(p2->val<pivot)
        {
            p1 = p1->next;
            swap(&p1->val,&p2->val);
        }
        p2 = p2->next;
    }
    swap(&p1->val,&left->val);
    return p1;
    free(p2);
}
void quick_sort(struct ListNode *left,struct ListNode *right)
{
    if(left == right||left ->next == right)    
        return;
    struct ListNode *mid = partion(left, right);
    quick_sort(left, mid);
    quick_sort(mid->next, right);
}
struct ListNode* sortList(struct ListNode* head)
{
    if(head == NULL||head ->next == NULL)    
        return head;
    quick_sort(head,NULL);

    return head;
}