// HashTables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

class HashNode{
public:
    int key;
    char value;

    HashNode(int key, char value) 
    {
        this->key = key;
        this->value = value;
    };
};
class HashTable {
public:
    HashNode** table;

    HashTable() {
        table = new HashNode*[10];
        for (size_t i = 0; i < 10; i++)
        {
            table[i] = NULL;
        }
    }
    int HashKey() {};
    void insertNode(int key, char value) 
    {
        HashNode* newNode = new HashNode(key, value);
        for (int i = 0; i < 10; i++) {
            if (table[i] != NULL)
            {
                if (table[i]->key == key) {
                    table[i] = newNode;
                    return;
                }
            }
        }
        for (int i = 0; i < 10; i++) {
            if(table[i] == NULL)
            {
                table[i] = newNode;
                return;
            }
        }
    };
    char deleteNode(int key) {
        for (int i = 0; i < 10; i++) {
            if (table[i] != NULL) {
                if (table[i]->key == key)
                {
                    char t = table[i]->value;
                    table[i] = 0;
                    return t;
                }
            }
        }
    };
};
int main()
{
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
