#include "BalanceTree.h"

/////////////////////////
////Private Functions////
/////////////////////////
void BalanceTree::clearAll(const Node* pNode) {
	if (pNode != nullptr)
	{
		clearAll(pNode->left);
		clearAll(pNode->right);
		delete pNode;
	}
}

void BalanceTree::copyFathersAndSons(const Node* pNodeCopy, const Node* pNodeOriginal) {
	if (pNodeOriginal != nullptr)
	{
		
	}
}

////////////////////
////Constructors////
////////////////////
BalanceTree::BalanceTree() :
	root(nullptr), size(0) {
}

/////////////////
////Rule of 5////
/////////////////
BalanceTree::~BalanceTree() {
	clearAll(root);
}
BalanceTree::BalanceTree(const BalanceTree& other) :
	root(nullptr), size(0) {
	
}
BalanceTree& BalanceTree::operator=(const BalanceTree& other) {
	if (&other == this)
	{
		return *this;
	}
	clearAll(root);
	return *this;
}
BalanceTree::BalanceTree(BalanceTree&& other) noexcept :
	root(other.root), size(other.size) {
	other.root = nullptr;
	other.size = 0;
}
BalanceTree& BalanceTree::operator=(BalanceTree&& other) noexcept {
	if (&other == this)
	{
		return *this;
	}
	clearAll(root);
	root = other.root;
	size = other.size;
	other.root = nullptr;
	other.size = 0;
	return *this;
}