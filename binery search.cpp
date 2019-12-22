#include <iostream>
using namespace std;

class node{
public:
    node(int _value){
        value =_value;
        left = NULL;
        right = NULL;
    }
    node *left;
    node *right;
    int value;
};

void insertnode(node* root, int newelement){
    node *newnode = new node(newelement);
    node *curr = root;
    node *prev = NULL;
    while(curr!=NULL){
        prev = curr;
        if(newelement < curr->value){
            curr = curr->left;
        }
        else{
            curr = curr->right;
        }
    }

    if (prev==NULL){
        prev = newnode;
    }
    else if(newelement < prev->value){
        prev->left = newnode;
    }
    else{
        prev->right = newnode;
    }
}

void inorder(node *root)
{
    if(root->left!=NULL){
        inorder(root->left);
    }
    cout << root->value << " ";
    if(root->right!=NULL){
        inorder(root->right);
    }
}

void postorder(node *root){
    if(root->left!=NULL){
        postorder(root->left);
    }
    if(root->right!=NULL){
        postorder(root->right);
    }
    cout << root->value << " ";
}

int main()
{
    int N;
    cin >> N;
    int newelement;
    cin >> newelement;
    node *root = new node(newelement);
    for(int i=1;i<N;i++){
        cin >> newelement;
        insertnode(root, newelement);
    }
    inorder(root);
    cout << endl;
    postorder(root);
    return 0;
}
