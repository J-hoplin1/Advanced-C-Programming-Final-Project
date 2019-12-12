
/*

작성자 : B889047 윤준호

Customized by J-Hoplin

Reference : Snake Game , https://m.blog.naver.com/azure0777/220282982693

Version Management : https://github.com/J-hoplin1/C_Programming_Game_Project

* Version was managed as function unit

*/
#include "prototypes.h"

void food(int* x, int* y, int* score, int* last_score, int* best_score, int* food_x, int* food_y, int* length, int* speed, int* stage, int* nextlimit, int* laststage, char* tail) {
	int i = 0;
	int food_crush_on = 0;//food가 뱀 몸통좌표에 생길 경우 on 
	int r = 0; //난수 생성에 사동되는 변수 
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT, " YOUR SCORE: ");
	printf("%3d, LASTEST SCORE: %3d, LASTEST STAGE: %3d BEST SCORE: %3d ", *score, *last_score, *laststage, *best_score);
	gotoxy(MAP_X, MAP_Y + MAP_HEIGHT + 1, " Remain Score to Next Stage: ");
	printf("%3d Stage: %3d Snake's Speed: %3d Snake's Length: %3d", *nextlimit - *score, *stage, *speed, *length);

	while (1) {
		food_crush_on = 0;
		srand((unsigned)time(NULL) + r); //난수표생성 
		*food_x = (rand() % (MAP_WIDTH - 2)) + 1;    //난수를 좌표값에 넣음 
		*food_y = (rand() % (MAP_HEIGHT - 2)) + 1;

		for (i = 0; i < *length; i++) { //food가 뱀 몸통과 겹치는지 확인  
			if (*food_x == x[i] && *food_y == y[i]) {
				food_crush_on = 1; //겹치면 food_crush_on 를 on 
				r++;
				break;
			}
		}

		if (food_crush_on == 1) continue; //겹쳤을 경우 while문을 다시 시작 

		gotoxy(MAP_X + *food_x, MAP_Y + *food_y, tail); //안겹쳤을 경우 좌표값에 food를 찍고  
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
		srand((unsigned)time(NULL) + r); //난수표생성 
		*food_x = (rand() % (MAP_WIDTH - 2)) + 1;    //난수를 좌표값에 넣음 
		*food_y = (rand() % (MAP_HEIGHT - 2)) + 1;

		for (i = 0; i < *length; i++) { //food가 뱀 몸통과 겹치는지 확인  
			if (*food_x == x[i] && *food_y == y[i]) {
				food_crush_on = 1; //겹치면 food_crush_on 를 on 
				r++;
				break;
			}
		}

		if (food_crush_on == 1) continue; //겹쳤을 경우 while문을 다시 시작 

		gotoxy(MAP_X + *food_x, MAP_Y + *food_y, "▥"); //안겹쳤을 경우 좌표값에 food를 찍고  
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
		srand((unsigned)time(NULL) + r); //난수표생성 
		*food_x = (rand() % (MAP_WIDTH - 2)) + 1;    //난수를 좌표값에 넣음 
		*food_y = (rand() % (MAP_HEIGHT - 2)) + 1;

		for (i = 0; i < *length; i++) { //food가 뱀 몸통과 겹치는지 확인  
			if (*food_x == x[i] && *food_y == y[i]) {
				food_crush_on = 1; //겹치면 food_crush_on 를 on 
				r++;
				break;
			}
		}

		if (food_crush_on == 1) continue; //겹쳤을 경우 while문을 다시 시작 

		gotoxy(MAP_X + *food_x, MAP_Y + *food_y, "♧"); //안겹쳤을 경우 좌표값에 food를 찍고  
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
		srand((unsigned)time(NULL) + r); //난수표생성 
		*food_x = (rand() % (MAP_WIDTH - 2)) + 1;    //난수를 좌표값에 넣음 
		*food_y = (rand() % (MAP_HEIGHT - 2)) + 1;

		for (i = 0; i < *length; i++) { //food가 뱀 몸통과 겹치는지 확인  
			if (*food_x == x[i] && *food_y == y[i]) {
				food_crush_on = 1; //겹치면 food_crush_on 를 on 
				r++;
				break;
			}
		}

		if (food_crush_on == 1) continue; //겹쳤을 경우 while문을 다시 시작 

		gotoxy(MAP_X + *food_x, MAP_Y + *food_y, "￥"); //안겹쳤을 경우 좌표값에 food를 찍고  
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
		srand((unsigned)time(NULL) + r); //난수표생성 
		*food_x = (rand() % (MAP_WIDTH - 2)) + 1;    //난수를 좌표값에 넣음 
		*food_y = (rand() % (MAP_HEIGHT - 2)) + 1;

		for (i = 0; i < *length; i++) { //food가 뱀 몸통과 겹치는지 확인  
			if (*food_x == x[i] && *food_y == y[i]) {
				food_crush_on = 1; //겹치면 food_crush_on 를 on 
				r++;
				break;
			}
		}

		if (food_crush_on == 1) continue; //겹쳤을 경우 while문을 다시 시작 

		gotoxy(MAP_X + *food_x, MAP_Y + *food_y, "＄"); //안겹쳤을 경우 좌표값에 food를 찍고  
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
		srand((unsigned)time(NULL) + r); //난수표생성 
		*food_x = (rand() % (MAP_WIDTH - 2)) + 1;    //난수를 좌표값에 넣음 
		*food_y = (rand() % (MAP_HEIGHT - 2)) + 1;

		for (i = 0; i < *length; i++) { //food가 뱀 몸통과 겹치는지 확인  
			if (*food_x == x[i] && *food_y == y[i]) {
				food_crush_on = 1; //겹치면 food_crush_on 를 on 
				r++;
				break;
			}
		}

		if (food_crush_on == 1) continue; //겹쳤을 경우 while문을 다시 시작 

		gotoxy(MAP_X + *food_x, MAP_Y + *food_y, "∞"); //안겹쳤을 경우 좌표값에 food를 찍고  
		break;
	}
}
