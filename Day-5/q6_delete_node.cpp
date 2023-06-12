#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

// code by vijay myakalwad

void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
     node->data = node->next->data;

    LinkedListNode<int> *temp = node->next;

    node->next=node->next->next;

    delete temp;
}