#include "Singly.hpp"
using namespace std;


int main()
{
	// Testing the first case of the code 
	ListNode* a = new ListNode(2);
	ListNode* b = new ListNode(4);
	ListNode* c = new ListNode(3);
	a->next = b;
	b->next = c;

	ListNode* A = new ListNode(5);
	ListNode* B = new ListNode(6);
	ListNode* C = new ListNode(4);

	A->next = B;
	B->next = C;


	string merlin = "Hellow World"; 
	cout << merlin << endl;
	string boogie(merlin.rbegin(), merlin.rend());
	cout << boogie << endl;



	//printing out the numbers just to make sure

	ListNode* Cur = a; 
	while (Cur != nullptr)
	{
		cout << Cur->val;
		Cur = Cur->next;
	}
	cout << endl;
	Cur = A;
	while (Cur != nullptr)
	{
		cout << Cur->val; 
		Cur = Cur->next;
	}

	Solution answer;
	cout << endl;
	ListNode* Sol = answer.addTwoNumbers(a, A);
	ListNode* temp = Cur;

	//deleting the allocated memory 
	Cur = A;
	while (Cur != nullptr) {
		temp = Cur; 
		Cur = Cur->next;      
		delete temp;          
	}
	A = nullptr;

	// deleting the allocated memory
	Cur = a;
	while (Cur != nullptr) {
		temp = Cur;
		Cur = Cur->next;
		delete temp;
	}
	a = nullptr;

	//deleting the allocated memory 

	Cur = Sol;
	while (Cur != nullptr)
	{
		temp = Cur;
		Cur = Cur->next;
		delete temp; 
	}

	Sol = nullptr;



	return 0;
}

