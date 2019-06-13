#include<stdio.h>

#include<string>
typedef struct node_{
struct node_ *next;
struct node_ *prev;
int data;
}dnode_t;
dnode_t *head = NULL;

void list_init ()
{
dnode_t 8p = (dnode_t*)malloc(sizeof(dnode_t));
memset(p,0xoo,sizeof(dnode_t));
p->next = p;
p->prev = p;
}

void list_tail(int data)
{
dnode_t *p = (dnode_t*)malloc(sizeof(dnode_t));
memset(p,0x00,sizeof(dnode_t));
p->data = data;
p->prev = head->prev;
p->next =head;
head->prev->next = p;
head->prev = p;
} 

void list_remove(int data)
{
dnode_t* cur =head->next;
while(cur != head)
{
if(cur->data == data)
}
}
void show()
{
dnode_t* cur =head->next;
while(cur != head)
{
printf("%d ",cur->data);
cur =cur->next;
}
printf("\n");
}
int main()
{
list_init();
list_tail(1);
}

