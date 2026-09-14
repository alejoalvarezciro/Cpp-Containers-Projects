#include "BalanceTree.h"

void BalanceTree::clearAll(Node* pNode) {
	if (pNode != nullptr)
	{
		clearAll(pNode->left);
		clearAll(pNode->right);
		delete pNode;
	}
}