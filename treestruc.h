#ifdef _treelist.h_
#define _treelist.h_
#include <stdio.h>
struct tree 
{
char info;
struct tree *left;
struct tree *right; 
};

void inorder(struct tree *root); /* симметричный обход */

void preorder(struct tree *root); /* упорядоченный обход */

void postorder(struct tree *root); /* реверсивный обход */

struct tree *dtree(struct tree *root, char key); /* удаление вершины */


#endif