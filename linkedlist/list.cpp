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

int main() {
  Node *head = new Node;
  head->data = 1;
  head->next=nullptr;
  addItem(head,2);
  addItem(head,3);

  cout << countItems (head) << endl;
  printList(head);
  printList(head);
  return 0;
}
