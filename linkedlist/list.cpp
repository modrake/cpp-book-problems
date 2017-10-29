#include <iostream>

struct Node {
  int data;
  Node *next;
};

void addNode (Node *&head, int d) {
  Node *n = new Node;
  n->data = d;
  n->next = head;
  head = n;
}

void printList (Node *head) {
  while (head != nullptr) {
    std::cout << head->data << " ";
    head = head->next;
  }
  std::cout << std::endl;
}

void deleteValue (Node *&head, int v) {
  if (head == nullptr) return;
  // if head has value v
  if (head->data == v) {
    Node *cur = head;
    head = head->next;
    delete cur;
    return;
  }
  Node *cur = head;
  while (cur->next != nullptr) {
    if (cur->next->data == v) {
      Node *nx = cur->next;
      cur->next = cur->next->next;
      delete nx;
      return;
    }
    cur = cur->next;
  }
}

int main () {
  Node *head = new Node;
  head = new Node;
  head->data = 1;
  head->next = nullptr;

  // add some data
  addNode (head, 2);
  addNode (head, 3);
  addNode (head, 4);
  addNode (head, 5);
  printList (head);

  // delete some values
  deleteValue (head, 3);
  deleteValue (head, 5);

  printList (head);

  return 0;
}
