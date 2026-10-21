#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){
  smaller = nullptr;
  larger = nullptr;

  // Empty list
  if (head == nullptr){
    return;
  }
  Node* temp = head;
  head = head->next;
  temp->next = nullptr;

  // Recursive Call
  llpivot(head, smaller, larger, pivot);

  if (temp->val <= pivot){
    temp->next = smaller;
    smaller = temp;
  }
  else{
    temp->next = larger;
    larger = temp;
  }
}

