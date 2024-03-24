class Solution {
public:

	ListNode* middleNode(ListNode *head)
	{
		ListNode *slow, *fast;
		slow = fast = head;
		while (fast && fast->next && fast->next->next)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}

	ListNode* reverse(ListNode *head)
	{
		ListNode *prev = NULL;
		ListNode *curr = head;
		while (curr)
		{
			ListNode *temp = curr->next;
			curr->next = prev;
			prev = curr;
			curr = temp;
		}
		return prev;
	}


	bool isPalindrome(ListNode* head) {
		if (!head)
			return true;
		// get the middle of the linked-list
		ListNode *middle = middleNode(head);
		// reverse the right half of linked
		ListNode *j = reverse(middle->next);
		ListNode *i = head;
		bool flag = true;
		// check for pallindromic
		while (j)
		{
			if (i->val != j->val)
			{
				flag = false;
				break;
			}
			i = i->next;
			j = j->next;
		}
		// revert the modified linkedList to original input LinkedList
		middle->next = reverse(middle->next);
		return flag;
	}
};

