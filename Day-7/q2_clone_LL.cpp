#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

// code by vijay myakalwad

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    LinkedListNode<int> *temp= head;
    unordered_map<LinkedListNode<int>*,int> mp;
    int ind=0;
    while(temp) {
        mp[temp]=ind;
        temp=temp->next;
        ind++;
    }

    temp=head;
    LinkedListNode<int>* head2=NULL;
    LinkedListNode<int>* tail=NULL;

    unordered_map<int,LinkedListNode<int>*> mp2;

    for(int i=0; i<ind; i++) {
        LinkedListNode<int>* dummy = new LinkedListNode<int>(temp->data);
        temp=temp->next;
        dummy->random=NULL;

        if(i==0) { 
            head2 = dummy;
            tail  = dummy;
           
        }
        else {
           
            tail->next=dummy;
            tail=dummy;
        }
        mp2[i] = dummy;
        
    }

    temp=head;
    tail=head2;
    while(temp) {
        if(temp->random==NULL) {
            temp=temp->next;
            tail=tail->next;
            continue;}
        int lk = mp[temp->random];
        tail->random=mp2[lk];
       // cout<<tail->data<<" "<<lk<<endl;
        temp=temp->next;
        tail=tail->next;
    }

    return head2;

}
