#include <iostream>
#include "test.cpp"

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

    Trie *trie = new Trie;

    trie->addWord("car");
    trie->addWord("carrot");

    Node* f1 = new Node;
    cout << f1->isEmpty() << endl;

    f1 = trie->findWord("car");
    cout << f1->isEmpty() << endl;


    Node* f2 = trie->findWord("carrot");

    cout << f2->isEmpty() << endl;
    Node* f3 = trie->findWord("carr");

    cout << trie->deleteWord("car");
    //cout << endl << f1 << endl << f2 << endl << f3 << endl;


    return 0;
}
