#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL) return second;
    if(second==NULL) return first;
    
    Node<int>* head=NULL;
    Node<int>* temp=first,*temp2=second;
    if(first->data < second->data) {
        head=first;
       
        //temp=temp->next;
    }
    else {
        head=second;
        
       // temp2=temp2->next;
    }
    Node<int>*path=NULL;
     while(temp!=NULL && temp2!=NULL) {
         if(temp->data < temp2->data) {
            if(path==NULL) path=temp;
            else { path->next=temp;
            path=path->next;
}
            temp=temp->next;
         }
         else {
             if(path==NULL) path=temp2;
             else {path->next=temp2;
             path=path->next;
}
             temp2=temp2->next;
         }
         
     }
     if(temp==NULL) {
         path->next=temp2;

     }
     else path->next=temp;
    return head;
}
