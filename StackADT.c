#include<stdio.h>
#define ture 1;
#define false 0;
typedef int BOOL;


//����ջ�Ľṹ��(����ṹ����ڴ������ǰ��)
typedef struct stack {
	int Top;
	//����ջ����󳤶�
	int MaxStack;
	//������ջ��Ԫ��
	int data[20];
}Stack;

void CreateStack(Stack* s, int maxsize) {
	s->Top = -1;
	s->MaxStack = maxsize;
}
BOOL IsEmpty(Stack s) {
	if (s.Top < 0) {
		return ture;
	}
	else {
		return false;
	}
}
BOOL IsFull(Stack s) {
	if (s.Top >= s.MaxStack - 1) {
		return ture;
	}
	else {
		return false;
	}
}
int StackTop() {

}
int main() {
	Stack s;
	//����
	CreateStack(&s,10);
	//�п�
	IsEmpty(s);
	//����
	IsFull(s);
	//����ջ��Ԫ��
	StackTop();
	//��ջ
	Push();
	//��ջ
	Pop();

	return 0;
}