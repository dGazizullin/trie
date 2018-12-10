#ifndef NODE_H
#define NODE_H
#include <vector>

using namespace std;


class Node
{
    public:

        Node();
        void setChildren(vector <pair <Node*, bool>> children);

        vector <pair <Node*, bool>> getChildren();

        void addChild(int num);

        Node* getChild(int num);

        void deleteChild(int num);


        void setEnd(bool);
        bool isEnd();
        bool isEmpty();

        void printNode();

    private:
        bool endWord;

        vector <pair <Node*, bool>> children;
};

#endif // NODE_H
