#pragma once
class BalanceTree
{
private:

	struct Node {
		int weight;
		int id;
		Node* left;
		Node* right;
		Node(const int& pID, Node* pLeft = nullptr, Node* pRight = nullptr) :
			id(pID), weight(0), left(pLeft), right(pRight) {
		}
	};

	Node* root;
	size_t size;

	void clearAll(Node* pNode);

public:



};

