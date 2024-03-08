//#include <iostream>
//#include <limits.h>
//#include <fstream>
//#include <math.h>
//
//using namespace std;
//
//
//template <typename T>
//void Swap(T& x, T& y)
//{
//    T temp = x;
//    x = y;
//    y = temp;
//}
//
//class Student
//{
//public:
//    int rollno;
//    string name;
//    float cgpa;
//
//    Student()
//    {
//        rollno = cgpa = 0;
//        name = "";
//    }
//    Student(int inrol, string inname, float incgpa)
//    {
//        rollno = inrol;
//        name = inname;
//        cgpa = incgpa;
//    }
//    bool operator<(Student obj)
//    {
//        if (rollno < obj.rollno)
//            return 1;
//        return 0;
//    }
//    bool operator>(Student obj)
//    {
//        if (rollno > obj.rollno)
//            return 1;
//        return 0;
//    }
//    friend ostream& operator<<(ostream& out, Student obj)
//    {
//        out << "Roll no.: " << obj.rollno << endl
//            << "Name: " << obj.name
//            << endl
//            << "CGPA: " << obj.cgpa << endl
//            << endl;
//        return out;
//    }
//
//};
//
//
//template <typename T>
//class MinHeap
//{
//public:
//    T* harr;
//    int capacity;
//    int heap_size;
//
//    MinHeap(int cap)
//    {
//        heap_size = 0;
//        capacity = cap;
//        harr = new T[cap];
//    }
//    MinHeap()
//    {
//        harr = new T;
//        heap_size = 0;
//        capacity = 1;
//    }
//    int parent(int i)
//    {
//        return (i - 1) / 2;
//    }
//
//    int left(int i)
//    {
//        return (2 * i + 1);
//    }
//
//    int right(int i)
//    {
//        return (2 * i + 2);
//    }
//
//    void getMin(T& ret)
//    {
//        ret = harr[0];
//    }
//
//    void insertKey(T k)
//    {
//        if (heap_size == capacity)
//        {
//            T* temparr = new T[capacity * 2];
//            for (int i = 0; i < heap_size; i++)
//            {
//                Swap(temparr[i], harr[i]);
//            }
//            capacity <<= 1;
//            //delete harr;
//            harr = temparr;
//        }
//
//        // First insert the new key at the end
//        heap_size++;
//        int i = heap_size - 1;
//        harr[i] = k;
//
//        // Fix the min heap property if it is violated
//        while (i != 0 && harr[parent(i)] > harr[i])
//        {
//            Swap(harr[i], harr[parent(i)]);
//            i = parent(i);
//        }
//    }
//    void decreaseKey(int i, T new_val)
//    {
//        harr[i] = new_val;
//        while (i != 0 && harr[parent(i)] > harr[i])
//        {
//            Swap(harr[i], harr[parent(i)]);
//            i = parent(i);
//        }
//    }
//    void deleteMin()
//    {
//        deleteKey(0);
//    }
//
//    // This function deletes key at index i. It first reduced value to minus
//    // infinite, then calls extractMin()
//    void deleteKey(int i)
//    {
//        T nul;
//        decreaseKey(i, nul);
//        extractMin();
//    }
//    void linearSearch(T val)
//    {
//        for (int i = 0; i < heap_size; i++)
//        {
//            if (harr[i] == val)
//            {
//                cout << "Value Found!";
//                return;
//            }
//        }
//        cout << "Value NOT Found!";
//    }
//
//    // Method to remove minimum element (or root) from min heap
//    T extractMin()
//    {
//        if (heap_size <= 0)
//            return harr[capacity - 1];
//        if (heap_size == 1)
//        {
//            heap_size--;
//            return harr[0];
//        }
//
//        // Store the minimum value, and remove it from heap
//        T root = harr[0];
//        harr[0] = harr[heap_size - 1];
//        heap_size--;
//        MinHeapify(0);
//
//        return root;
//    }
//
//    // A recursive method to heapify a subtree with the root at given index
//    // This method assumes that the subtrees are already heapified
//    void MinHeapify(int i)
//    {
//        int l = left(i);
//        int r = right(i);
//        int smallest = i;
//        if (l < heap_size && harr[l] < harr[i])
//            smallest = l;
//        if (r < heap_size && harr[r] < harr[smallest])
//            smallest = r;
//        if (smallest != i)
//        {
//            Swap(harr[i], harr[smallest]);
//            MinHeapify(smallest);
//        }
//    }
//
//    void printArray()
//    {
//        for (int i = 0; i < heap_size; i++)
//            cout << harr[i] << " ";
//        cout << endl;
//    }
//    int height()
//    {
//        return ceil(log2(heap_size + 1)) - 1;
//    }
//    ~MinHeap()
//    {
//        //delete harr;
//        heap_size = capacity = 0;
//    }
//    bool isEmpty()
//    {
//        if (heap_size == 0)
//            return 1;
//        return 0;
//    }
//};
//
//
//
//
//void buildStudentHeap(string file, MinHeap<Student>& stdheap)
//{
//    fstream input(file, ios::in);
//    int in;
//    input >> in;
//    input.ignore(100, '\n');
//    while (in--)
//    {
//        Student st;
//        input >> st.rollno >> st.name >> st.cgpa;
//        stdheap.insertKey(st);
//    }
//}
//
//int main()
//{
//    MinHeap<Student> stdHeap;
//    Student st;
//    buildStudentHeap("students.txt", stdHeap);
//    while (!stdHeap.isEmpty())
//    {
//        Student s;
//        stdHeap.getMin(s);
//        cout << s << endl
//            << endl;
//        stdHeap.deleteMin();
//    }
//    system("pause");
//}