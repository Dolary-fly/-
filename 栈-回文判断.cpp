#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define maxsize 100
//�㷨˼�룺�ҵ��ַ����м�λ�ã�ǰ�벿�ֳ�ջ���벿�����αȽ� 
typedef struct stack{
	char elem[maxsize];//ջ�е����� 
	int top;//ջ�� 
}stack; 
//��ʼ��ջ
stack *create()
{
	stack *L;
	L=(stack *)malloc(sizeof(stack));
	L->top=0;
	return L;
}
void putIn(stack *L,char ch)//��ջ
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
		printf("�ǻ���");
	else
		printf("���ǻ���"); 
}
int main()
{
	panduan();
} 
 
