#include <gtest/gtest.h>
#include <string>
#include "node.cpp"


TEST(TestCase, test0)
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    ListNode* head = new ListNode(-1);
    head = createListNode(head, v);
    head = reverseListNode(head);
    string s = printListNode(head);

    EXPECT_EQ(printListNode(head), "3 2 1 -1");
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}