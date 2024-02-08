#ifndef _SIGNLELIST_H_
#define _SIGNLELIST_H_

 typedef struct Node
 {
    Node* next;
    int data;
 }Node;

 class LinkList
 {
    public:
    void HeadInsert(int data);
    void TailInsert(int data);
    bool Delete(int data);
    void PrintLinkList();
    LinkList();
    unsigned int GetNodesnum();
    
    private:
    Node* head;
    Node* tail;
    Node Head;
    
 };
#endif