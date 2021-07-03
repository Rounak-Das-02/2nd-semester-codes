#include <bits/stdc++.h>

using namespace std;

struct Node{
    // Node* parent;
    int node;
    int data;
    vector <Node*> child;
};

typedef Node* Tree;

Tree newNode(int nodeNumber)
{
    Node* node = new Node;
    node->node = nodeNumber;
    return node;
}

void appendNode(Tree T , int parent , int child)
{
    if(T==NULL)
    {
        // (T->child).push_back(newNode(1));
        return;
    }
    vector <Node*> ar;
    ar.push_back(T);

    while(!ar.empty())
    {
        int size = ar.size();
        while(size!=0)
        {
            if( (*(ar.begin()))->node == parent)
            {
                (*(ar.begin()))->child.push_back(newNode(child));
                return;
            } 
            for(int i = 0 ; i < (*(ar.begin()))->child.size() ; i++)
                ar.push_back((*(ar.begin()))->child[i]);

            ar.erase(ar.begin());
            size--;
        }
    }
}


bool compareNumberOfChildren(Tree n1 , Tree n2)
{
    return((n1->child).size() > (n2->child).size());
}

void sort(Tree T)
{
    vector <Node*> ar;
    ar.push_back(T);
    while(!ar.empty())
    {
        int size = ar.size();
        sort(ar.begin() , ar.end() , compareNumberOfChildren);

        while(size!=0)
        {
            for(int i = 0 ; i < (*(ar.begin()))->child.size() ; i++)
                ar.push_back((*(ar.begin()))->child[i]);
            
            ar.erase(ar.begin());
            size--;
        }
    }
}




void printParentAndChild(Tree T)
{
    if(T==NULL)
        return;

    vector <Node*> ar;
    ar.push_back(T);
    while(!ar.empty())
    {
        int size = ar.size();
        while(size!=0)
        {
            if((*(ar.begin()))->child.size() != 0)
                cout << "Parent : " << (*(ar.begin()))->node << " Children : ";

            for(int i = 0 ; i < (*(ar.begin()))->child.size() ; i++)
            {
                cout << (*(ar.begin()))->child[i]->node << " ";
                ar.push_back((*(ar.begin()))->child[i]);
            }
            cout << endl;
            ar.erase(ar.begin());
            size--;
        }
    }
}






int main()
{
    Tree root = newNode(1);
    root->data = 4;

    appendNode(root , 1 , 7);
    appendNode(root , 1 , 2);
    appendNode(root , 2 , 3);
    appendNode(root , 3 , 4);
    appendNode(root , 3 , 5);
    appendNode(root , 3 , 6);
    sort(root);
    printParentAndChild(root);
    return 0;
}
