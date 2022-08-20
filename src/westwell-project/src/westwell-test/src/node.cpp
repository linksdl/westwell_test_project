#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x): val(x), next(nullptr){}
};


ListNode* createListNode(ListNode* head, vector<int> v)
{
    ListNode* pHead = head;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        ListNode* q = new ListNode(*it);
        pHead->next = q;
        pHead = pHead->next;
    }
    return head;
}

//
ListNode* reverseListNode(ListNode* head)
{
    if(head == nullptr || head->next == nullptr)
    {
        return head;
    }

    ListNode* ans = reverseListNode(head->next);
    head->next->next = head;
    head->next = nullptr;
    return  ans;
}

// 
string printListNode(ListNode* head)
{
  string s;
  while(head != nullptr)
  {
    s = s + to_string(head->val) + " ";
    head = head->next;
  }

  return s;
}
