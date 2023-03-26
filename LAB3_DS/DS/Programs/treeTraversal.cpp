#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};
class BinaryTree {
private:
    Node* root;
public:
    BinaryTree() {
        root = NULL;
    }
    void insert(int data) {
        root = insert(root, data);
    }
    Node* insert(Node* node, int data) {
        if (node == NULL) {
            node = new Node(data);
        }
        else if (data < node->data) {
            node->left = insert(node->left, data);
        }
        else if (data > node->data) {
            node->right = insert(node->right, data);
        }
        return node;
    }
    void inorderTraversal() {
        cout << "Inorder Traversal: ";
        inorderTraversal(root);
        cout << endl;
    }
    void inorderTraversal(Node* node) {
        if (node == NULL) {
            return;
        }
        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }
    void preorderTraversal() {
        cout << "Preorder Traversal: ";
        preorderTraversal(root);
        cout << endl;
    }
    void preorderTraversal(Node* node) {
        if (node == NULL) {
            return;
        }
        cout << node->data << " ";
        preorderTraversal(node->left);
        preorderTraversal(node->right);
    }
    void postorderTraversal() {
        cout << "Postorder Traversal: ";
        postorderTraversal(root);
        cout << endl;
    }
    void postorderTraversal(Node* node) {
        if (node == NULL) {
            return;
        }
        postorderTraversal(node->left);
        postorderTraversal(node->right);
        cout << node->data << " ";
    }
};
int main() {
    BinaryTree bt;
    bt.insert(50);
    bt.insert(30);
    bt.insert(20);
    bt.insert(40);
    bt.insert(70);
    bt.insert(60);
    bt.insert(80);
    bt.inorderTraversal();
    bt.preorderTraversal();
    bt.postorderTraversal();
    return 0;
}
