#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
typedef struct node{
	int elem[maxsize];
	int top;
}list;//������ 
list *create()//��ʼ�� 
{
	list *L;
	L=(list *)malloc(list);
	L->top=-1;
	return L;
} 
int putin(list *L,int n)//��ջ 
{
	if(L->top>=maxsize)
		return 0;
	L->elem[L->top]=n;
	L->top++;
}
int putout(list *L)//��ջ 
{
	int m;
	if(L-top==-1)
		return 0;
	m=L->elem[L->top];
	L->top--; 
}
 duoxiangshi()
 {
 	list *L1,*L2;
 	char ch;
 	int m;//������������Ϊ���� 
 	L1=create();
 	L2=create();
 	printf("�������������ʽ��");
 	ch=putchar();
	while(ch!='#')
	{
		if(ch=='+'||ch=='-')
			m=1;
		else if(ch=='*'||ch=='/')
					m=2;
			else if(ch=='('||ch==')')
					m=3;
				else 
		if(m>L2->elem[L2->top])
			putin(L2,m);
		 
	}
 }
 
