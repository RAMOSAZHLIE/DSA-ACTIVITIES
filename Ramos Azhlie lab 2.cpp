#include <iostream>

using namespace std;
typedef struct Node{
    string songNode;
    Node *link;
}Node;
Node *craeteNode(string data){
    Node *newNode = new Node;

    newNode->songName = data;
    newNode->link = NULL;

    return newNode;
}
void traverse(Node *head){
    Node *temp = new Node;
    temp = head;

    cout << "My Playlist" <<endl;
    while(temp != NULL){
        cout << temp->songName<< "->"<<endl;
        if(temp->link == NULL){
            cout << "NULL"<<endl;
        }

        temp = temp->link;
    }
}
Node *insertAtEnd(string data, Node *head){
    if(head == NULL){
        Node = newNode = craeteNode(data);
        head = newNode;
        cout << "A new node has been inserted at the end \n" << endl;
        return head;
    }
    Node *temp =new Node;
    temp = head;

    while(temp->link != NULL){
        temp = temp->link;
    }
    Node *newNode = createNode(data);
    temp->link = newNode;

    cout << "A new node has been inserted at the end \n" << endl;
    return head;
}
Node *insertAtBeginning(string data, Node *head){
    Node *newNode = createNode(data);
    newNode->link = head;

    head = newNode;

    cout << "A new node has been imsrted at the beginning \n" <<endl;

    return head;
}
string insertedAfter(string after, string data, Node *head){
    Node *temp =new Node;
    temp = head;

    while(temp->songName.compare(after) != 0){
        if(temp == NULL){
            return "No such song exist, please try again later.";
        }

        temp = temp->link;
    }
    Node *newNode = createNode(data);
newNode->link = temp->link;
temp->link = newNode;

return "An new node has been added after" +after + "\n";
}
string deleteAtEnd(Node *head){
    if(head == NULL){
    return "The linked list us empty \n";
    }
    
    if(head->link == NULL){
        delete head;
        return "The head has been deleted \n";
    }

    Node *temp =new Node;
    temp = head;

    while(temp->link->link != NULL){
        temp = temp->link;
    }

    temp->link = NULL;

    return "A node has been deleted at the end \n";
}
Node *deleteFromBegining(Node *head){
    if(head == NULL){
        cout << "The linked list is empty \n" <<endl;
        return NULL;
    }

    if(head->link == NULL){
        delete head;
    }

    head = head->link;

    cout <<"A node has been delete from the beginning \n" << endl;

    return head;
}
Node *deletefromGivenNode(string givenNode, Node *head){
    if(head == NULL){
        cout << "The linked list is empty \n" <<endl;
        return NULL;
    }

    if(head->songName.compare♦0givenNode) == 0{
    head = deleteFromBeginning(head);
    cout << "The Node" + givenNode + "has been deleted \n" << endl;
    return head;
    }

    Node *temp = new Node;
    Node *next = new Node;
    temp = head;
    next = temp->link;

    while(next->songName.compare(givenNode) !=0){
        if(temp == NULL){
            cout << "No such node exist. \n" <<endl;
            return head;
        }
        next = next->link;
        temp = temp->link;
    }

    temp->link = next->link;
    cout << "The Node" + givenNode + "has been deleted. \n" << endl;
    return head;
}
int main(){
    Node *head = createNode("Sanctuary by Joji");
    insertAtEnd("Eyes Closed by Edsheeran", head);
    insertAtEnd("Homosexual by Daniel Ceasar", head);
    insertAtEnd("Hung Up by Arthur Nery", head);
    head = insertAfter("Lullaby by Arthur Nery", head);
    head = insertAfter("The Only Exception by PARAMORE", head);
    head = insertAfter("ILYSB by LANY", head);
    head = insertAfter("Japanese Denim by Daniel Ceasar", head);

    traverse(head);

    string result = insertAfter("Eyes Closed by Edsheeran", "Bawat Sandali", head);
    cout <<result << endl;


    string result2 = insertAfter("Homosexual by Daniel Ceasar", "Paraluman", head);
    cout <<result2 << endl;


    string result3 = insertAfter("Hung Up by Arthur nery", "Isa Lang", head);
    cout <<result3 << endl;

    stringEND deleteAtEnd(head);
    cout << END <<endl;
    head = deleteFromBeginning(head);
    head = deleteFromGivenNode("Homosexual by Daniel Ceasar", head);
    traverse(head);

    return 0;
}
