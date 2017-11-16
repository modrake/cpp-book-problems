#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};

void addItem (Node *&head, int i) {
    Node *n = new Node;
    n->data = i;
    n->next = head;
    head = n;
}

void printList (Node *head) {
  if (head == nullptr) return;
  else {
    cout << head->data << endl;
    printList (head->next);
  }
}


int countItems (Node *head) {
  if (head == nullptr) return 0;
  else return (1 + countItems(head->next));
}

void flipEveryOther (Node *&head) {
    Node *cur = head;
    if ((head != nullptr) && (head->next != nullptr)) {
      Node *b = cur->next;
      cur->next = b->next;
      b->next = cur;
      head = b;
      delete b;
    }
    while ((cur->next != nullptr) && (cur->next->next != nullptr)) {
      std::cout << "* " << cur->data;
      Node *a = cur->next;
      Node *b = cur->next->next;
      cur->next = b;
      a->next = b->next;
      b->next = a;
      cur = cur->next->next;
      //delete a;
      //delete b;
      std::cout << "& " <<std::endl;
    }
}

void flipEveryOtherR (Node *&head) {
  if ((head==nullptr) || (head->next == nullptr)) return;
  else{
    Node *temp = new Node;
    temp = head;
    head = head->next;
    temp->next = head->next;
    head->next = temp;
    flipEveryOtherR (head->next->next);
    delete temp;
  }
}

int main() {
  Node *head = new Node;
  head->data = 1;
  head->next=nullptr;
  addItem(head,2);
  addItem(head,3);
  addItem(head,4);
  addItem(head,5);
  addItem(head,6);
  addItem(head,7);
  //addItem(head,8);

  flipEveryOther (head);
  printList(head);
  return 0;
}
