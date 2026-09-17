#pragma once
template <typename T>
class BalanceTree
{
private:

	struct Node {
		size_t weight;
		int id;
		Node* left;
		Node* right;
		Node(const int& pID, Node* pLeft = nullptr, Node* pRight = nullptr) :
			id(pID), weight(0), left(pLeft), right(pRight) {
		}

		void updateWeight() {
			if (left != nullptr) {weight = (weight > left->weight + 1) ? weight : left->weight + 1;}
			if (right != nullptr) {weight = (weight > right->weight + 1) ? weight : right->weight + 1;}
		};
	};

	Node* root;
	size_t size;

	void clearAll(const Node* pNode);
	void copyFathersAndSons(const Node* pNodeCopy, const Node* pNodeOriginal);

public:

	//Constructors
	BalanceTree();

	//Rule of 5
	~BalanceTree();
	BalanceTree(const BalanceTree& other);
	BalanceTree& operator=(const BalanceTree& other);
	BalanceTree(BalanceTree&& other) noexcept;
	BalanceTree& operator=(BalanceTree&& other) noexcept;

};

