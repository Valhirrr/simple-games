#include<stdlib.h>
#include<list>
#include<stdio.h>
#include<windows.h>

int go = 9;
typedef struct pnt {
	char mean[100];
	char spell[100];
}data;
std::list<data>List;

void test1();
void input();
void output();
void test2();
data in;
int cnt = 0;

int main() {

	std::list<char>::iterator p;
	while (go != 0) {
		printf("\n\n\n\n___________________________\n�ܾ� �߰��� 1 �Է�\n���� �ܾ� ����� 2 �Է�\n�� ������ ������ 3�Է�\n���縵������ ������ 4�Է�\n�����Ϸ��� 0�Է�\n_______________________________\n�Է�:");
		scanf("%d", &go);
		system("cls");
		switch (go) {
		case 1:
			input(); break;
		case 2: 
			output(); break;
		case 3:
			test1(); break;
		case 4:
			test2(); break; 
		default:
			break;
		}
	}
	printf("�н��� �����մϴ� �����ϼ̽��ϴ�");
}

void input() {
	cnt++;
	printf("�ܾ��� ���縵�� ���� �������� ��ĭ �����Է¹ٶ��ϴ�. \n"); 
	
	scanf("%s", &in.spell[0]);
	scanf("%s", &in.mean[0]);
	
	List.push_front(in);
	
	getchar();
	getchar();
	system("cls");
}
void output() {
	std::list<data>::iterator p;
	
	data a;

	for (p = List.begin(); p != List.end(); p++) {
		a = *p;
		printf("%s %s\n",&a.spell[0],&a.mean[0]);
	}
	printf("���� �ܾ� ����: %d",cnt);
	getchar();
	getchar();
	system("cls");
}
void test1() {
	std::list<data>::iterator p;
	data a;
	data b;
	int q=0;
	printf("\n\n\n\n------�ܾ����------\n");	
	for (p = List.begin(); p != List.end(); p++) {
		a = *p;
		printf("\n%s: ",&a.spell[0]);
		scanf("%s",&b.mean[0]);
		for(int i=0; a.mean[i]!='\0'; i++){
			if(a.mean[i]!=b.mean[i]){
				q=1;
				break;
			}
		}
		if(q==1){
			printf("�ܾ�����׷�~~ ��ǻ�� ���� ~~!!\n");
			printf("\n\n\nƲ���ܾ�� %s %s �Դϴ�.",&a.spell[0],&a.mean[0]); 
			break;
		}
	}
	if(q==0){
		printf("\n\n����!\n\n��ǻ�� ���������̾� �̰� �ٿܿ�ٴ� �Ф�(��Ʈ)");
	}
	getchar();
	getchar();
	system("cls");
}
void test2() {
	std::list<data>::iterator p;
	data a;
	data b;
	int q=0;
	printf("\n\n\n\n------�ܾ����------\n");
	for (p = List.begin(); p != List.end(); p++) {
		a = *p;
		printf("%s: ",&a.mean[0]);
		scanf("%s",&b.spell[0]);
		for(int i=0; a.spell[i]!='\0'; i++){
			if(a.spell[i]!=b.spell[i]){
				q=1;
				break;
			}
		}
		if(q==1){
			printf("�ܾ�����׷�~~ ��ǻ�� ����~~!!\n");
			printf("Ʋ���ܾ�� \n%s %s\n�Դϴ�.",&a.spell[0],&a.mean[0]); 
			break;
		}
	}
	if(q==0){
		printf("\n\n����!\n\n��ǻ�� ���������̾� �̰� �ٿܿ�ٴ� �Ф�(��Ʈ)");
	}
	getchar();
	getchar();
	system("cls");
}
