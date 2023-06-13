#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

// code by vijay myakalwad

Node * reverse(Node* last, Node* curr, int n) {
	   Node* nex=curr->next;
	   Node* prev=last;
	   Node* temp=curr;
	   while(n--) {
		   curr->next=prev;
		   prev=curr;
		   curr=nex;
		   if(nex)
		   nex=nex->next;
		   else break;
	   }
	   last->next=prev;
	    temp->next=NULL;
	   return temp;


}
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	  Node* head1= new Node(0);
	  head1->next=head;
	  Node* last=head1;
	  Node* temp=head;
	  for(int i=0; i<n; i++) {
		  int ind=b[i];
		  if(ind==0) continue;
		   Node* curr=temp;
		   if(temp==NULL) break;
		   
		   while(ind--) {
			   if(temp)
			   temp=temp->next;
		   }
          last=reverse(last,curr,b[i]);
	  }
	  if(temp!=NULL) last->next=temp;
	  return head1->next;
}