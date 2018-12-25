#include "Trie.h"
#include <algorithm>
#include <string>
#include <stdlib.h>
using namespace std;

Trie::Trie()
{
    Node* node = new Node;
    this->root = node;
}


Node* Trie::findWord(string wrd)
{
    vector <unsigned> word = this->stringToNum(wrd);
    vector <unsigned> foundRes = {};
    Node* root = this->getRoot();
    for(unsigned letter: word)
    {
        Node* nextLetter = root->getChild(letter);
        if(nextLetter)
        {
            foundRes.push_back(letter);
            root = nextLetter;
        }
    }
    string res = this->numToString(foundRes);
    if (root->isEnd() and res == wrd) return root;
    else return nullptr;
}


void Trie::addWord(string wrd)
{
    if(!this->findWord(wrd))
    {
        vector <unsigned> word = this->stringToNum(wrd);
        Node* root = this->getRoot();
         for(unsigned letter: word)
        {
            if(root->getChild(letter))
            {
                root = root->getChild(letter);
            }else
            {
                root->addChild(letter);
                root = root->getChild(letter);
            }
        }
        root->setEnd(true);
    }
}

string Trie::deleteWord(string wrd)
{
    if(this->findWord(wrd))
    {
        Node* lastLetter = this->findWord(wrd);
        vector <unsigned> word = this->stringToNum(wrd);

        if(!lastLetter->isEmpty())
        {
            cout << "Есть дети!!!";
        }
    }
}

vector <unsigned> Trie::stringToNum(string word)
{
    transform(word.begin(), word.end(), word.begin(), ::tolower);

    vector <unsigned> res = {};

    for(char &element: word)
    {
        unsigned el = (unsigned) element;
        if(el >= 97 and el <= 122)
            res.push_back(el - 97);
    }
    return res;
}


string Trie::numToString(vector <unsigned> nums)
{
    string res = "";
    for(unsigned &element: nums)
    {
        char el = (char) element + 97;
        res+=el;
    }
    return res;
}


Node* Trie::getRoot()
{
    return this->root;
}


