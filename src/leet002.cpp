#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// 单链表
// add two number
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x), next(nullptr){
    }
};

class Solution {
public:
    ListNode* addTowNumbers(ListNode* l1, ListNode* l2) {
        ListNode headNode(0), *p = &headNode;
        int carry = 0;
        while(l1 || l2 || carry){
            int sum = (l1 ? l1->val : 0)+(l2 ? l2->val : 0) + carry;
            carry = sum/10;
            p->next = new ListNode(sum%10);
            p = p->next;// important : p should keeps moving to next
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return headNode.next; // p->next; is Wrong!
    }
};


int main()
{
    Solution solution;
    ListNode* li = new ListNode();
}