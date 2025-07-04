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

ListNode *removeNthFromEnd(ListNode *head, int n)
{
  // Dummy node to simplify edge cases
  ListNode *dummy = new ListNode(0);
  dummy->next = head;

  ListNode *fast = dummy;
  cout<<fast->val<<" "<<fast->next<<endl;
  ListNode *slow = dummy;
  cout<<slow->val<<" "<<slow->next<<endl;

  // Move fast ahead by n + 1 steps to maintain a gap
  for (int i = 0; i <= n; i++)
  {
    fast = fast->next;
    cout<< i << " - "<<n<<endl;
    cout<<fast->val<< " "<<endl;
  }
  cout<<endl;

  // Move both pointers until fast reaches the end
  while (fast != nullptr)
  {
    cout<<"fast : " <<fast->val<<endl;
    fast = fast->next;
    cout<< "slow : "<<slow->val<<endl;
    slow = slow->next;
  }

  // slow->next is the node to remove
  ListNode *toDelete = slow->next;
  slow->next = slow->next->next;
  delete toDelete;

  ListNode *result = dummy->next;
  delete dummy;
  return result;
}

int main()
{
  ListNode *p1 = new ListNode(2);
  p1->next = new ListNode(4);
  p1->next->next = new ListNode(3);
  p1->next->next->next = new ListNode(1);
  p1->next->next->next->next = new ListNode(5);

  // while (p1 != NULL)
  // {
  //   cout << p1->val << " " << p1->next << endl;
  //   p1 = p1->next;
  // }

  cout << "sum linked list" << endl;

  removeNthFromEnd(p1, 1);

  return 0;
}