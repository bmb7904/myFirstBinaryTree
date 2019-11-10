#ifndef STRINGTREE_H
#define STRINGTREE_H

#include<iostream>

using namespace std;

class StringTree
{
    private:
        StringNode *root;

        void placeNode(StringNode *&current, string s);
        void printNode(StringNode *current);
        void searchNode(StringNode *&current, string s);

    public:
        StringTree();
        void addNode (string s);
        void printNodes();
        void searchNodes(string s);
};

StringTree::StringTree()
{
    root = NULL;
}

void StringTree::placeNode(StringNode *&current, string s)
{
    if (current == NULL)
    {
        current  = new StringNode(s);
        return;
    }
    if (s < current->strng)
        placeNode(current->left, s);
    else
        placeNode(current->right, s);
    return;
}

void StringTree::addNode (string s)
{
    placeNode(root, s);
    return;
}

void StringTree::printNode(StringNode *current)
{
    if (current == NULL)
        return;
    if (current->left != NULL)
        printNode(current->left);
    cout << current->strng << endl;
    if (current->right != NULL)
        printNode(current->right);

}

void StringTree::printNodes()
{
    //StringNode *current = root;
    cout << endl << "Sorted List" << endl << endl;
    printNode(root);
    return;
}

void::StringTree::searchNode(StringNode *&current, string s)
{
    if (current == NULL)
    {
        cout << endl << endl << s << " is Not Found!" << endl << endl;
        return;
    }
    if (current->strng == s)
    {
        cout << endl << endl << "Found " << s << "!" << endl << endl;
        return;
    }
    cout << "> ";
    if (s < current->strng)
        searchNode(current->left, s);
    else
        searchNode(current->right, s);
    return;
}

void::StringTree::searchNodes(string s)
{
    StringNode *current = root;
    searchNode(current, s);
    return;
}

#endif	// STRINGTREE_H

