#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

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

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) {
            return NULL;
        }

        unordered_map<Node*, Node*> m;

        // Step 1: Copy the nodes and next pointers
        Node* newHead = new Node(head->val);
        Node* oldTemp = head->next;
        Node* newTemp = newHead;

        m[head] = newHead;

        while (oldTemp != NULL) {
            Node* copyNode = new Node(oldTemp->val);
            m[oldTemp] = copyNode;

            newTemp->next = copyNode;
            newTemp = newTemp->next;
            oldTemp = oldTemp->next;
        }

        // Step 2: Fix the random connections
        oldTemp = head;
        newTemp = newHead;

        while (oldTemp != NULL) {
            newTemp->random = (oldTemp->random != NULL) ? m[oldTemp->random] : NULL;
            newTemp = newTemp->next;
            oldTemp = oldTemp->next;
        }

        return newHead;
    }
};

// Helper function to build a list with random pointers from a vector input
Node* buildList(const vector<pair<int, int>>& input) {
    if (input.empty()) return NULL;

    vector<Node*> nodes;
    // First pass: Create all nodes
    for (const auto& p : input) {
        nodes.push_back(new Node(p.first));
    }

    // Second pass: Link next and random pointers
    for (size_t i = 0; i < input.size(); i++) {
        if (i < input.size() - 1) {
            nodes[i]->next = nodes[i + 1];
        }
        
        int randomIdx = input[i].second;
        if (randomIdx != -1) { // Using -1 to represent 'null'
            nodes[i]->random = nodes[randomIdx];
        }
    }

    return nodes[0];
}

// Helper function to print the list in the testcase format
void printList(Node* head) {
    if (head == NULL) {
        cout << "[]" << endl;
        return;
    }

    // Map each node to its 0-indexed position to print the random index properly
    unordered_map<Node*, int> indexMap;
    Node* temp = head;
    int idx = 0;
    while (temp != NULL) {
        indexMap[temp] = idx++;
        temp = temp->next;
    }

    cout << "[";
    temp = head;
    while (temp != NULL) {
        cout << "[" << temp->val << ", ";
        if (temp->random == NULL) {
            cout << "null";
        } else {
            cout << indexMap[temp->random];
        }
        cout << "]";
        
        if (temp->next != NULL) cout << ", ";
        temp = temp->next;
    }
    cout << "]" << endl;
}

int main() {
    // Representing LeetCode Example 1: [[7,null],[13,0],[11,4],[10,2],[1,0]]
    // We use -1 where the random pointer is null
    vector<pair<int, int>> testCase = {
        {7, -1},
        {13, 0},
        {11, 4},
        {10, 2},
        {1, 0}
    };

    cout << "Creating original linked list..." << endl;
    Node* head = buildList(testCase);
    
    cout << "Original List Display: ";
    printList(head);

    Solution solver;
    cout << "\nCloning the list using copyRandomList()..." << endl;
    Node* clonedHead = solver.copyRandomList(head);
    

    cout << "Cloned List Output:   ";
    printList(clonedHead);

    return 0;
}