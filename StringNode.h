#ifndef STRINGNODE_H
#define STRINGNODE_H

using namespace std;

class StringNode
{
    public:
        string strng;
        StringNode *left, *right;

        StringNode();
        StringNode(string s);
};

StringNode::StringNode()
{
    left = NULL;
    right = NULL;
}

StringNode::StringNode(string s)
{
    strng = s;
    left = NULL;
    right = NULL;
}

#endif	// STRINGNODE_H

