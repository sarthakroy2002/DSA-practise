class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // If the given list l1 is empty then simply return list l2
        if(l1==NULL)
        {
            return l2;
        }
        // If the given list l2 is empty then simply return list l1
        if(l2==NULL)
        {
            return l1;
        }

        // Create a List l3 which will keep the sum of list l1 and l2
        ListNode* l3 = new ListNode(0);
        
        // then Add l1->val and l2->val in sum variable
        int sum = l1->val+l2->val;
        // Give recursive call by sending the next of both of the list l1 & l2
        l3->next = addTwoNumbers(l1->next, l2->next); 

        // then check if the value stored in the sum is smaller than 9 or not
        // if yes the store the value of sum in our new List l3's val
        if(sum <= 9)
        {
            l3->val = sum;
        }

        // If the above condition doesn't met then deduct 10 from sum
        // and store it in new List l3's val
        else
        {
            l3->val = sum - 10;

            // Create a temp Node which will keep the remainder
            // which will be added in next list's sum
            ListNode* temp = new ListNode(1);

            // Then we will again call the recursive function and send the temp as list l1
            // list l3's next as list l2
            // This will add the list remainder to the l3's next val
            l3->next = addTwoNumbers(temp, l3->next);
        }

        // Once all the process completes we will get our complete sum of l1 and l2 list in l3
        // we will simply return that list l3
        return l3;
    }
    
};
