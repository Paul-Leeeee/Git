#ifndef _DOUBLELINKLIST_H_
#define _DOUBLELINKLIST_H_
typedef struct DNode
{
    int data;
    DNode* next;
    DNode* pre;
}DNode;

class DLinkList
{
    public:
    DLinkList();
    void HeadInsert(int data);
    void TailInsert(int data);
    bool Delete(int data);
    void PrintList();
    int GetNodesNum();
    private:
    DNode* head = nullptr;
    DNode* tail = nullptr;
    DNode Head;
};
#endif
