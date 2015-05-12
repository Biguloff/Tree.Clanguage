#include <stdio.h>

struct tree *dtree(struct tree *root, char key)
{
	struct tree *p,*p2;
	if(!root) return root; /* вершина не найдена */
	if(root->info == key) { /* удаление корня */
	/* это означает пустое дерево */
	if(root->left == root->right){
	free(root);
	return NULL;
}
	/* или если одно из поддеревьев пустое */
else if(root->left == NULL) 
{
	p = root->right;
	free(root);
	return p;
}
else if(root->right == NULL)
{
	p = root->left;
	free(root);
	return p;
}
	/* или есть оба поддерева */
else 
{
	p2 = root->right;
	p = root->right;
	while(p->left) p = p->left;
	p->left = root->left;
	free(root);
	return p2;
}
}
if(root->info < key) root->right = dtree(root->right, key);
else root->left = dtree(root->left, key);

return root;
}
