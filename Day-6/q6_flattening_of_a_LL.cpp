/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

#include<bits/stdc++.h>
using namespace std;

// code by vijay myakalwad

Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	Node* temp=head;
	Node* temp2=head->next;
	set<int> set1;
	while(temp) {
		temp->next=NULL;
		while(temp->child!=NULL) {
			set1.insert(temp->data);
			temp=temp->child;
		}
		temp->child=temp2;
		set1.insert(temp->data);
		if(temp2)
		temp2=temp2->next;
		temp=temp->child;
	}
    temp=head;
	for(auto it : set1) {
         temp->data=it;
		 temp=temp->child;
	}
	return head;
}
