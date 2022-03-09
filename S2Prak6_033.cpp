#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node *qwerty;

//fungsi node baru
qwerty Nnode(int a)
{
	qwerty q;
	q=(qwerty)malloc(sizeof(struct node));
	q->data=a;
	q->next=NULL;
}

//insert node awal (kiri)
qwerty awal_sim(qwerty awal, int a)
{
	qwerty nodebaru=Nnode(a);
	nodebaru->next=awal;
	awal=nodebaru;
}

//menghapus node tertentu dengan kondisi data awal dan terakhir
qwerty hapus_node(qwerty awal)
{
	if (awal==NULL)
	{
		return;
	}
}
