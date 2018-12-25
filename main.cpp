#include <iostream>
#include "Node.h"
#include "Trie.h"

using namespace std;

int main()
{
//    cout << "Hello world!" << endl;
//    Node *node = new Node;
//    node->addChild(5);
//    node->printNode();
//    cout << "\n" ;
//    Trie *trie = new Trie;
//    vector <unsigned> v = trie->stringToNum("Aasdkl Z");
//    for(unsigned el: v)
//    {
//        cout << el << endl;
//    }
//
//    string str = trie->numToString(v);
//    cout << str;
//    auto child = node->getChild(5);
//    cout << child.first;

//    Test *test = new Test;
//    test->testNode();



// ПЕРЕПИСАТЬ CLASS NODE!!!!!! VECTOR <PAIR <*NODE, BOOL>> -> VECTOR<*NODE>  - BOOL БОЛЬШЕ МЕШАЕТ, ЧЕМ САХАРА СЫПЕТ
    Trie *trie = new Trie;

    trie->addWord("car");
    trie->addWord("carrot");
    trie->addWord("carrots");

    auto car = trie->findWord("car");
    auto carrot = trie->findWord("carrot");
    auto carrots = trie->findWord("carrots");
    auto carr = trie->findWord("carr");


    car->printNode();
    carrot->printNode();
    carrots->printNode();


    trie->deleteWord("");


    return 0;

}
