// panggil package input output
#include<iostream>

using namespace std;

class Node {
	// variabel yang bisa diakses secara public
	public:
		int data;
		Node* left;
		Node* right;
		
		// constructor
		Node(int value) {
			data = value;
			left = NULL;
			right = NULL;
		}
};

class Tree {
	// variabel yang bisa diakses secara public
	public:
		Node* root;
		
		// constructor
		Tree() {
			root = NULL;
		}
		
		// method memasukkan node baru
		void insert(int value) {
			root = insert(root, value);
		}
		
		// method mengatur tampilan node
		Node* insert(Node* node, int value) {
			if (node == NULL) {
				node = new Node(value);
			} else if (value <= node->data) {
				node->left = insert(node->left, value);
			} else {
				node->right = insert(node->right, value);
			}
			return node;
		}
		
		// method membuat inorder dengan parameter inputan root
		void inorder() {
			inorder(root);
		}
		
		void inorder(Node* node) {
			// kalau node tidak ada sama sekali, maka tidak ada yang ditampilkan
			if (node == NULL) return;
			inorder(node->left);
			cout << node->data << " ";
			inorder(node->right);
		}
};

int main() {
	// membuat object dari class Tree
	Tree tree;
	
	// input nilai untuk class Tree
	tree.insert(10);
	tree.insert(5);
	tree.insert(15);
	tree.inorder();
	return 0;
}