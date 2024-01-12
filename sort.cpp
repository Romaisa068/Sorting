#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next ;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void sort(Node* &head){
    int zero = 0;
    int one = 0;
    int two = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0)
            zero++;
        else if(temp->data == 1)
            one++;
        else if(temp->data == 2)
            two++;
    
    temp = temp->next;
    }

    temp = head;
    while(temp != NULL){
        if(zero != 0){
            temp->data = 0;
            zero--;
        }
        else if(one != 0){
            temp->data = 1;
            one--;
        }
        else if(two != 0){
            temp->data = 2;
            two--;
        }
        temp = temp->next;
    }

    //return head;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

main(){
    Node* node1 = new Node(1);
    Node* head = node1;

    Node* node2 = new Node(0);
    node1->next = node2;

    Node* node3 = new Node(2);
    node2->next = node3;

    Node* node4 = new Node(1);
    node3->next = node4;

    Node* node5 = new Node(2);
    node4->next = node5;

    Node* node6 = new Node(0);
    node5->next = node6;

    sort(head);
    print(head);

}