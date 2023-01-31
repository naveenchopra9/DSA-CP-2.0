// Implement Trie (Prefix Tree)

class Node{
    public:
        char data;
        unordered_map<char, Node*> m;
        bool isTerminal;

        Node(char d){
            data = d;
            isTerminal = false;
        }
};

class Trie {
    Node *root;
public:
    Trie() {
        root = new Node('\0');
    }
    
    void insert(string word) {
        Node *temp = root;
        for(auto &x : word){
            if(temp->m.count(x) == 0){
                Node *n = new Node(x);
                temp->m[x] = n;
            }
            temp = temp->m[x];
        }
        temp->isTerminal = true;
    }
    
    bool search(string word) {
        Node *temp = root;
        for(auto &x : word){
            if(temp->m.count(x) == 0){
                return false;
            }

            temp = temp->m[x];
        }

        return temp->isTerminal;
    }
    
    bool startsWith(string prefix) {
       Node *temp = root;
        for(auto &x : prefix){
            if(temp->m.count(x) == 0){
                return false;
            }

            temp = temp->m[x];
        }

        return true;
    }
};