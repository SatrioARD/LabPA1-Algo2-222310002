#include <iostream>

using namespace std;
  // properties Node
struct Node{
int data;
struct Node *left,  *right;

// constructor
Node(int data){
  this->data = data;
  left = right = NULL;
}
};

// preorder transversal
void preorderTraversal(struct Node* node){
  if (node == NULL) return;

  cout << node->data << " "; // nampilkan data pertama masuk
  preorderTraversal(node->left);
  preorderTraversal(node->right);
}

// postorder traversal
void postorderTraversal(struct Node* node){
  if (node == NULL) return;

  postorderTraversal(node->left);
  postorderTraversal(node->right);
  cout << node->data << " ";
}

void inorderTraversal(struct Node * node){
  if (node == NULL) return;

  inorderTraversal(node->left);
  cout << node->data << " ";
  inorderTraversal(node->right);
}

//fungsi utama
int main(){
  struct Node* root = new Node(18);
  root->left = new Node(30);
  root->right = new Node (33);
  root->left->left = new Node(29);
  root->left->right = new Node(32);

  cout << "Inorder traversal output ";
  inorderTraversal(root);
  cout <<endl;
  cout << "Preorder traversal output ";
  preorderTraversal(root);
  cout <<endl;
  cout << "Postorder traversal output ";
  postorderTraversal(root);
  cout <<endl;
}