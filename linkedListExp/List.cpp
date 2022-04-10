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
    // Create a new node
    Node *newNode = new Node;
    Node *temp = first;

    // Set newNode's data to data
    newNode->data = data;

    // Set new node's next to 0
    newNode->next = 0;

    // If linked list is empty, add newNode
    if(first == 0){
        first = newNode;
        return true;
    } // If linked list is not empty, go through linked list until the end
    while (temp->next != 0)
    {
        temp = temp->next;
    }

    // add newNode to the next of the last node
    temp->next = newNode;
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

bool List::deleteByValue(DataType data){
    // if list is empty
    if(empty()){
        return false;
    }
    // if list is not empty
    // Traverse the list until we find the specified data
    Node *temp = first;
    Node *prev = NULL;

    if(temp != NULL && temp->data == data){
        first = temp->next;
        delete temp;
        return true;
    } else {
        while(temp != NULL && temp->data != data){
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL){
            return false;
        }
        prev->next = temp->next;

        delete temp;
    }
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

