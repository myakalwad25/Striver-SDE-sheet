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

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    stack<int> stk;
    LinkedListNode<int>* temp=head;
    while(temp!=NULL) {
        stk.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL) {
        if(temp->data!=stk.top()) {
            return false;
        }
        temp=temp->next;
        stk.pop();
    }
    return true;

}