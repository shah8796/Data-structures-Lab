//#include <iostream>
//using namespace std;
//class node
//{
//public:
//	int data;
//	node* left;
//	node* right;
//
//	node()
//	{
//		data = 0;
//		left = NULL;
//		right = NULL;
//	}
//	node(int da)
//	{
//		data = da;
//	}
//
//};
//class bst
//{
//	node* root;
//public:
//	bst()
//	{
//
//		root = NULL;
//	}
//	bst(const node*& n)
//	{
//		root == n;
//
//	}
//
//	void insert(int da, node*& no)
//	{
//		if (no == NULL)
//		{
//			no = new node(da);
//
//		}
//		else if (no->data >= da)
//		{
//			insert(da, no->left);
//		}
//		else
//		{
//			insert(da, no->right);
//		}
//	}
//
//	void insert(int da)
//	{
//		insert(da, root);
//	}
//	node* search(node*& no, int da)
//	{
//		if (no)
//		{
//			if (no->data > da)
//			{
//				search(no->left, da);
//			}
//			else if (no->data < da)
//				search(no->right, da);
//
//			else
//				return no;
//		}
//		else
//			return nullptr;
//
//	}
//
//	node* search(int da)
//	{
//		return search(root, da);
//	}
//	void inorder(node*& root)
//	{
//		if (root == NULL)
//		{
//			return;
//		}
//
//		inorder(root->left);
//		cout << root->data << " ";
//		inorder(root->right);
//	}
//	void inorder()
//	{
//		inorder(root);
//
//	}
//
//	void preorder(node*& root)
//	{
//		if (root == NULL)
//		{
//			return;
//		}
//		cout << root->data << " ";
//		preorder(root->left);
//		preorder(root->right);
//	}
//	void preorder()
//	{
//		preorder(root);
//
//	}
//	void postorder(node*& root)
//	{
//		if (root == NULL)
//		{
//			return;
//		}
//
//		postorder(root->left);
//		postorder(root->right);
//		cout << root->data << " ";
//	}
//	void postorder()
//	{
//		postorder(root);
//
//	}
//	int lenght(node* root)
//	{
//		if (root == NULL)
//			return 0;
//		else
//			return(lenght(root->left) + 1 + lenght(root->right));
//	}
//	int lenght()
//	{
//		return lenght(root);
//	}
//	int leafCount(node* root)
//	{
//		if (root == NULL)
//			return 0;
//		if (root->left == NULL && root->right == NULL)
//			return 1;
//		else
//			return leafCount(root->left) +
//			leafCount(root->right);
//	}
//	int leafCount()
//	{
//		return leafCount(root);
//	}
//	~bst()
//	{
//		destroy(root);
//	}
//	void destroy(node*& root)
//	{
//		if (root)
//		{
//			destroy(root->left);
//			destroy(root->right);
//			delete root;
//
//		}
//	}
//
//};
//
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
//
//	system("pause");
//}