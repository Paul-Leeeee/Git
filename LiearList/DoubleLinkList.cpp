/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2024-02-08 07:37:59
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2024-02-08 13:43:52
 * @FilePath: \C++\Data Structure\LiearList\DoubleLinkList.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include "DoubleLinkList.h"
using namespace std;

DLinkList::DLinkList()
{
    head = &Head;
    tail = &Head;
    Head.data = 0;
    Head.next = nullptr;
    Head.pre = nullptr;
}

void DLinkList::HeadInsert(int data)
{
    DNode* node = (DNode*)malloc(sizeof(DNode));
    node->data = data;
    node->next = head->next;
    node->pre = head;
    head->next = node;
    if(tail == head)
    {
        tail = node;
    }
    head->data ++;
}

void DLinkList::TailInsert(int data)
{
    DNode* node = (DNode*)malloc(sizeof(DNode));
    DNode* current = head;
    node->data = data;
    node->next = nullptr;
    while(current->next != nullptr)
    {
        current = current->next;
    }
    node->pre = current;
    current->next = node;
    head->data ++;
}

bool DLinkList::Delete(int data)
{
    DNode* current = head;
    while(current!= nullptr)
    {
        if(current->data == data)
        {
            current->pre->next = current->next;
            if(current->next != nullptr)
            {
                current->next->pre = current->pre;
            }
            Head.data --;
            return true;
        }
        current = current->next;
    }
    return false;
}

void DLinkList::PrintList()
{
    DNode* current = head->next;
    while(current != nullptr)
    {
        cout << "data = " << current->data << "\n" << endl;
        current = current->next;
    }
}

 int DLinkList::GetNodesNum()
 {
    cout << Head.data << "Nodes" << endl;
    return Head.data;

 }