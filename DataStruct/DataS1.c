#include<stdio.h>
//��ѡ�������㷨:��8�������ҵ���С��������ǰ�����ֵ����һ��δ������������н�����
//                 ����ʣ��7�������ҵ���С������ڶ���������һ��δ����������������Դ�����
//15,5,86,39,47,55,29,30
//5,15,86,39,47,55,29,30
//5,15,29,39,47,55,86,30
//5,15,29,30,47,55,86,39
//5,15,29,30,39,55,86,47
//.....
/*void SelectSort(int arr[],int n) {
	int x=0;
	int y=0;
	int z=0;
	int temp = 0;
	for (int x = 0; x < n; x++) {
		z = x;
		for (y = x + 1; y < n; y++) {
			if (arr[y] < arr[z]) {
				z = y;
			}
		}
		temp = arr[z];
		arr[z] = arr[x];
		arr[x] = temp;

	}
}
int main() {
	int arr[8] = { 15,5,86,39,47,55,29,30 };
	SelectSort(arr,8);
	for (int x = 0; x < 8; x++) {
		printf("%d ", arr[x]);
	}
	return 0;
}*/


//ֱ�Ӳ������򣺽���һ����¼������һ�����������У��㷨���Ժ��n-1����¼�����β��뵽һ���Ѿ��������������ȥ��ʹ��ÿ��
//              �����¼���������Ҳ�������
//(64),(37,83,72,28,55)
//(37,64),(83,72,28,55)
//(37,64,83),(72,28,55)
//(37,64,72,83),(28,55)
//....
/*void InsertSort(int arr[], int n) {
	for (int x = 0; x < n; x++) {
		int y = x;
		int temp = arr[y];
		while (y > 0 && temp <arr[y - 1]) { //�ж��ҵ���һ����������
			arr[y] = arr[y - 1];//��������������ƣ�Ϊ��Ҫ��������ṩλ��
			y--;
		}
		arr[y] = temp;
	}
}
int main() {
	int arr[6] = { 64,37,83,72,28,55 };
	InsertSort(arr, 6);
	for (int x = 0; x < 6; x++) {
		printf("%d ", arr[x]);
	}
	return 0;
}*/


//ð������
//15,5,86,39,47,55,29,30
/*void BubbleSort(int arr[],int n) {
	int temp = 0;
	for (int i = n; n >1; n--) {
		int flag = 1;
		for (int y = 1; y < i; y++) {
			if (arr[y-1] > arr[y]) {
				temp = arr[y];
				arr[y] = arr[y-1];
				arr[y-1] = temp;
				flag = 0;
			}
		}
		if (flag) {
			return;
		}
	}
}
int main() {
	int arr[8] = { 15,5,86,39,47,55,29,30 };
	BubbleSort(arr,8);
	for (int x = 0; x < 8; x++) {
		printf("%d ", arr[x]);
	}
	return 0;
}*/