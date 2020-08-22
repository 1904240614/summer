/*101. �Գƶ�����
����һ����������������Ƿ��Ǿ���ԳƵġ�

 

���磬������ [1,2,2,3,4,4,3] �ǶԳƵġ�

    1
   / \
  2   2
 / \ / \
3  4 4  3
 

����������� [1,2,2,null,3,null,3] ���Ǿ���ԳƵ�:

    1
   / \
  2   2
   \   \
   3    3*/
#include<stdio.h>
#include<string.h>
 //* Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };



bool check(struct TreeNode*q,struct TreeNode*p)
{
    if(!p&&!q)
    {
        return true;
    }
    if(!p||!q)
    {
        return false;
    }
    return p->val == q->val&&check(q->left,p->right)&&check(q->right,p->left);
}
bool isSymmetric(struct TreeNode* root)
{
    return check(root,root);
}
int CreateTree(struct TreeNode**T)  
{  
    int ch;  
    scanf("%d",&ch);  
    if (ch == -1)  
    {  
        *T = NULL;  
        return 0;  
    }  
    else  
    {  
        *T = (struct TreeNode*)malloc(sizeof(TreeNode));  
        if (T == NULL)  
        {  
            printf("failed\n");  
            return 0;  
        }  
        else  
        {  
            (*T)->data = ch;  
            printf("����%d�����ӽڵ㣺",ch);  
            CreateTree(&((*T)->lChild));  
            printf("����%d�����ӽڵ㣺",ch);  
            CreateTree((&(*T)->rChild));  
        }  
    }  
  
    return 1;  
}  
int main()
{
	struct TreeNode*p;
	CreateTree(&p);
	printf("%s",isSymmetric(p));

	return 0;

	
}
