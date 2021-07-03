#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    vector <Node*> child;
};

typedef Node* Tree;


Tree newNode(int root_data)
{
    Node* newNode = new Node();
    newNode->data = root_data;
    return newNode;
}


void printTree(Tree root)
{
        if(root==NULL)
            return;

        vector <Node*> ar;
        ar.push_back(root);

        while(!ar.empty())
        {
            int size = ar.size();

            while(size!=0)
            {
                cout<< (*(ar.begin()))->data << " ";
                for(int i = 0 ; i < (*(ar.begin()))->child.size() ; i++)
                {
                    ar.push_back((*(ar.begin())) -> child[i]);
                }
                cout << "       ";
                ar.erase(ar.begin());
                size--;
            }
            cout << endl;
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
                cout << "Parent : " << (*(ar.begin()))->data << " Children : ";

            for(int i = 0 ; i < (*(ar.begin()))->child.size() ; i++)
            {
                cout << (*(ar.begin()))->child[i]->data << " ";
                ar.push_back((*(ar.begin()))->child[i]);
            }
            cout << endl;
            ar.erase(ar.begin());
            size--;
        }
    }
}

void appendNode(Tree T , int pos , int data)
{
    if(pos == 1)
    {
        (T->child).push_back(newNode(data));
        return;
    }

    vector <Node*> ar;
    ar.push_back(T);

    while(!ar.empty())
    {   
        int size = ar.size();
        while(size!=0)
        {
            if((*(ar.begin()))->data == pos)
                {
                    ((*(ar.begin()))->child).push_back(newNode(data));
                    return;
                }
            else
            {
                for(int i = 0; i < (*(ar.begin()))->child.size() ; i++)
                {
                    ar.push_back(((*ar.begin())->child)[i]);
                }
            }
            ar.erase(ar.begin());
            size--;
        }
    }
}


// int main()
// {
//     Tree root = newNode(10);
//     Tree root2 = newNode(100);

//     (root->child).push_back(newNode(20));
//     (root->child).push_back(newNode(40));
//     (root->child[0]->child).push_back(newNode(30));
//     (root->child[1]->child).push_back(newNode(50));
//     (root->child[0]->child).push_back(newNode(60));
//     (root->child[0]->child).push_back(newNode(70));

//     printTree(root);

    
//     return 0;
// } 