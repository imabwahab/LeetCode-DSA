#include <iostream>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
  ListNode* dummy = new ListNode(0); // Dummy head
  ListNode *current = dummy;
  int carry = 0;

  while (l1 != nullptr || l2 != nullptr || carry != 0)
  {
    int sum = carry;

    if (l1 != nullptr)
    {
      sum += l1->val;
      l1 = l1->next;
    }

    if (l2 != nullptr)
    {
      sum += l2->val;
      l2 = l2->next;
    }

    carry = sum / 10;
    current->next = new ListNode(sum % 10); // Create new node for result
    current = current->next;
  }

  return dummy->next; // Skip dummy node
}

int main()
{
  ListNode *p1 = new ListNode(2);
  p1->next = new ListNode(4);
  p1->next->next = new ListNode(3);

  ListNode *p2 = new ListNode(5);
  p2->next = new ListNode(6);
  p2->next->next = new ListNode(4);

  // while (p1 != NULL)
  // {
  //   cout << p1->val << " " << p1->next << endl;
  //   p1 = p1->next;
  // }

  // while (p2 != NULL)
  // {
  //   cout << p2->val << " " << p2->next << endl;
  //   p2 = p2->next;
  // }

  cout<<"sum linked list"<<endl;

  ListNode *p = addTwoNumbers(p1, p2);
  while (p!= NULL)
  {
    cout<<"while loop entered"<<endl;
    cout<<p->val<<" -> ";
    p= p->next;
  }
  
  return 0;
}