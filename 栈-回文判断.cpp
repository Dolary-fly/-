#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define maxsize 100
//算法思想：找到字符串中间位置，前半部分出栈与后半部分依次比较 
typedef struct stack{
	char elem[maxsize];//栈中的数据 
	int top;//栈顶 
}stack; 
//初始化栈
stack *create()
{
	stack *L;
	L=(stack *)malloc(sizeof(stack));
	L->top=0;
	return L;
}
void putIn(stack *L,char ch)//入栈
{
	L->top++;
	L->elem[L->top]=ch;
} 
void panduan()
{
	stack *L;
	char string[maxsize];
	int m,i,next;
	gets(string);
	m=strlen(string);
	L=create();
	for(i=0;i<m/2;i++)
		putIn(L,string[i]);
	if(m%2==0)
		next=i;
	else
		next=i+1;
	for(next;next<m;next++)
	{
		if(string[next]==L->elem[L->top])
			L->top--;
		else
			break;
	}
	if(L->top==0)
		printf("是回文");
	else
		printf("不是回文"); 
}
int main()
{
	panduan();
} 
 
