#include <bits/stdc++.h> 

using namespace std; 

  
/* structure for a node */

class Node { 

public: 

    int data; 

    Node* next; 
}; 

  
/* Function to insert a node at the beginning of  
a Circular linked list */

void push(Node** head_ref, int data) 
{ 

    // Create a new node and make head as next 

    // of it. 

    Node* ptr1 = new Node(); 

    ptr1->data = data; 

    ptr1->next = *head_ref; 

    next of last node */

    if (*head_ref != NULL)  

    { 


        Node* temp = *head_ref; 

        while (temp->next != *head_ref) 

            temp = temp->next; 

        temp->next = ptr1; 

    } 

    else

        ptr1->next = ptr1; /*For the first node */

  

    *head_ref = ptr1; 
} 


void printList(Node* head) 
{ 

    Node* temp = head; 

    if (head != NULL) { 

        do { 

            cout << temp->data << " "; 

            temp = temp->next; 

        } while (temp != head); 

    } 

  

    cout << endl; 
} 

void deleteNode(Node** head, int key)  
{ 

      

    // If linked list is empty 

    if (*head == NULL) 

        return; 

          

    // If the list contains only a single node 

    if((*head)->data==key && (*head)->next==*head) 

    { 

        free(*head); 

        *head=NULL; 

        return; 

    } 

      

    Node *last=*head,*d; 

      

    // If head is to be deleted 

    if((*head)->data==key)  

    { 

        while(last->next!=*head) 

            last=last->next; 

        last->next=(*head)->next; 

        free(*head); 

        *head=last->next; 

      return; 

    } 

    while(last->next!=*head&&last->next->data!=key)  

    { 

        last=last->next; 

    } 

    if(last->next->data==key)  

    { 

        d=last->next; 

        last->next=d->next; 

        free(d); 

    } 

    else

        cout<<"no such keyfound"; 

    } 

  
/* Driver code */

int main() 
{ 

    /* Initialize lists as empty */

    Node* head = NULL; 

  

    /* Created linked list will be 2->5->7->8->10 */

    push(&head, 2); 

    push(&head, 5); 

    push(&head, 7); 

    push(&head, 8); 

    push(&head, 10); 

  

    cout << "List Before Deletion: "; 

    printList(head); 

  

    deleteNode(&head, 7); 

  

    cout << "List After Deletion: "; 

    printList(head); 

  

    return 0; 
}
