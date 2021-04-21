#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;
struct linkedList
{
	int data;
	linkedList* next;
};
typedef struct linkedList* node;

node createNode(int data);
node init();
node addHead(node head, int x);
node addLast(node head, int x);
node input();
void printList(node head);
node delHead(node head);
node delLast(node head);
node del_pos(node head, int pos);
int length(node head);
node del_val(node head, int n);
int Search(node head, int x);