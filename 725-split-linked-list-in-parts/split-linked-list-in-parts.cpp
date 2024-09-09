class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> result(k, nullptr); // Initialize result vector with k null pointers
        if (!head) return result; // If the list is empty, return k null parts

        // Step 1: Calculate the length of the linked list
        int listSize = 0;
        ListNode* temp = head;
        while (temp) {
            listSize++;
            temp = temp->next;
        }

        // Step 2: Determine the size of each part
        int baseSize = listSize / k;      // Minimum size of each part
        int extraNodes = listSize % k;    // Extra nodes to distribute among the first parts

        ListNode* curr = head;
        ListNode* prev = nullptr;

        for (int i = 0; i < k && curr; ++i) {
            result[i] = curr;  // Start of the current part
            int partSize = baseSize + (extraNodes > 0 ? 1 : 0); // Add an extra node if needed
            extraNodes--;

            // Move `partSize` steps forward in the list
            for (int j = 0; j < partSize; ++j) {
                prev = curr;
                curr = curr->next;
            }

            // Break the list after the current part
            if (prev) prev->next = nullptr;
        }

        return result;
    }
};
