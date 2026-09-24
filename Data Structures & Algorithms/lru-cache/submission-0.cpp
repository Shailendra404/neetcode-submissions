class LRUCache {
public:
struct Node{
  int key;
  int val;
  Node*prev;
  Node*next;
  Node(int key,int val)
  {
    this->key=key;
    this->val=val;
    prev=NULL;
    next=NULL;
  } 
};
int capacity;
Node*head;
Node*tail;
unordered_map<int,Node*>mp;

    LRUCache(int capacity) {
        this->capacity=capacity;
         head=new Node(0,0);
         tail=new Node(0,0);
         head->next=tail;
         tail->prev=head;
    }
    void insert(int key,int value){
        Node*node=new Node(key,value);
            node->next=tail;
            node->prev=tail->prev;
            tail->prev->next=node;
            tail->prev=node;
            mp[key]=node;
    }
    void remove(Node*node)
    {
          node->next->prev=node->prev;
          node->prev->next=node->next;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end())
        return -1;
        Node*node=mp[key];
        int v=node->val;
        remove(node);
        insert(key,v);
        return v;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end())
        {
            Node*node=mp[key];
            node->val=value;
           
            remove(node);
            insert(key,value);
        }
        else{
            insert(key,value);
            if(mp.size()>capacity)
            {
                Node*lru=head->next;
                remove(lru);
                mp.erase(lru->key);
                delete lru;
            }
        }
    }
};
