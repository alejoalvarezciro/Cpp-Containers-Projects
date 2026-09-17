#include "BalanceTree.h"

/////////////////////////
////Private Functions////
/////////////////////////
template <typename T>
void BalanceTree<T>::clearAll(const Node* pNode) {
	if (pNode != nullptr)
	{
		clearAll(pNode->left);
		clearAll(pNode->right);
		delete pNode;
	}
}

template <typename T>
void BalanceTree<T>::copyFathersAndSons(const Node* pNodeCopy, const Node* pNodeOriginal) {
	if (pNodeOriginal != nullptr)
	{
		
	}
}

////////////////////
////Constructors////
////////////////////
template <typename T>
BalanceTree<T>::BalanceTree() :
	root(nullptr), size(0) {
}

/////////////////
////Rule of 5////
/////////////////
template <typename T>
BalanceTree<T>::~BalanceTree() {
	clearAll(root);
}
template <typename T>
BalanceTree<T>::BalanceTree(const BalanceTree& other) :
	root(nullptr), size(0) {
	
}
template <typename T>
BalanceTree<T>& BalanceTree<T>::operator=(const BalanceTree<T>& other) {
	if (&other == this)
	{
		return *this;
	}
	clearAll(root);
	return *this;
}
template <typename T>
BalanceTree<T>::BalanceTree(BalanceTree<T>&& other) noexcept :
	root(other.root), size(other.size) {
	other.root = nullptr;
	other.size = 0;
}
template <typename T>
BalanceTree<T>& BalanceTree<T>::operator=(BalanceTree<T>&& other) noexcept {
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