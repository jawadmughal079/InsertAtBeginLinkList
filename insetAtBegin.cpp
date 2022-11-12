#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class LinkList
{
    Node *head;

public:
    LinkList()
    {
        head = NULL;
    }
    void insertAtBegin(int data)
    {
        if (head == NULL)
        {
            /* code */
            cout << endl
                 << "LinkList is empty so we insert values at 0 index " << endl;
            Node *newNode = new Node(data);
            head = newNode;
            newNode->next = NULL;
        }
        else
        {

          // question is this why we not use the temp there becuase we want to chnage the postion of head that why 
            Node *newNode = new Node(data);
            newNode->next = head;
            head = newNode;
        
            cout << endl
                 << "Value Insert at the begning " << endl;
        }
    }

    void print()
    {
        if (head == NULL)
        {
            cout << "WE CAN NOT PRINT THE VALUES BECAUSE LINK LIST IS EMPTY ";
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                /* code */
                cout << endl;
                cout << temp->data;
                // cout << endl;
                temp = temp->next;
            }
        }
    }
};
int main()
{
    LinkList l;
    l.insertAtBegin(1);
    l.insertAtBegin(2);
    l.insertAtBegin(3);
    l.insertAtBegin(4);
    l.insertAtBegin(5);
    l.insertAtBegin(6);
    cout << "PRINT THE VALUES \n ";
    l.print();
}