#include "List.h"

void List::insert(DataType data){
    // Create new node
    Node *newNodePtr = new Node;

    // Set new node data to data
    newNodePtr->data = data;
    
    // Set new node pointer to first 
    newNodePtr->next = first;

    // Set first to new node pointer
    first = newNodePtr;
}

void List::display(std::ostream &out){
    // init temp to begining of list
    Node *temp = first;
    // While temp is not null
    while(temp != 0){
        // Print temp data
        out << temp->data << std::endl;
        // Move temp to next element in the list
        temp = temp->next;
    }
}
