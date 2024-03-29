#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void insertathead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void insertattail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    temp->next = NULL;
}
void insertatpos(node *&tail, node *&head, int pos, int d)
{
    node *temp = head;
    int cnt = 1;
    if (pos == 1)
    {
        insertathead(head, d);
        return;
    }
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }
    node *insertarposs = new node(d);
    insertarposs->next = temp->next;
    temp->next = insertarposs;
}
void deletenode(int pos, node *&head, node *&tail)
{
    if (pos == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *curr = head;
        node *prev = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    insertattail(tail, 75);
    insertathead(head, 20);
    insertathead(head, 30);
    insertatpos(tail, head, 3, 65);
    deletenode(5, head, tail);
    print(head);
    cout << head->data;
    cout << tail->data;
    return 0;
}