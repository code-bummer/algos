#include<bits/stdc++.h>
using namespace std;

class ListNode {
public:
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* insert() {
  int bin[] = {1,0,1,1};
  size_t n = sizeof(bin)/sizeof(int);

  ListNode* head = new ListNode(bin[0]);
  ListNode* l = head;

  for (int i=1; i<n; ++i) {
    ListNode* temp = new ListNode(bin[i]);
    l->next = temp;
    l = temp;
  }

  return head;
}

int getDecimalValue(ListNode* head) {
        int ans = 0;

        while(head != nullptr) {
            ans = (ans<<1) | head->val;
            head = head->next;
        }

        return ans;
}

int main() {

  ListNode* head = insert();
  cout<<getDecimalValue(head);
  return 0;
}
