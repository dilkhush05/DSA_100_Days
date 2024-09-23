/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

// leetcode //question number :-138


class Solution {
private:
    void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* newNode = new Node(d);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;

        // Step 1: Create a clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node* temp = head;
        while (temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }

        // Step 2: Insert nodes of the clone list in between the original list nodes
        Node* originalNode = head;
        Node* cloneNode = cloneHead;

        while (originalNode != NULL && cloneNode != NULL) {
            Node* next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;

            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }

        // Step 3: Copy the random pointers
        originalNode = head;
        while (originalNode != NULL) {
            if (originalNode->next != NULL) { // Ensure the clone node is accessed correctly
                if (originalNode->random != NULL) {
                    originalNode->next->random = originalNode->random->next;
                } else {
                    originalNode->next->random = NULL;
                }
            }
            originalNode = originalNode->next->next;
        }

        // Step 4: Separate the clone list from the original list
        originalNode = head;
        cloneNode = cloneHead;

        while (originalNode != NULL && cloneNode != NULL) {
            originalNode->next = originalNode->next != NULL ? originalNode->next->next : NULL;
            cloneNode->next = cloneNode->next != NULL ? cloneNode->next->next : NULL;
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }

        // Step 5: Return the head of the cloned list
        return cloneHead;
    }
};