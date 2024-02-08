/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2024-02-08 10:04:31
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2024-02-08 13:44:32
 * @FilePath: \VC\C++\Data Structure\LiearList\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include "SignleList.h"
#include "DoubleLinkList.h"
using namespace std;
int main (void)
{
    LinkList List;
/*     List.GetNodesnum();
    List.HeadInsert(1);
    List.PrintLinkList();
    List.GetNodesnum();

    List.TailInsert(2);
    List.TailInsert(3);
     List.PrintLinkList();
    List.GetNodesnum();
    List.Delete(1);
     List.PrintLinkList();
    List.GetNodesnum(); */
    DLinkList L;
    L.HeadInsert(1);
    L.GetNodesNum();
    L.PrintList();
    L.TailInsert(2);
    L.PrintList();
    L.Delete(1);
    L.PrintList();
    L.Delete(2);
    L.PrintList();
    cout << "Hello" << endl;
    return 0;
}