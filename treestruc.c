#include <stdio.h>

struct tree 
{
char info;
struct tree *left;
struct tree *right;
};


void inorder(struct tree *root)
{
if(!root) return;
}
inorder(root->left);
if(root->info) printf("%c ", root->info);
inorder(root->right);


void preorder(struct tree *root)
{
if(!root) return;
if(root->info) printf("%c ", root->info);
preorder(root->left);
preorder(root->right);
}


void postorder(struct tree *root)
{
if(!root) return;
}
postorder(root->left);
postorder(root->right);
if(root->info) printf("%c ", root->info);
}

