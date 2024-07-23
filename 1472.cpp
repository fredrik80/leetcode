# 1472. Design Browser History
# Medium

class HistoryNode {
public:
    string url;
    HistoryNode* next;
    HistoryNode* prev;

    HistoryNode(string homepage) : url(homepage), next(nullptr), prev(nullptr) {}
};

class BrowserHistory {
public:
    
    HistoryNode* dummy;
    HistoryNode* tail;
    HistoryNode *current;

    BrowserHistory(string homepage) {
        dummy = new HistoryNode("");
        tail = new HistoryNode(homepage);
        dummy->next = tail;
        tail->prev = dummy;   
        current = tail;  
    }
    
    void visit(string url) {
        HistoryNode* new_node = new HistoryNode(url);
        HistoryNode* temp;
        HistoryNode* toDelete;
        
        // Deleting forward history
        if (current != tail) {
            temp = current->next;
            while (temp != nullptr) {
                toDelete = temp;
                temp = temp->next;
                delete toDelete;                                
            }
            current->next = nullptr;
        }

        new_node->prev = current;
        current->next = new_node;
        tail = new_node;
        current = new_node;
    }
    
    string back(int steps) {
        int counter = 0;

        while (counter < steps && current->prev != dummy){
            current = current->prev;
            counter++;
        }

        return current->url;

    }
    
    string forward(int steps) {
        int counter = 0;

        while (counter < steps && current != tail) {
            current = current->next;
            counter++;
        }

        return current->url;
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
