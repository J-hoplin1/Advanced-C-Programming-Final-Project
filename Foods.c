
/*

�ۼ��� : B889047 ����ȣ

Customized by J-Hoplin

Reference : Snake Game , https://m.blog.naver.com/azure0777/220282982693

Version Management : https://github.com/J-hoplin1/C_Programming_Game_Project

* Version was managed as function unit

*/
#include "prototypes.h"

void food(int* x, int* y, int* score, int* last_score, int* best_score, int* food_x, int* food_y, int* length, int* speed, int* stage, int* nextlimit, int* laststage, char* tail) {
	int i = 0;
	int food_crush_on = 0;//food�� �� ������ǥ�� ���� ��� on 
	int r = 0; //���� ������ �絿�Ǵ� ���� 
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT, " YOUR SCORE: ");
	printf("%3d, LASTEST SCORE: %3d, LASTEST STAGE: %3d BEST SCORE: %3d ", *score, *last_score, *laststage, *best_score);
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT + 1, " Remain Score to Next Stage: ");
	printf("%3d Stage: %3d Snake's Speed: %3d Snake's Length: %3d", *nextlimit - *score, *stage, *speed, *length);

	while (1) {
		food_crush_on = 0;
		srand((unsigned)time(NULL) + r); //����ǥ���� 
		*food_x = (rand() % (MAP_WIDTH - 2)) + 1;    //������ ��ǥ���� ���� 
		*food_y = (rand() % (MAP_HEIGHT - 2)) + 1;

		for (i = 0; i < *length; i++) { //food�� �� ����� ��ġ���� Ȯ��  
			if (*food_x == x[i] && *food_y == y[i]) {
				food_crush_on = 1; //��ġ�� food_crush_on �� on 
				r++;
				break;
			}
		}

		if (food_crush_on == 1) continue; //������ ��� while���� �ٽ� ���� 

		gotoxy(MAP_X + *food_x, MAP_Y + *food_y, tail); //�Ȱ����� ��� ��ǥ���� food�� ���  
		break;
	}
}

void food2(int* x, int* y, int* score, int* last_score, int* best_score, int* food_x, int* food_y, int* length, int* speed, int* stage, int* nextlimit, int* laststage)
{
	int i = 0;
	int food_crush_on = 0;
	int r = 0;
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT, " YOUR SCORE: ");
	printf("%3d, LASTEST SCORE: %3d, LASTEST STAGE: %3d BEST SCORE: %3d ", *score, *last_score, *laststage, *best_score);
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT + 1, " Remain Score to Next Stage: ");
	printf("%3d Stage: %3d Snake's Speed: %3d Snake's Length: %3d", *nextlimit - *score, *stage, *speed, *length);


	while (1) {
		food_crush_on = 0;
		srand((unsigned)time(NULL) + r); //����ǥ���� 
		*food_x = (rand() % (MAP_WIDTH - 2)) + 1;    //������ ��ǥ���� ���� 
		*food_y = (rand() % (MAP_HEIGHT - 2)) + 1;

		for (i = 0; i < *length; i++) { //food�� �� ����� ��ġ���� Ȯ��  
			if (*food_x == x[i] && *food_y == y[i]) {
				food_crush_on = 1; //��ġ�� food_crush_on �� on 
				r++;
				break;
			}
		}

		if (food_crush_on == 1) continue; //������ ��� while���� �ٽ� ���� 

		gotoxy(MAP_X + *food_x, MAP_Y + *food_y, "��"); //�Ȱ����� ��� ��ǥ���� food�� ���  
		break;
	}
}
void food3(int* x, int* y, int* score, int* last_score, int* best_score, int* food_x, int* food_y, int* length, int* speed, int* stage, int* nextlimit, int* laststage)
{
	int i = 0;
	int food_crush_on = 0;
	int r = 0;
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT, " YOUR SCORE: ");
	printf("%3d, LASTEST SCORE: %3d, LASTEST STAGE: %3d BEST SCORE: %3d ", *score, *last_score, *laststage, *best_score);
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT + 1, " Remain Score to Next Stage: ");
	printf("%3d Stage: %3d Snake's Speed: %3d Snake's Length: %3d", *nextlimit - *score, *stage, *speed, *length);


	while (1) {
		food_crush_on = 0;
		srand((unsigned)time(NULL) + r); //����ǥ���� 
		*food_x = (rand() % (MAP_WIDTH - 2)) + 1;    //������ ��ǥ���� ���� 
		*food_y = (rand() % (MAP_HEIGHT - 2)) + 1;

		for (i = 0; i < *length; i++) { //food�� �� ����� ��ġ���� Ȯ��  
			if (*food_x == x[i] && *food_y == y[i]) {
				food_crush_on = 1; //��ġ�� food_crush_on �� on 
				r++;
				break;
			}
		}

		if (food_crush_on == 1) continue; //������ ��� while���� �ٽ� ���� 

		gotoxy(MAP_X + *food_x, MAP_Y + *food_y, "��"); //�Ȱ����� ��� ��ǥ���� food�� ���  
		break;
	}
}
void food4(int* x, int* y, int* score, int* last_score, int* best_score, int* food_x, int* food_y, int* length, int* speed, int* stage, int* nextlimit, int* laststage)
{
	int i = 0;
	int food_crush_on = 0;
	int r = 0;
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT, " YOUR SCORE: ");
	printf("%3d, LASTEST SCORE: %3d, LASTEST STAGE: %3d BEST SCORE: %3d ", *score, *last_score, *laststage, *best_score);
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT + 1, " Remain Score to Next Stage: ");
	printf("%3d Stage: %3d Snake's Speed: %3d Snake's Length: %3d", *nextlimit - *score, *stage, *speed, *length);


	while (1) {
		food_crush_on = 0;
		srand((unsigned)time(NULL) + r); //����ǥ���� 
		*food_x = (rand() % (MAP_WIDTH - 2)) + 1;    //������ ��ǥ���� ���� 
		*food_y = (rand() % (MAP_HEIGHT - 2)) + 1;

		for (i = 0; i < *length; i++) { //food�� �� ����� ��ġ���� Ȯ��  
			if (*food_x == x[i] && *food_y == y[i]) {
				food_crush_on = 1; //��ġ�� food_crush_on �� on 
				r++;
				break;
			}
		}

		if (food_crush_on == 1) continue; //������ ��� while���� �ٽ� ���� 

		gotoxy(MAP_X + *food_x, MAP_Y + *food_y, "��"); //�Ȱ����� ��� ��ǥ���� food�� ���  
		break;
	}
}

