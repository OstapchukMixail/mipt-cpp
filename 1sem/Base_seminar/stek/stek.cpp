#include <iostream>

using namespace std;

struct Node ///����
{
    int info;
    Node *next;
};

struct Stack
{
    Node *head;
};

void initStack (Stack *s) ///�������������� *head
{
    s->head = NULL;
}

bool isempty (const Stack *s) ///���������, �� ��� ��������� head
{
    return s->head == NULL;
}

void push (int x, Stack *s) ///���������� �������� � ����
{
    Node *n = new Node;
    n->info = x;
    n->next = s->head;
    s->head = n;
}

void pop (Stack *s)
{
    if(!isempty(s)){
        Node *k = s->head->next;
        delete s->head;
        s->head = k;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
