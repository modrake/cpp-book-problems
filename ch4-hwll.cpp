#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

int size(Node *head) {
  if (head==nullptr) return 0;
  else return 1 + size(head->next);
}

/*int ith (Node *head, int i) {
  if ((i<1) || (head==nullptr)) return 0;
  else if (i==1) {
    cout << "% " << head->data << endl;
    return (head->data);
  }
  else {ith (head->next,i-1);
    cout << "*";}
} */

void ith (Node *head, int i) {
  Node *cur = head;
  if ((i<1) || (head == nullptr)) cout << "ERROR";
  while ((i>1) && (cur->next!=nullptr)) {
    cout << "*";
    cur = cur->next;
    i--;
  }
  cout << "# " << cur->data;
}

int main () {

  Node *head = new Node;
  head->data=0;
  head->next = new Node;
  head->next->data = 1;
  head->next->next = new Node;
  head->next->next->data = 2;
  head->next->next->next = nullptr;

  cout << size(head) << endl;
/*  cout << head->next->data << endl;
  cout << ith(head,3) << endl;
  int i = ith(head,3);
  cout << i << endl; */
  ith(head,2);
}
