#include<stdio.h>
//����������ͷ�巨


//���ȴ����ڵ�Ľṹ��
typedef struct node {
	int data;
	struct node * next; //���ͻ�������ڵ�����
}Node;
void headInsert(int* arr[] ,int n) {
	Node * p = (Node*)malloc(sizeof(Node));//����һ��ͷ�ڵ㣬p��ŵ�ʱ��ַ
	 p->next = NULL;//ͷ�ڵ�ָ��Ϊ��
	 for (int i = 0; i < n; i++) {
		 Node* s = (Node*)malloc(sizeof(Node));//ΪҪ������������ռ�
		 s->data = arr[i];
		 //���Ĵ���
		 s->next = p->next;
		 p->next = s;
	 }
}
int main() {
	int arr[5] = { 1,2,3,4,5 };//ʹ��ͷ�巨Ϊ���鴴���ռ�
	int sz = sizeof(arr);
	headInsert(arr,sz);
	return 0;
}




//����������β�巨

//���ȴ����ڵ�Ľṹ��
typedef struct node {
	int data;
	struct node* next; //���ͻ�������ڵ�����
}Node;
void headInsert(int* arr[], int n) {
	Node* p = (Node*)malloc(sizeof(Node));//����һ��ͷ�ڵ㣬p��ŵ�ʱ��ַ
	p->next = NULL;//ͷ�ڵ�ָ��Ϊ��
	Node* r = p;//���Ĵ�����p��ָ������Ҫ�ı�ģ�������r�����棬��Ӱ��ͷ�ڵ�
	for (int i = 0; i < n; i++) {
		Node* s = (Node*)malloc(sizeof(Node));//ΪҪ������������ռ�
		s->data = arr[i];
		//���Ĵ���
		r->next = s;
		r = r->next;
	}
}
int main() {
	int arr[5] = { 1,2,3,4,5 };//ʹ��ͷ�巨Ϊ���鴴���ռ�
	int sz = sizeof(arr);
	headInsert(arr, sz);
	return 0;
}