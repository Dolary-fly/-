#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
typedef struct node{
	int elem[maxsize];
	int top;
}list;//重命名 
list *create()//初始化 
{
	list *L;
	L=(list *)malloc(list);
	L->top=-1;
	return L;
} 
int putin(list *L,int n)//入栈 
{
	if(L->top>=maxsize)
		return 0;
	L->elem[L->top]=n;
	L->top++;
}
int putout(list *L)//出栈 
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
 	int m;//将操作符更改为数字 
 	L1=create();
 	L2=create();
 	printf("请依次输入多项式：");
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
 
