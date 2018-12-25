#include "Node.h"
#include <vector>
#include <iostream>
using namespace std;

Node::Node()
{
	this->setEnd(false);
	vector<pair <Node*, bool>> children(26);
	this->children = children;
}

void Node::setEnd(bool isEnd)
{
	this->endWord = isEnd;
}

bool Node::isEnd()
{
	return this->endWord;
}

void Node::setChildren(vector <pair <Node*, bool>> children)
{
	this->children = children;
}

void Node::addChild(int num)
{
	if(num >= 0 and num < 26)
	{
		Node *node = new Node;
		this->children[num].first = node;
		this->children[num].second = true;

	}
}


Node* Node::getChild(int num)
{
	if (this != nullptr)
	{
		pair <Node*, bool> child = this->children[num];
		if(child.second)
		{
			Node* res = child.first;
			return res;
		}
	}
}

vector <pair <Node*, bool>>  Node::getChildren()
{
	if(this != nullptr)
		return this->children;
}

void Node::deleteChild(int num)
{
	if(num >= 0 and num < 26 and this != nullptr)
	{
		this->children[num].first = nullptr;
		this->children[num].second = false;

	}
}

bool Node::isEmpty()
{
	if(this != nullptr)
	{
		auto children = this->getChildren();

		for(pair<Node*, bool> child: children)
		{
			if(child.second == true) return false;
		}
		return true;
	}

}

void Node::printNode()
{
	if(this != nullptr)
	{
		auto children = this->getChildren();
		for (int i = 0; i < children.size(); i++)
		{
			cout << i << " - " << children[i].first << " - " << children[i].second << "\n";
		}
	}

}
