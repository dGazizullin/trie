#ifndef TRIE_H
#define TRIE_H
#include <vector>
#include <iostream>
#include "Node.h"

using namespace std;

class Trie
{
    public:
        Trie();
        Node* findWord(string word);
        void addWord(string word);
        string deleteWord(string word);


        vector <unsigned> stringToNum(string word);
        string numToString(vector <unsigned> nums);

        Node* getRoot();


    private:
        Node* root;

};

#endif // TRIE_H
