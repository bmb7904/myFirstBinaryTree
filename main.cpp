#include<iostream>
#include<fstream>
#include <string.h>
#include "StringNode.h"
#include "StringTree.h"

using namespace std;

int main()
{
    
    StringTree stringTree;
    string strng;
    int counter = 0;
    ifstream fin;
    fin.open("sampleNames.txt");
    cout << "List in" << endl << endl;
    while (fin >> strng)
    {
        counter++;
        stringTree.addNode(strng);
    }
    stringTree.printNodes();
    cout << counter << " names were sorted into a binary tree!!" << endl << endl;
    cout << endl;
    do
    {
        cout << "Enter name to search (Q to quit): ";
        cin >> strng;
        if ((strng != "Q") && (strng != "q"))
            stringTree.searchNodes(strng);
    }
    while ((strng != "Q") && (strng != "q"));

    return 0;
}
