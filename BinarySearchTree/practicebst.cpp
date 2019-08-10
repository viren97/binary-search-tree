#include<iostream>

using namespace std; 

struct node
{
	int key;
	node *left , *right ;
	
};

struct node * NewNode(int key)
{
	struct node * temp = new node;
	temp->key = key;
	temp->left = temp->right = NULL;
	return temp;
}

struct node * insert(struct node * root, int key)
{
	if (root == NULL )
		return NewNode(key);
	else if (root->key > key)
		root->left = insert(root->left, key); 
		
	else if(root->key < key)
		root->right =  insert(root->right , key);
	
	else 
		cout<<"node already present in the tree "<<endl;
	
	return root; 
}

void inorder(struct node *root)
{
	if (root != NULL )
	{
		inorder(root->left);
		cout<<root->key<<endl;
		inorder(root->right);
	}
	
}

struct node * search(struct node* root, int key )
{
	if(root == NULL || root->key == key)
		return root; 
		
	else if (root->key<key)
		return search(root->right , key);
		
	return search(root->left, key);
}
struct node* findMin(struct node* root)
{
	struct node* current = root;
	while(current->left!= NULL)
		current = current->left;
	return current;
}
struct node * Delete(struct node* root, int key)
{
	if (root == NULL)
		return root;
		
	else if(root->key>key)
		root->left = Delete(root->left, key);
		
	else if (root->key<key)
		root->right = Delete(root->right,key);
		
	else
	{
		if (root->left == NULL || root->right == NULL)
		{
			delete root;
			root = NULL;	}	
			
		else if (root->left == NULL)
		{
			struct node *temp = root;
			root = root->right ;
			delete temp;
			
		}
		
		else if(root->right == NULL)
		{
			struct node * temp = root;
			root = root->left; 
			delete temp;
			
		}
		
		else
		{
			struct node* temp = findMin(root->right);
			root->key = temp->key;
			root->right = Delete(root->right, temp->key);
		}
	}
	return root;
}
int isBST(struct node* root, int min, int max)
{
	if (root == NULL)
		return 1;
	if (root->key<min || root->key>max)
		return 0;
	return isBST(root->left, min, root->key - 1) && 
			isBST(root->right, root->key+1, max);
}
int main()
{
	struct node * root = NULL;
	
	while(true)
	{
		int val;
		cout<<"enter the value you want to insert "<<endl;
		cin>>val;
		if (val == 0000)
			break; 
		root = insert(root, val);
		
		}
	int choice;
	cout<<"inorder traversal 1"<<endl; 
	cout<<"search for element 2"<<endl;
	cout<<"delete element 3"<<endl;
	cout<<"kindly enter your choice "<<endl;
	cin >>choice;	
	switch(choice)
		{
			case 1:
					inorder(root);
					break;
				
			case 2:	
					int k;
					cout<<"enter the search element "<<endl;
					cin>>k;
			     	cout<<search(root,k);
			     	break;
			     	
			case 3: 
					inorder(root);
					cout<<"enter the element you want to delete "<<endl;
					int d;
					cin>>d;
					root = Delete(root,d);
					inorder(root);
					break;
					
			default: cout<<"you've enter invalid choice ";
					break;
					
				
			
		}
		if (isBST(root, INT_MIN, INT_MAX))
			cout<<"tree is bst ";
		else
			cout<<"not bst ";	
	return 0;	
	
	
}
