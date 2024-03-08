//#include<iostream>
//#include<list>
//using namespace std;
//
//class graph {
//	int* visited;
//	int v; // No. of vertices
//	list<int> *adj; // adjacency lists
//	
//public:
//	graph(int n)
//	{
//		v = n;
//		adj = new list<int>[v];
//		visited = new int[v];
//		for (int i = 0; i < n; i++)
//		{
//			visited[i] = 0;
//		}
//	}// Constructor
//	void TakeInput(int n, int w)
//	{
//		adj[n].push_back(w);
//		//adj[w].push_back(n);
//	}// to take input from the user in this sequence:
//	
//	void ExploreFunction(int start,int cities,int roads,int flights)
//	{
//		int temp;
//		if (visited[start]==0)
//		{
//			cout << start << " ";
//			visited[start]=1;
//		}
//		while (!adj[start].empty())
//		{
//			//cout << start << " ";
//			int x = adj[start].back();
//			temp = x + 1;
//			adj[start].pop_back();
//			ExploreFunction(x,cities,roads,flights);
//
//		}
//		ExploreFunction(temp, cities, roads, flights);
//	}// print the paths from start to every other
//	
//};
//
//int main()
//{
//	graph g(4); // Total 5 vertices in graph
//
//	/*g.TakeInput(0, 1);
//	g.TakeInput(0, 2);
//	g.TakeInput(1, 2);
//	g.TakeInput(2, 0);
//	g.TakeInput(2, 3);
//	g.TakeInput(3, 3); */
//	g.TakeInput(1, 2);
//	g.TakeInput(3, 5);
//	g.TakeInput(5, 4);
//	int cities;
//	int roads;
//	int flights;
//	cout << "input the numbe of cities,roads and flights:" << endl;
//	cin >> cities;
//	cin >> roads;
//	cin >> flights;
//	cout << " Following is Depth First Traversal\n" << endl;
//	g.ExploreFunction(0,cities,roads,flights);
//}
