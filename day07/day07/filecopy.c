/*#include <stdio.h>

int main() {

	FILE* fin;
	FILE* fout;
	int ch = 0;

	fopen_s(&fin, "gugudan.txt", "r");
	fopen_s(% fout, "gugudan2.txt", "w");

	if (fin == NULL) {
		puts("파일열기에 실패했습니다.");
		return -1;
	}

	if (fout == NULL) {
		puts("파일생성에 실패했습니다.");
		return -1;
	}

	puts("**파일에 데이터 입력**");
	while ((ch = fgetc(fin)) != EOF) {
		fputs(ch, fout);
	}
	
	/*while (ch != EOF) {
		ch = fgetc(fin);  //fin에 읽어오기
		fputs(ch, fout);  //fout에 쓰기
	}

	fclose(fin);
	fclose(fout);
	return 0;
}*/