void food5(int* x, int* y, int* score, int* last_score, int* best_score, int* food_x, int* food_y, int* length, int* speed, int* stage, int* nextlimit, int* laststage)
{
	int i = 0;
	int food_crush_on = 0;
	int r = 0;
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT, " YOUR SCORE: ");
	printf("%3d, LASTEST SCORE: %3d, LASTEST STAGE: %3d BEST SCORE: %3d ", *score, *last_score, *laststage, *best_score);
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT + 1, " Remain Score to Next Stage: ");
	printf("%3d Stage: %3d Snake's Speed: %3d Snake's Length: %3d", *nextlimit - *score, *stage, *speed, *length);


	while (1) {
		food_crush_on = 0;
		srand((unsigned)time(NULL) + r); //����ǥ���� 
		*food_x = (rand() % (MAP_WIDTH - 2)) + 1;    //������ ��ǥ���� ���� 
		*food_y = (rand() % (MAP_HEIGHT - 2)) + 1;

		for (i = 0; i < *length; i++) { //food�� �� ����� ��ġ���� Ȯ��  
			if (*food_x == x[i] && *food_y == y[i]) {
				food_crush_on = 1; //��ġ�� food_crush_on �� on 
				r++;
				break;
			}
		}

		if (food_crush_on == 1) continue; //������ ��� while���� �ٽ� ���� 

		gotoxy(MAP_X + *food_x, MAP_Y + *food_y, "��"); //�Ȱ����� ��� ��ǥ���� food�� ���  
		break;
	}
}

void food6(int* x, int* y, int* score, int* last_score, int* best_score, int* food_x, int* food_y, int* length, int* speed, int* stage, int* nextlimit, int* laststage)
{
	int i = 0;
	int food_crush_on = 0;
	int r = 0;
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT, " YOUR SCORE: ");
	printf("%3d, LASTEST SCORE: %3d, LASTEST STAGE: %3d BEST SCORE: %3d ", *score, *last_score, *laststage, *best_score);
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT + 1, " Remain Score to Next Stage: ");
	printf("%3d Stage: %3d Snake's Speed: %3d Snake's Length: %3d", *nextlimit - *score, *stage, *speed, *length);


	while (1) {
		food_crush_on = 0;
		srand((unsigned)time(NULL) + r); //����ǥ���� 
		*food_x = (rand() % (MAP_WIDTH - 2)) + 1;    //������ ��ǥ���� ���� 
		*food_y = (rand() % (MAP_HEIGHT - 2)) + 1;

		for (i = 0; i < *length; i++) { //food�� �� ����� ��ġ���� Ȯ��  
			if (*food_x == x[i] && *food_y == y[i]) {
				food_crush_on = 1; //��ġ�� food_crush_on �� on 
				r++;
				break;
			}
		}

		if (food_crush_on == 1) continue; //������ ��� while���� �ٽ� ���� 

		gotoxy(MAP_X + *food_x, MAP_Y + *food_y, "��"); //�Ȱ����� ��� ��ǥ���� food�� ���  
		break;
	}
}
