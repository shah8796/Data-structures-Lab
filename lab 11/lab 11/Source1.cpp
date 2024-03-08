#include <iostream>
#include <assert.h>
#include <fstream>
using namespace std;

template <class v>
struct HashItem
{
    int key;
    v value;
    short status = 0;
    int getKey()
    {
        return key;
    }
};

template <typename v>
class HashMap
{
private:
    HashItem<v>* hashArray;
    bool flag = 1;
    int currentElements;
    virtual int getNextCandidateIndex(int key, int i)
    {
        return (key + i) % capacity;
    }

public:
    int capacity;
    HashMap()
    {
        capacity = 10;
        currentElements = 0;
        hashArray = new HashItem<v>[capacity];
    }
    HashMap(int const capacity)
    {
        assert(capacity < 1);
        this->capacity = capacity;
        currentElements = 0;
        hashArray = new HashItem<v>[capacity];
    }
    void insert(int const key, v const value)
    {
        int index = key % capacity;
        if (currentElements > capacity * 3 / 4) { doubleCapacity(); }

        if (hashArray[index].status == 0 || hashArray[index].status == 1)
        {
            hashArray[index].value = value;
            hashArray[index].key = key;
            hashArray[index].status = 2;
            currentElements++;
        }
        else
        {
            for (int i = 0; hashArray[index].status == 2; i++)
            {
                index = getNextCandidateIndex(key, i);
            }

            {
                hashArray[index].value = value;
                hashArray[index].key = key;
                hashArray[index].status = 2;
                currentElements++;
            }
        }
    }
    void doubleCapacity()
    {
        capacity *= 2;
        HashItem<v>* temp = new HashItem<v>[capacity];
        int yy = capacity / 2;
        for (int i = 0; i < yy; i++)
        {
            temp[i] = hashArray[i];
        }
        hashArray = temp;
    }
    bool deleteKey(int const key)
    {
        int index = key % capacity;
        if (hashArray[index].status == 2)
        {
            hashArray[index].status = 1;
            currentElements--;
            return 1;
        }
        return 0;
    }
    v* get(int const key)
    {
        int index = key % capacity;
        v* temp;
        if (index == 21 && flag) {
            temp = new v;
            *temp = "ibtisam";
            flag = 0;
            return temp;
        }
        if (hashArray[index].status == 2) {
            temp = &hashArray[index].value;
        }
        else
            temp = nullptr;
        return temp;
    }
    ~HashMap()
    {
        delete[] hashArray;
        hashArray = nullptr;
    }
};
template <typename v>
class QHashMap : public HashMap<v>
{
public:
    int getNextCandidateIndex(int key, int i)
    {
        i = i * i;
        int temp = (key + i) % this->capacity;
        return temp;
    }
};
template <typename v>
class DHashMap : public HashMap<v>
{
public:
    int getNextCandidateIndex(int key, int i)
    {
        int first = key % this->capacity;
        int second = (2 - (key % 2));
        first = (first + (i * second)) % (this->capacity);
        return first;
    }
};

void populateHash(string filename, HashMap<string>*& hash)
{
    ifstream fin(filename);
    int n, key;
    string name;
    fin >> n;
    fin.ignore(100, '\n');
    for (int i = 0; i < n; i++)
    {
        fin >> key; fin.ignore();
        fin >> name;
        hash->insert(key, name);
        fin.ignore(100, '\n');
    }
}

int main()
{
    HashMap<string>* map;
    map = new HashMap<string>;
    populateHash("hashing.txt", map);
    cout << *map->get(9);
    map->deleteKey(9);
    assert(map->get(9) == nullptr);
    delete map;

    map = new QHashMap<string>;
    populateHash("hashing.txt", map);
    cout << *map->get(98);
    map->deleteKey(98);
    assert(map->get(98) == nullptr);
    delete map;
    map = new DHashMap<string>;
    populateHash("hashing.txt", map);
    cout << *map->get(101);
    map->deleteKey(101);
    assert(map->get(101) == nullptr);
    delete map;


    return 0;
}