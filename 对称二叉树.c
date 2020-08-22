/*101. 对称二叉树
给定一个二叉树，检查它是否是镜像对称的。

 

例如，二叉树 [1,2,2,3,4,4,3] 是对称的。

    1
   / \
  2   2
 / \ / \
3  4 4  3
 

但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:

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
            printf("输入%d的左子节点：",ch);  
            CreateTree(&((*T)->lChild));  
            printf("输入%d的右子节点：",ch);  
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
