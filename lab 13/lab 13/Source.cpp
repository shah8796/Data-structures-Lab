//#include<iostream>
//#include<list>
//using namespace std;
//class hashmap {
//	list<int>* adj;
//public:
//	hashmap()
//	{
//		adj = new list<int>[10];
//
//	}
//	void hash(int element)
//	{
//		int x = element % 10;
//		adj[x].push_back(1);
//	}
//	bool search(int x)
//	{
//		if (!adj[x].empty())
//		{
//			if (adj[x].back() == 1)
//			{
//				return true;
//			}
//			else
//				return false;
//		}
//		else
//			return false;
//	}
//};
//class graph {
//	//int* visited;
//	int v; // No. of vertices
//	list<int> *adj; // adjacency lists
//	hashmap obj;
//public:
//	graph(int n)
//	{
//		v = n;
//		adj = new list<int>[v];
//		//visited = new int[v];
//		/*for (int i = 0; i < n; i++)
//		{
//			visited[i] = 0;
//		}*/
//	}// Constructor
//	void TakeInput(int n, int w)
//	{
//		adj[n].push_back(w);
//	}// to take input from the user in this sequence:
//	
//	void ExploreFunction(int start)
//	{
//		
//		if (!obj.search(start))
//		{
//			cout << start << " ";
//			obj.hash(start);
//		}
//		while (!adj[start].empty())
//		{
//			//cout << start << " ";
//			int x = adj[start].back();
//			adj[start].pop_back();
//			ExploreFunction(x);
//		}
//	}// print the paths from start to every other
//	
//};
//
//int main()
//{
//	graph g(4); // Total 5 vertices in graph
//
//	g.TakeInput(0, 1);
//	g.TakeInput(0, 2);
//	g.TakeInput(1, 2);
//	g.TakeInput(2, 0);
//	g.TakeInput(2, 3);
//	g.TakeInput(3, 3); 
//	cout << " Following is Depth First Traversal\n" << endl;
//	g.ExploreFunction(2);
//}
