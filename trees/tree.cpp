#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

Node* BinaryTree() {
    int x;
    cin >> x;
    if(x==-1)
    return NULL;

    Node * temp = new Node(x);

    cout << "Enter the left child of" << x << " :";
    temp->left = BinaryTree();
    cout << "Enter the right child of" << x << " :";
    temp->right = BinaryTree();

    return temp;

}

void PreOrder(Node *root) {
    if(root == NULL)
    return;

    cout << root->data;
    PreOrder(root->left);
    PreOrder(root->right);
}
void InOrder(Node *root) {
    if(root == NULL)
    return;

    PreOrder(root->left);
    cout << root->data;
    PreOrder(root->right);
}
void PostOrder(Node *root) {
    if(root == NULL)
    return;

    PreOrder(root->left);
    PreOrder(root->right);
    cout << root->data;
}

int main() {
    // int x,leftChild,rightChild;
    // queue<Node*>q;
    // cin >> x;
    // Node *root = new Node(x);
    // q.push(root);
    // while(!q.empty())
    // {
    //     Node * temp = q.front();
    //     q.pop();
    //     cout << "Enter the left child of " << temp->data << " :";
    //     cin >> leftChild;
    //     if(leftChild!=-1)
    //     {
    //         temp->left = new Node(leftChild);
    //         q.push(temp->left);
    //     }
    //     cout << "Enter the right child of " << temp->data << " :";
    //     cin >> rightChild;
    //     if(rightChild!=-1)
    //     {
    //         temp->right = new Node(rightChild);
    //         q.push(temp->right);
    //     }
    // }

    cout << "Enter the root Nodes: ";
    Node *root;
    root = BinaryTree();

    PreOrder(root);
    cout << endl;
    InOrder(root);
    cout << endl;
    PostOrder(root);
    cout << endl;


}