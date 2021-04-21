#include "Header.h"
node createNode(int data)
{
	node tmp = new linkedList;
	tmp->data = data;
	tmp->next = NULL;
	return tmp;
}
node init()
{
	node head;
	head = NULL;
	return head;
}
node addHead(node head, int x)
{
	node tmp = createNode(x);
	if (head == NULL)
		head = tmp;
	else
	{
		tmp->next = head;
		head = tmp;
	}
	return head;
}
node addLast(node head, int x)
{
	node tmp = createNode(x);
	node p;
	if (head == NULL)
		head = addHead(head, x);
	else
	{
		p = head;
		while (p->next != NULL)
			p = p->next;
		p->next = tmp;
	}
	return head;
}
node input()
{
	int x;
	node head = init();
	ifstream fi;
	fi.open("input.txt");
	while (fi >> x)
		head = addLast(head, x);
	fi.close();
	return head;
}
void printList(node head)
{
	for (node p = head; p != NULL; p = p->next)
		cout << p->data << "\t";
}
node delHead(node head)
{
	if (head == NULL)
		cout << "Khong co gi de xoa !";
	else
		head = head->next;
	return head;
}
node delLast(node head)
{
	if (head == NULL)
		head = delHead(head);
	else
	{
		node p = head;
		while (p->next->next != NULL)
			p = p->next;
		p->next = p->next->next;
	}
	return head;
}
node del_pos(node head, int pos)
{
	if (head == NULL || pos == 0 || head->next == NULL)
		head = delHead(head);
	else
	{
		int k = 0;
		node p = head;
		while (k != pos && p->next->next != NULL)
		{
			k++;
			p = p->next;
		}
		if (k != pos)
			head = delLast(head);
		else
			p->next = p->next->next;
		return head;
	}
}
int length(node head)
{
	int count = 0;
	for (node p = head; p != NULL; p = p->next)
		count++;
	return count;
}
int Search(node head, int x)
{
	int pos = 0;
	for (node p = head; p != NULL; p = p->next)
	{
		if (p->data == x)
			return pos;
		pos++;
	}
	return -1;
}
node del_val(node head, int n)
{
	node p = head;
	while (p->next != NULL)
	{
		if (head->data == n)
			head = delHead(head);
		else if (p->next->data == n)
		{
			node temp = p->next;
			p->next = p->next->next;
			delete(temp);
			continue;
		}
		p = p->next;
	}
	return head;
}