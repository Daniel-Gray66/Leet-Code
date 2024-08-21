
#include <iostream>
#include <string>
using namespace std;
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
  class Solution {
  public:
      ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

          string temp1 = "";
          string temp2 = "";

          // Getting the number from the list (still in reverse order)
          while (l1 != nullptr) {
              temp1 += to_string(l1->val);
              l1 = l1->next;
          }

          while (l2 != nullptr) {
              temp2 += to_string(l2->val);
              l2 = l2->next;
          }

          // Putting the in the correct order
          string list1(temp1.rbegin(), temp1.rend());
          string list2(temp2.rbegin(), temp2.rend());

          // Doing the addition
          int answer = stoi(list1) + stoi(list2);
          string temp3 = to_string(answer);

          // Putting the List back into reverse order
          string list3(temp3.rbegin(), temp3.rend());

          // The list that we are going to return
          ListNode* l3 = new ListNode(list3[0] - '0');
          ListNode* cur = l3; // Helper pointer

          for (int i = 1; i < list3.length(); i++) {
              ListNode* node = new ListNode(list3[i] - '0');
              cur->next = node;
              cur = cur->next;
          }

          // Print out the solution
          cur = l3;
          while (cur != nullptr) {
              cout << cur->val;
              cur = cur->next;
          }
          cout << endl;

          return l3;
      }
  };
