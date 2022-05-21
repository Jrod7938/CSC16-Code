#include <iostream>
#include <queue>

using namespace std;

bool removePerson(queue<string> &c, string person){
    queue<string> refrence;
    int size = c.size();
    int count = 0;

    while(c.front()!=person && !c.empty()){
        refrence.push(c.front());
        c.pop();
        count++;
    }
    if(c.empty()){
        cout << "Element not found!" << endl;
        while(!refrence.empty()){
            c.push(refrence.front());
            refrence.pop();
        }
        return false;
    } else {
        c.pop();
        while(!refrence.empty()){
            c.push(refrence.front());
            refrence.pop();
        }
        int k = size - count - 1;
        while(k--){
            string p = c.front();
            c.pop();
            c.push(p);
        }
        return true;
    }
}

int main(){
    queue<string> people;

    string person = "";

    cout << "Enter a list of names, enter 'endOfList' to stop." << endl;
    while(person!="endOfList"){
        cin >> person;
        if(person!="endOfList"){
            people.push(person);
        } 
    }

    cout << "Printing FIFO order" << endl;
    while(!people.empty()){
        cout << people.front() << endl;
        people.pop();
    }

    // Removing JC from Queue
    queue<string> removeQueue;
    string p = "";
    cout << "Enter a list of names, enter 'endOfList' to stop." << endl;
    while(p!="endOfList"){
        cin >> p;
        if(p!="endOfList"){
            people.push(p);
        } 
    }

    cout << "Removing JC from queue" << endl;
    removePerson(people, "JC");

    while(!people.empty()){
        cout << people.front() << endl;
        people.pop();
    }

    return 0;
}