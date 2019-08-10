#include<iostream>
using namespace std;

struct node
{
	int key;
	node *left, *right ;
	
};

struct node *newNode(int key)
{
	node *temp = new node;
	temp->key = key;
	temp->left = temp->right = NULL;
	return temp;
}

struct node* insert(struct node *root, int key)
{
	if (root == NULL )
		return newNode(key);
		
	if (root->key>key)
		root->left = insert(root->left, key);
		
	else
		root->right = insert(root->right, key);
		
	return root;
}

void preOrder(node *root)
{ 
	if(root != NULL)
	{
		cout<<root->key<<endl;
		preOrder(root->left);
		preOrder(root->right);
	}
}

void postOrder(node *root)
{
	if (root!= NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->key<<endl;
	}
}
void inorder(node * root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->key<<endl;
		inorder(root->right);
	}
}

int main()
{
	node *root = NULL;
	int val;
	
	while(true)
	{
		cout<<"enter the key value";
		cin>>val;
		if(val == 0000)
			break;
			
		root = insert(root, val);
	}
	//inorder(root);
	postOrder(root);
	//preOrder(root);
	
	return 0;
	
}


//#include <iostream> 
//using namespace std; 
//  
///* A binary tree node has data, pointer to left child 
//and a pointer to right child */
//struct Node 
//{ 
//    int data; 
//    struct Node* left, *right; 
//    Node(int data) 
//    { 
//        this->data = data; 
//        left = right = NULL; 
//    } 
//}; 
//  
///* Given a binary tree, print its nodes according to the 
//"bottom-up" postorder traversal. */
//void printPostorder(struct Node* node) 
//{ 
//    if (node == NULL) 
//        return; 
//  
//    // first recur on left subtree 
//    printPostorder(node->left); 
//  
//    // then recur on right subtree 
//    printPostorder(node->right); 
//  
//    // now deal with the node 
//    cout << node->data << " "; 
//} 
//  
///* Given a binary tree, print its nodes in inorder*/
//void printInorder(struct Node* node) 
//{ 
//    if (node == NULL) 
//        return; 
//  
//    /* first recur on left child */
//    printInorder(node->left); 
//  
//    /* then print the data of node */
//    cout << node->data << " "; 
//  
//    /* now recur on right child */
//    printInorder(node->right); 
//} 
//  
///* Given a binary tree, print its nodes in preorder*/
//void printPreorder(struct Node* node) 
//{ 
//    if (node == NULL) 
//        return; 
//  
//    /* first print data of node */
//    cout << node->data << " "; 
//  
//    /* then recur on left sutree */
//    printPreorder(node->left);  
//  
//    /* now recur on right subtree */
//    printPreorder(node->right); 
//}  
//  
///* Driver program to test above functions*/
//int main() 
//{ 
//    struct Node *root = new Node(1); 
//    root->left             = new Node(2); 
//    root->right         = new Node(3); 
//    root->left->left     = new Node(4); 
//    root->left->right = new Node(5); 
//	root->right->left = new Node(6);
//	root->right->right = new Node(9); 
//  
//    cout << "\nPreorder traversal of binary tree is \n"; 
//    printPreorder(root); 
//  
//    cout << "\nInorder traversal of binary tree is \n"; 
//    printInorder(root);  
//  
//    cout << "\nPostorder traversal of binary tree is \n"; 
//    printPostorder(root); 
//  
//    return 0; 
//} 
