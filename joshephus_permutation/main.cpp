#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *createNode(int data)
{
    Node * newNode = new Node();
    newNode->data = data;
    newNode->next = newNode;
    return newNode;
}


vector<int> josephus(vector<int> items, int k) {
    vector<int> result;
    int siz = items.size();
    if(!items.empty())
    {
        Node *head = createNode(items[0]);
        Node *last = head;
        for(int i = 1; i < siz; i++)
        {
        last->next = createNode(items[i]);
        last = last->next;
        }

        last->next = head;
        Node *del = head;
        Node *prev = NULL;

        if(k > 1)
        {
            while(del->next != del)
            {
                int ct = 1;
                while(ct != k)
                {
                    prev = del;
                    del = del->next;
                    ct++;
                }

                result.push_back(del->data);
                prev->next = del->next;
                free(del);
                del = prev->next;
            }

            result.push_back(del->data);
        }
        else
        {

        result = items;

        }
    }

    return result;
}

int main()
{

    vector<int> res = josephus({21, 25, 45, 35}, 3);
    for(auto n : res)
    {
        cout << n << " ";
    }
    return 0;
}
