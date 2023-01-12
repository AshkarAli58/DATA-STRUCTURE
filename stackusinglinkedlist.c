#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
};
struct node *top;
struct node *new;
struct node *ptr;
void main()
{
int opt,data;
do
{
printf("Enter your option\n 1 push\n 2 pop\n 3 Display\n 4 Exit\n");
scanf("%d",&opt);
switch(opt)
{
case 1: push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit;
}
}
while(opt!=4);
}
void pop()
{
ptr=top;
if(ptr==NULL)
{
printf("stack underflow...\n");
}
else
{
printf("item to be poped %d",top->data);
top=top->next;
}
free(ptr);
}
void push()
{
new=(struct node*)malloc(sizeof(struct node));
printf("Enter the data to be inserted\t:");
scanf("%d",&new->data);
new->next=top;
top=new;
}
void display()
{
//if(top==NULL)
//{
//printf("\nstack underflow!!");
//}
//else
//{
ptr=top;
while(ptr!=NULL)
{
printf("stack:%d\n",ptr->data);
ptr=ptr->next;
}
}

