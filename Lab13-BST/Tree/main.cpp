#include <iostream>
#include"binarysearchtree.h"
using namespace std;

int main()
{
    TreeType<int> tr;
    if(tr.IsEmpty())
    {
        cout << "Tree is empty" << endl;
    }
    else
    {
        cout << "Tree is not empty" << endl;
    }

    cout << "Insert ten items: " << endl;
    for(int i=0; i<10; i++)
    {
        int a;
        cin >> a;
        tr.InsertItem(a);
    }

    if(tr.IsEmpty())
    {
        cout << "Tree is empty" << endl;
    }
    else
    {
        cout << "Tree is not empty" << endl;
    }

    cout << "Tree length is = " << tr.LengthIs() << endl;
    int item = 9;
    bool found;
    tr.RetrieveItem(item,found);
    if(found)
    {
        cout << "Item is found" << endl;
    }
    else
    {
        cout << "Item is not found" << endl;
    }

    item = 13;
    found = true;
    tr.RetrieveItem(item,found);
    if(found)
    {
        cout << "Item is found" << endl;
    }
    else
    {
        cout << "Item is not found" << endl;
    }


    //Print elemnts in the tree (inorder)
    cout << "In-order: " << endl;
    tr.ResetTree(IN_ORDER);
    bool finished = false;
    while(!finished)
    {
            tr.GetNextItem(item, IN_ORDER, finished);
            if(!finished)
            {
                cout << item << " ";
            }
    }
    cout << endl;


    //Print elemnts in the tree (preorder)
    cout << "Pre-order: " << endl;
    tr.ResetTree(PRE_ORDER);
    finished = false;
    while(!finished)
    {
        tr.GetNextItem(item, PRE_ORDER, finished);
        if(!finished)
        {
            cout << item << " ";
        }
    }
    cout << endl;


    //Print elemnts in the tree (postorder)
    cout << "Post-order: " << endl;
    tr.ResetTree(POST_ORDER);
    finished = false;
    while(!finished)
    {
        tr.GetNextItem(item, POST_ORDER, finished);
        if(!finished)
        {
            cout << item << " ";
        }
    }
    cout << endl;

    tr.Print();

    return 0;
}
