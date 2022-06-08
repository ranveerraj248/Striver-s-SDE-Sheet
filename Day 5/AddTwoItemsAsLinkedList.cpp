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

Node *addTwoNumbers(Node *head1, Node *head2)
{
    Node *start = new Node(1);
    Node *temp = start;
    int carry = 0;
    while(head1 != NULL or head2 != NULL or carry == 1){
        int sum = 0;
        if(head1 != NULL){
            sum += head1->data;
            head1 = head1->next;
        }
        
        if(head2 != NULL){
            sum += head2->data;
            head2 = head2->next;
        }
        
        sum += carry;
        carry = sum / 10;
        Node *newNode = new Node(sum % 10);
        temp->next =  newNode;
        temp = temp->next;
    }
    return start->next;
}