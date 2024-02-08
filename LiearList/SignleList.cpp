/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2024-02-08 08:55:14
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2024-02-08 10:59:39
 * @FilePath: \C++\Data Structure\LiearList\SignleList.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include "SignleList.h"
using namespace std;

 /**
  * 链表初始化
  * @return {*}
  */
 LinkList::LinkList()
 {
    head = &Head;
    tail = &Head;
    Head.data = 0;
    Head.next = nullptr;
 }

 /**
  * @description: 链表头部添加一个节点
  * @param {int} data 需要添加的节点数据
  * @return {*}
  */
 void LinkList::HeadInsert(int data)
 {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = head->next;
    head->next = node;
    if(tail == head)
    {
      tail = node;
    }
    Head.data ++;
 }

/**
 * @description: 链表尾部插入一个新节点
 * @param {int} data 需要添加的节点数据
 * @return {*}
 */
void LinkList::TailInsert(int data)
{
   Node* node = (Node*)malloc(sizeof(Node));
   node->data = data;
   node->next = nullptr;
   tail->next = node;
   tail = node;
   Head.data++;
}

/**
 * @description: 删除指定节点
 * @param {int} data
 * @return {bool} 删除是否成功
 */
bool LinkList::Delete(int data)
{
   Node* current = head->next;
   Node* pre = head;
   while(current->next != nullptr)
   {
      if(current->data == data)
      {
         pre->next = current ->next;
         free(current);
         current = nullptr;
         Head.data --;
         return true;
      }
      pre = pre->next;
      current = current->next;
   }
   return false;
}

/**
 * @description: 输出链表
 * @return {*}
 */
void LinkList::PrintLinkList()
{
   Node* current = head ->next;
   while(current->next != nullptr)
   {
      cout<< "data = "<< current->data << "\n" << endl;
      current = current->next;
   }
   cout << "data = " << current->data << endl;
}

/**
 * @description: 获取当前节点数目
 * @return {*}
 */
unsigned int LinkList::GetNodesnum()
{
   cout << "num of Nodes = " << Head.data << endl;
   return Head.data;
}

