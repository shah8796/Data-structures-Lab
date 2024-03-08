//#include<iostream>
//using namespace std;
//
//template<typename type>
//class avl {
//private:
//	struct Node {
//		type data;
//		int height;
//		Node* right;
//		Node* left;
//		Node() {
//			right = NULL;
//			left = NULL;
//		}
//	};
//	Node* root;
//public:
//	//Iterator class
//	class Iterator {
//	private:
//		Node* iptr;
//	public:
//		Iterator(Node* ptr = NULL) {
//			iptr = ptr;
//		}
//		Iterator& operator++() {       //prefix ++
//			if (iptr) iptr = iptr->right;
//			return (*this);
//		}
//		Iterator& operator--() {       //prefix --
//			if (iptr) iptr = iptr->left;
//			return (*this);
//		}
//		// != operator Overloading
//		bool operator!=(Iterator iterate) {
//			return (iptr != iterate.iptr);
//		}
//		// Dereference operator(*) to return data
//		type& operator *() {
//			return iptr->data;
//		}
//	};
//	Iterator begin() {
//		return root;
//	};
//
//	//Constructor
//	avl() {
//		root = NULL;
//	}
//	//INSERT function
//	void insert(type elem) {
//		insert(elem, root);
//	}
//	void insert(type elem, Node*& temp) {
//		if (temp) {
//			if (elem < temp->data) {
//				insert(elem, temp->left);
//			}
//			else if (elem > temp->data) {
//				insert(elem, temp->right);
//			}
//		}
//		else {
//			temp = new Node;
//			temp->data = elem;
//		}
//		balance(temp);
//	}
//	int max(int a, int b)
//	{
//		return (a > b) ? a : b;
//	}
//
//	int height() {
//		return height(root);
//	}
//	int height(Node* temp) {
//		if (temp == nullptr)
//		{
//			return 0;
//		}
//		return max(height(temp->left), height(temp->right)) + 1;
//
//	}
//	//BALANCE Function
//	bool balance(Node*& temp) {
//		if (temp) {
//			if (height(temp->left) - height(temp->right) > 1) {
//				if (height(temp->left->left) >= height(temp->left->right)) {
//					rotateright(temp);
//				}
//				else {
//					doublerotate_leftright(temp);
//				}
//				return false;
//			}
//			else if (height(temp->right) - height(temp->left) > 1) {
//				if (height(temp->right->right) >= height(temp->right->left)) {
//					rotateleft(temp);
//				}
//				else {
//					doublerotate_rightleft(temp);
//				}
//				return false;
//			}
//			temp->height = max(height(temp->left), height(temp->right)) + 1;
//			return true;
//		}
//	}
//	//ROTATIONS FUNCTIONS
//	void rotateright(Node*& temp) {
//		Node* orphan = temp->left->right;
//		Node* parent = temp->left;
//		parent->right = temp;
//		temp->left = orphan;
//		temp->height = height(temp);
//		parent->height = height(parent);
//		temp = parent;
//	}
//	void rotateleft(Node*& temp) {
//		Node* orphan = temp->right->left;
//		Node* parent = temp->right;
//		parent->left = temp;
//		temp->right = orphan;
//		temp->height = height(temp);
//		parent->height = height(parent);
//		temp = parent;
//	}
//	void doublerotate_leftright(Node*& temp) {
//		rotateleft(temp->left);
//		rotateright(temp);
//	}
//	void doublerotate_rightleft(Node*& temp) {
//		rotateright(temp->right);
//		rotateleft(temp);
//	}
//
//	//Print Function
//	void print() {
//		print(root);
//	}
//	void print(Node* temp) {
//		if (temp) {
//			print(temp->left);
//			value(temp);
//			print(temp->right);
//		}
//	}
//	//POST ORDER PRINT
//	void postprint() {
//		postprint(root);
//	}
//	void postprint(Node* temp) {
//		if (temp) {
//			print(temp->left);
//			print(temp->right);
//			value(temp);
//		}
//	}
//	//Pre order print
//	void preprint() {
//		preprint(root);
//	}
//	void preprint(Node* temp) {
//		if (temp) {
//			value(temp);
//			print(temp->left);
//			print(temp->right);
//		}
//	}
//	void value(Node* temp) {
//		cout << temp->data << " ";
//	}
//
//	//DELETE Function
//	void del(type elem) {
//		del(elem, root);
//	}
//	void del(type elem, Node*& temp) {
//		if (temp) {
//			if (elem < temp->data) {
//				del(elem, temp->left);
//			}
//			else if (elem > temp->data) {
//				del(elem, temp->right);
//			}
//			else {
//				delnode(temp);
//			}
//		}
//		balance(temp);
//	}
//	void delnode(Node*& temp) {
//		if (temp) {
//			Node* a = temp;
//			if (temp->left == NULL) {
//				temp = temp->right;
//				delete a;
//			}
//			else if (temp->right == NULL) {
//				temp = temp->left;
//				delete a;
//			}
//			else {
//				type d = predecessor(temp->left);
//				temp->data = d;
//				del(d, temp->left);
//			}
//		}
//	}
//	type predecessor(Node* temp) {
//		while (temp->right != NULL) {
//			temp = temp->right;
//		}
//		return temp->data;
//	}
//
//	//Search Function
//	void search(type data) {
//		search(data, root);
//	}
//	void search(type data, Node* temp) {
//		if (temp) {
//			if (data < temp->data) {
//				search(data, temp->left);
//			}
//			else if (data > temp->data) {
//				search(data, temp->right);
//			}
//			else {
//				cout << "Found!\n";
//			}
//		}
//		else {
//			cout << "Not Found!\n";
//		}
//	}
//	//Copy Constructor
//	void copytree(avl& obj) {
//		copytree(root, obj.root);
//	}
//	void copytree(Node* temp, Node*& copy) {
//		if (temp) {
//			copy = new Node;
//			copy->data = temp->data;
//			copytree(temp->left, copy->left);
//			copytree(temp->right, copy->right);
//		}
//	}
//
//	//Destructor
//	~avl() {
//		cout << "Destructor Called!\n";
//		destroy(root);
//	}
//	void destroy(Node*& temp) {
//		if (temp) {
//			destroy(temp->left);
//			destroy(temp->right);
//			delete temp;
//			temp = NULL;
//		}
//	}
//
//	//TASK-02
//	bool isAVL() {
//		return isAVL(root);
//	}
//	bool isAVL(Node* temp) {
//		cout << endl;
//		if (balance(temp)) {
//			cout << "It is an AVL tree!\n";
//			return true;
//		}
//		else {
//			cout << "Not AVL tree!\n";
//			return false;
//		}
//	}
//
//	void findmin() {
//		findmin(root);
//	}
//	void findmin(Node* temp) {
//		if (temp) {
//			if (temp->left != NULL) {
//				findmin(temp->left);
//			}
//			else {
//				cout << "1st Minimum is: " << temp->data << endl;
//			}
//		}
//	}
//	void find2ndmin() {
//		find2ndmin(root);
//	}
//	void find2ndmin(Node* temp) {
//		if (temp) {
//			if (temp->left->left != NULL) {
//				find2ndmin(temp->left);
//			}
//			else {
//				cout << "2nd Minimum is: " << temp->data << endl;
//			}
//		}
//	}
//	void find3rdmin() {
//		find3rdmin(root);
//	}
//	void find3rdmin(Node* temp) {
//		if (temp) {
//			if (temp->left->left->left != NULL) {
//				find3rdmin(temp->left);
//			}
//			else {
//				cout << "3rd Minimum is: " << temp->data << endl;
//			}
//		}
//	}
//	void itprint() {
//		itprint(root);
//	}
//	void itprint(Node* temp) {
//		Iterator it = temp;
//		while (temp != NULL) {
//			temp = temp->left;
//			cout << temp->data << " ";
//		}
//	}
//
//};
//
//
//int main() {
//	//TASK -01
//	cout << " Question 1" << endl;
//	cout << endl;
//	avl<int> obj;
//	obj.insert(1);
//	obj.insert(5);
//	obj.insert(7);
//	obj.insert(10);
//	obj.insert(6);
//	obj.insert(2);
//	obj.insert(8);
//
//	cout << "AVL Tree is: ";
//	obj.print();
//
//	cout << "\nHeight is: " << obj.height() << endl << endl;
//	cout << "After Deleting 2: ";
//	obj.del(5);
//	obj.print();
//
//	cout << "\nSearching 11: ";
//	obj.search(11);
//	cout << endl;
//
//	avl<int> obj2;
//	obj.copytree(obj2);
//	cout << "Copying obj1 in obj2: ";
//	obj2.print();
//
//	cout << "\n\nInorder print: ";
//	obj.print();
//
//	cout << "\n\npreorder print: ";
//	obj.preprint();
//
//	cout << "\n\npostorder print: ";
//	obj.postprint();
//
//
//	//TASK-02
//	cout << "\n\n Question 2\n\n";
//	obj.isAVL();
//	obj.findmin();
//	obj.find2ndmin();
//	obj.find3rdmin();
//
//
//	return 0;
//}