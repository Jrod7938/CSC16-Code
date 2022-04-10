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

void List::insert(DataType data, int pos){
    // if list is empty
    if(empty()){
        insert(data);
        return;
    }
    // if list is not empty
    // Traverse the list until we find pos - 1

    // init temp to begining of list
    Node *temp = first;
    int count = 0;

    while(temp!=0 && count<pos-1){
        // move temp to next element in the list
        temp = temp->next;
        
        // increment counter
        count++;
    }

    // Find the pred, create a new node
    Node *newNode = new Node;
    // set data to new data
    newNode->data = data;

    // set the next pointer to pred(temp) next
    newNode->next = temp->next;

    // Make pred(temp) point to new node
    temp->next = newNode;
    
}

bool List::insertAtEnd(DataType data){
    Node *newNode = new Node;
    Node *last = first;

    newNode->data = data;

    // might be NULL instead of first
    newNode->next = NULL;

    if(first == NULL){
        first = newNode;
        return true;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = newNode;
    return true;
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


bool List::deleteByPos(int pos){
    // if list is empty
    if(empty()){
        return false;
    }
    // if list is not empty
    // Traverse the list until we find pos - 1

    // init temp to begining of list
    Node *temp = first;
    int count = 0;

    while(temp!=0 && count<pos-1){
        // move temp to next element in the list
        temp = temp->next;
        
        // increment counter
        count++;
    }

    // When we foind pred, save delete ptr position
    Node *delPos = temp->next;
    // make temp point to next after delete pos
    temp->next = delPos->next; 
    // delete ptr at pos
    delete delPos;

    return true;
}

void List::freeMem(){
    // init temp to begining of list
    Node *temp = first;

    // while temp is not null
    while(temp!=0){
        Node *savePtr = temp;
        // modve temp to next element in the list
        temp = temp->next;

        // free memory for individual node
        delete savePtr;
    }
}