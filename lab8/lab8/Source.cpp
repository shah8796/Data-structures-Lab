//#include<iostream>
//using namespace std;
//struct node {
//	int data;
//	node* left;
//	node* right;
//	node()
//	{
//		left = nullptr;
//		right = nullptr;
//	}
//};
//class bst {
//	node* root;
//public:
//	bst()
//	{
//		root = nullptr;
//	}
//	bst(node*& Node)
//	{
//		root = Node;
//	}
//	
//	void insert(int value, node* Node)
//	{
//		if (Node == nullptr)
//		{
//			Node = new node;
//			Node->data = value;
//		}
//		else if (Node->data >= value)
//		{
//			 insert(value, Node->left);
//		}
//		else if (Node->data < value)
//		{
//			 insert(value, Node->right);
//		}
//		
//	}
//	void insert(int value)
//	{
//		insert(value, root);
//	}
//	void preorder(node* Node)
//	{
//		if (Node != nullptr)
//		{
//			cout << Node->data << endl;
//			preorder(Node->left);
//			preorder(Node->right);
//		}
//	}
//	void postorder(node* Node)
//	{
//		if (Node != nullptr)
//		{
//			postorder(Node->left);
//			postorder(Node->right);
//			cout << Node->data << endl;
//			
//		}
//	}
//	
//	void inorder(node* Node)
//	{
//		if (Node != nullptr)
//		{
//			inorder(Node->left);
//			cout << Node->data;
//			inorder(Node->right);
//		}
//	}
//	void inorder()
//	{
//		inorder(root);
//	}
//	void postorder()
//	{
//		postorder(root);
//	}
//	void preorder()
//	{
//		preorder(root);
//	}
//	node* search(node*&Node,int value)
//	{
//		if (Node)
//		{
//			if (Node->data < value)
//			{
//				search(Node->right, value);
//			}
//			else if (Node->data > value)
//			{
//				search(Node->left, value);
//			}
//			else
//			{
//				return Node;
//			}
//		}
//		else
//			return NULL;
//	}
//	node* search(int value)
//	{
//		return search(root, value);
//	}
//	int leafCount(node* Node)
//	{
//		if (Node == NULL)
//		{
//			return 0;
//		}
//		if (Node->left == NULL && Node->right == NULL)
//		{
//			return 1;
//		}
//		else
//		{
//			return leafCount(root->left) +
//				leafCount(root->right);
//		}
//	}
//	int leafCount()
//	{
//		return leafCount(root);
//	}
//	int lenght(node* Node)
//	{
//		if (Node == NULL)
//			return 0;
//		else
//			return(lenght(root->left) + 1 + lenght(root->right));
//	}
//	int lenght()
//	{
//		return lenght(root);
//	}
//	void destroy(node*& Node)
//	{
//		if (Node)
//		{
//			destroy(Node->left);
//			destroy(Node->right);
//			delete Node;
//
//		}
//	}
//	~bst()
//	{
//		destroy(root);
//	}
//	
//
//};
//int main()
//{
//	bst tree;
//	tree.insert(500);
//	tree.insert(1000);
//	tree.insert(1);
//	tree.insert(600);
//	tree.insert(700);
//	tree.insert(10);
//	tree.insert(30);
//	tree.insert(9000);
//	tree.insert(50000);
//	tree.insert(20);
//	cout << "Printing data using recursive inorder traversal: ";
//	tree.inorder();
//	cout << "\nCOPY CONSTRUCTOR\n";
//	bst tree1(tree);
//	tree.insert(66);
//	cout << "\n Preorder Traversal \n";
//	tree1.preorder();
//	cout << "\n Preorder Traversal \n";
//	tree.preorder();
//
//	cout << "\n Inorder Traversal \n";
//	tree1.inorder(); cout << "\n";
//	cout << "Postorder Traversal \n";
//	tree1.postorder();
//	cout << "\n SEARCH: ";
//
//	cout << tree.search(15) << endl;
//	tree.search(30);
//	tree.search(50);
//	cout << "\n Tree Length: " << tree.lenght() << endl << endl;
//	cout << "\n Tree Leaf Nodes: " << tree.leafCount() << "\n";
//	cout << endl;
//}