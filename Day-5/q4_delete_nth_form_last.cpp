/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        temp=head;
        Node* prev=NULL;
        if(count==K)
        {
            head=head->next;
            return head;
        }
        while(count-K)
        {
            prev=temp;
            temp=temp->next;
            count--;
        }
        
        prev->next=temp->next;
        delete(temp);
        return head;
}
