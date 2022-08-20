#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include "node.cpp"

using namespace std;


int main(int, char**) {

  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  ListNode* head = new ListNode(-1);
  head = createListNode(head, v);
  string s = printListNode(head);
  cout << s << endl;
  head = reverseListNode(head);
  s = printListNode(head);
  cout << s << endl;

  return 0;
}
