#include<stdio.h>

int main() {
	//������ ��ȯ�ϱ�

	int blue = 1;
	int red = 2;
	int yellow;
	printf("=====��ȯ��=====\n");
	printf("blue=%d,red=%d\n\n",blue,red);

	yellow = blue;
	blue = red;
	red = yellow;

	printf("=====��ȯ��=====\n");
	printf("blue=%d,red=%d\n", blue, red);


	return 0;

}