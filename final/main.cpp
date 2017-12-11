#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

void addItem (int i, Node *&head) {
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

bool removeNth (int n, Node *&head) {
  if (head == nullptr) return false;
  if (n == 0) {
    Node *temp = head;
    head = head->next;
    delete temp;
    return true;
  }
  Node *cur = head;
  while (n > 1) {
    if (cur != nullptr) {
      cur = cur->next;
    }
    else return false;
    n--;
  }
  Node *temp = cur->next;
  cur->next = cur->next->next;
  delete temp;
  return true;
}

void insertBeforeSmaller (Node *&head, int value) {

    if (head == nullptr) {
      Node *temp = new Node;
      temp->data = value;
      temp->next = nullptr;
      head = temp;
      return;
    }

    if (head->next == nullptr) {
      if (head->value < value) {
        Node *temp = new Node;
        temp->value = value;
        temp->next = head;
        head = temp;
        return;
      }
      else {
        Node *temp = new Node;
        temp->value = value;
        temp->next = nullptr;
        head->next = temp;
        return;
      }
    }

    Node *prev = head;
    Node *cur = head->next;
    if (prev->data < value) {
      Node *temp = new Node;
      temp->data = value;
      temp->next = head;
      head = temp;
      return;
    }
    while (cur != nullptr) {
      if (cur->data < value) {
        Node *temp = new Node;
        temp->data = value;
        temp->next = cur;
        prev->next = temp;
        return;
      }
      prev = prev->next;
      cur = cur->next;
    }
    Node *temp = new Node;
    temp->data = value;
    temp->next = nullptr;
    prev->next = temp;
}


int main() {

  Node *head = nullptr;
  addItem (2, head);
  addItem (7, head);
  addItem (5, head);
  addItem (0, head);
  addItem (1, head);


  removeNth (1, head);
  printList (head);

  return 0;
}
