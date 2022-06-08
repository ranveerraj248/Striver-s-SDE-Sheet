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

Node *findMiddle(Node *head) {
    Node *rabbit = head;
    Node *tortoise = head;
    while(rabbit != NULL and rabbit->next != NULL){
        tortoise = tortoise->next;
        rabbit = rabbit->next->next;
    }
    return tortoise;
}