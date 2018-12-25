#ifndef FILEINTERFACE_H_INCLUDED
#define FILEINTERFACE_H_INCLUDED
#include <fstream>
#include "Trie.h"
using namespace std;

class FileInterface
{
    public:
    FileInterface(ifstream file);

    Trie* getTrie();
    void setTrie(Trie* trie);


    private:
    Trie* trie;
    ifstream file;
};


#endif // FILEINTERFACE_H_INCLUDED
