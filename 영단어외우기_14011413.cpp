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
		printf("\n\n\n\n___________________________\n단어 추가는 1 입력\n현재 단어 출력은 2 입력\n뜻 시험을 보려면 3입력\n스펠링시험을 보려면 4입력\n종료하려면 0입력\n_______________________________\n입력:");
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
	printf("학습을 종료합니다 수고하셨습니다");
}

void input() {
	cnt++;
	printf("단어의 스펠링과 뜻을 차례차례 한칸 띄우고입력바랍니다. \n"); 
	
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
	printf("현재 단어 개수: %d",cnt);
	getchar();
	getchar();
	system("cls");
}
void test1() {
	std::list<data>::iterator p;
	data a;
	data b;
	int q=0;
	printf("\n\n\n\n------단어시험------\n");	
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
			printf("단어시험테러~~ 컴퓨터 맴찢 ~~!!\n");
			printf("\n\n\n틀린단어는 %s %s 입니다.",&a.spell[0],&a.mean[0]); 
			break;
		}
	}
	if(q==0){
		printf("\n\n성공!\n\n컴퓨터 완전감동이야 이걸 다외우다니 ㅠㅠ(하트)");
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
	printf("\n\n\n\n------단어시험------\n");
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
			printf("단어시험테러~~ 컴퓨터 맴찢~~!!\n");
			printf("틀린단어는 \n%s %s\n입니다.",&a.spell[0],&a.mean[0]); 
			break;
		}
	}
	if(q==0){
		printf("\n\n성공!\n\n컴퓨터 완전감동이야 이걸 다외우다니 ㅠㅠ(하트)");
	}
	getchar();
	getchar();
	system("cls");
}
