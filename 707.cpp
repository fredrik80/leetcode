# 707. Design Linked List
# Medium

class Node{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int value = 0) : val(value), prev(nullptr), next(nullptr) {}
};

class MyLinkedList {
private:
    Node *dummy;
    Node *tail;

public:
    MyLinkedList() {
        dummy = new Node();
        tail = dummy;
    }


    int get(int index) {
        Node *curr = dummy->next;
        for (int i=0; curr != nullptr && i < index; curr = curr->next, i++){
        }
        if (curr != nullptr) {
            return curr->val;
        } else {
            return -1;
        }
    }
    
    void addAtHead(int val) {
        Node *new_node = new Node(val);
        new_node->next = dummy->next;
        if (dummy->next != nullptr) dummy->next->prev = new_node;


        dummy->next = new_node;
        new_node->prev = dummy;

        if (new_node->next == nullptr) tail = new_node;

    }
    
    void addAtTail(int val) {
        Node *new_node = new Node(val);
        new_node->prev = tail;
        tail->next = new_node;

        if (dummy->next == nullptr) dummy->next = new_node;

        tail = new_node;
        
    }
    
    void addAtIndex(int index, int val) {
        Node *new_node = new Node(val);
        Node *curr = dummy;

        for(int i=0;curr != nullptr && i < index; curr=curr->next, i++) {}

        if (curr == nullptr) return;
        
        new_node->next = curr->next;
        if (curr->next != nullptr) curr->next->prev = new_node;
        curr->next = new_node;
        new_node->prev = curr;

        if (new_node->next == nullptr) tail = new_node;

    }
    
    void deleteAtIndex(int index) {
        Node *curr = dummy;
        for (int i=0; curr != nullptr && i < index; curr=curr->next, i++) {}

        if (curr == nullptr || curr->next == nullptr) return;

        Node *nodeToDelete = curr->next;
        curr->next = nodeToDelete->next;

        if (curr->next == nullptr) {
            tail = curr;
        } else {
            curr->next->prev = curr;
        }

        delete nodeToDelete;



    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
