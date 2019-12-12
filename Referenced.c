

/*

�ۼ��� : B889047 ����ȣ

Customized by J-Hoplin

Reference : Snake Game , https://m.blog.naver.com/azure0777/220282982693

Version Management : https://github.com/J-hoplin1/C_Programming_Game_Project

* Version was managed as function unit

*/
#include "prototypes.h"


///////////////////////////MAIN END////////////////////////////////
void title(int* key, int* dir, int* speed, int* length, int* score, int* x, int* y, int* food_x, int* food_y, int* last_score, int* best_score, int* stage, int* nextlimit, char* head, char* tail, int* laststage, int* lastitemnumber) {
	int i, j;

	while (_kbhit()) _getch(); //���ۿ� �ִ� Ű���� ���� 

	draw_map();    //�� �׵θ��� �׸� 
	for (i = MAP_Y + 1; i < MAP_Y + MAP_HEIGHT - 1; i++) { // �� �׵θ� ������ ��ĭ���� ä�� 
		for (j = MAP_X + 1; j < MAP_X + MAP_WIDTH - 1; j++) gotoxy(j, i, "  ");
	}

	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 3, "+--------------------------+");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 4, "|        S N A K E         |");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 5, "+--------------------------+");

	gotoxy(MAP_X + (MAP_WIDTH / 2) - 4, MAP_Y + 7, " < SELECT MENU > ");

	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 9, "   �� ��,��,��,�� : Move    ");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 10, "   �� P : Pause             "); gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 11, "   �� ESC : Quit              ");

	gotoxy(MAP_X + (MAP_WIDTH / 2) - 5, MAP_Y + 13, "1 . ���� �����ϱ�.");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 5, MAP_Y + 15, "2 . ĳ���� �����ϱ�.");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 5, MAP_Y + 17, "3 . ������ ����.");

	while (1) {
		if (_kbhit()) { //Ű�Է¹��� 
			*key = _getch();
			if (*key == ESC) exit(0); // ESCŰ�� ���� 
			else if (*key == 49)
			{
				break;
			}
			else if (*key == 50)
			{
				choosesnake(head, tail);
				title(key, dir, speed, length, score, x, y, food_x, food_y, last_score, best_score, stage, nextlimit, head, tail, laststage, lastitemnumber);
				return;
			}
			else if (*key == 51)
			{
				explainitem(key, dir, speed, length, score, x, y, food_x, food_y, last_score, best_score, stage, nextlimit, head, tail, laststage, lastitemnumber);
				return;
			}
			else {
				continue;
			}
		}
		gotoxy(MAP_X + (MAP_WIDTH / 2) - 4, MAP_Y + 7, " < SELECT MENU > ");
		Sleep(400);
		gotoxy(MAP_X + (MAP_WIDTH / 2) - 4, MAP_Y + 7, "                 ");
		Sleep(400);

	}
	reset(dir, speed, length, score, x, y, food_x, food_y, last_score, best_score, stage, nextlimit, laststage, head, tail, lastitemnumber); // ������ �ʱ�ȭ  
}


void reset(int* dir, int* speed, int* length, int* score, int* x, int* y, int* food_x, int* food_y, int* last_score, int* best_score, int* stage, int* nextlimit, int laststage, char* head, char* tail, int* lastitemnumber) {
	int i;
	system("cls"); //ȭ���� ���� 
	draw_map(); //�� �׵θ��� �׸� 
	while (_kbhit()) _getch(); //���ۿ� �ִ� Ű���� ���� 

	*dir = LEFT; // ���� �ʱ�ȭ  
	*speed = 150; // �ӵ� �ʱ�ȭ 
	*length = 2; //�� ���� �ʱ�ȭ 
	*score = 0; //���� �ʱ�ȭ 
	*lastitemnumber = 1; // Initialize Item Number 
	*stage = 1;
	*nextlimit = 50;
	for (i = 0; i < *length; i++) { //�� ���밪 �Է� 
		x[i] = MAP_WIDTH / 2 + i;
		y[i] = MAP_HEIGHT / 2;
		gotoxy(MAP_X + x[i], MAP_Y + y[i], tail);
	}
	gotoxy(MAP_X + x[0], MAP_Y + y[0], head); //�� �Ӹ� �׸� 
	food(x, y, score, last_score, best_score, food_x, food_y, length, speed, stage, nextlimit, laststage, tail); // food ����  
}

void draw_map(void) { //�� �׵θ� �׸��� �Լ� 
	int i, j;
	for (i = 0; i < MAP_WIDTH; i++) {
		gotoxy(MAP_X + i, MAP_Y, "��");
	}
	for (i = MAP_Y + 1; i < MAP_Y + MAP_HEIGHT - 1; i++) {
		gotoxy(MAP_X, i, "��");
		gotoxy(MAP_X + MAP_WIDTH - 1, i, "��");
	}
	for (i = 0; i < MAP_WIDTH; i++) {
		gotoxy(MAP_X + i, MAP_Y + MAP_HEIGHT - 1, "��");
	}
}



//select items as random. change lastitemnumber value
void selectitem(int* key, int* dir, int* speed, int* length, int* score, int* x, int* y, int* food_x, int* food_y, int* last_score, int* best_score, int* stage, int* nextlimit, char* head, char* tail, int* laststage, int* lastitemnumber)
{
	srand(time(NULL));
	int random = rand() % 6;
	int select = random + 1;
	switch (select)
	{
	case 1:
		*lastitemnumber = 1;
		food(x, y, score, last_score, best_score, food_x, food_y, length, speed, stage, nextlimit, laststage, tail);
		break;
	case 2:
		*lastitemnumber = 2;
		food2(x, y, score, last_score, best_score, food_x, food_y, length, speed, stage, nextlimit, laststage);
		break;
	case 3:
		*lastitemnumber = 3;
		food3(x, y, score, last_score, best_score, food_x, food_y, length, speed, stage, nextlimit, laststage);
		break;
	case 4:
		*lastitemnumber = 4;
		food4(x, y, score, last_score, best_score, food_x, food_y, length, speed, stage, nextlimit, laststage);
		break;
	case 5:
		*lastitemnumber = 5;
		food5(x, y, score, last_score, best_score, food_x, food_y, length, speed, stage, nextlimit, laststage);
		break;
	case 6:
		*lastitemnumber = 6;
		food6(x, y, score, last_score, best_score, food_x, food_y, length, speed, stage, nextlimit, laststage);
		break;
	}

}

void move(int* key, int* dir, int* speed, int* length, int* score, int* x, int* y, int* food_x, int* food_y, int* last_score, int* best_score, int* stage, int* nextlimit, char* head, char* tail, int* laststage, int* lastitemnumber) {
	int i;
	//check speed
	int cpy_speed = *speed;
	//check score
	int cpy_score = *score;
	if (x[0] == *food_x && y[0] == *food_y) { //food�� �浹���� ���
		switch (*lastitemnumber)
		{
			// Item No.1 : Add 10 points and add 1 tail. Item No.1's logo is same shape with tail. Emoji : same with tail
		case 1:
			*score += 10; //���� ����
			cpy_speed = *speed;
			if (cpy_score >= *nextlimit)
			{
				*stage += 1;
				*nextlimit += 100;
				if ((cpy_speed -= 10) > 0)
				{
					*speed -= 10;
				}
			}
			selectitem(key, dir, speed, length, score, x, y, food_x, food_y, last_score, best_score, stage, nextlimit, head, tail, laststage, lastitemnumber);
			*length += 1; //��������
			x[*length - 1] = x[*length - 2]; //���θ��� ���뿡 �� �Է� 
			y[*length - 1] = y[*length - 2];

			break;
			// Item No.2 : Add 10 points and add 1 tail speed  up : 10. Emoji : ��
		case 2:
			*score += 10;
			cpy_speed = *speed;
			if (cpy_score >= *nextlimit)
			{
				*stage += 1;
				*nextlimit += 100;
				if ((cpy_speed -= 10) > 0)
				{
					*speed -= 10;
				}
			}

			if ((cpy_speed -= 10) > 0)
			{
				*speed -= 10;
			}
			selectitem(key, dir, speed, length, score, x, y, food_x, food_y, last_score, best_score, stage, nextlimit, head, tail, laststage, lastitemnumber);
			*length += 1;
			x[*length - 1] = x[*length - 2];
			y[*length - 1] = y[*length - 2];


			break;
			// Item No.3 : Add 20 points and add 2 tail speed up : 20 Emoji : ��
		case 3:
			*score += 20;
			cpy_speed = *speed;
			if (cpy_score >= *nextlimit)
			{
				*stage += 1;
				*nextlimit += 100;
				if ((cpy_speed -= 10) > 0)
				{
					*speed -= 10;
				}
			}
			if ((cpy_speed -= 20) > 0)
			{
				*speed -= 20;
			}
			selectitem(key, dir, speed, length, score, x, y, food_x, food_y, last_score, best_score, stage, nextlimit, head, tail, laststage, lastitemnumber);
			*length += 2;
			x[*length - 1] = x[*length - 2];
			y[*length - 1] = y[*length - 2];


			break;
			// Item No.4 : Add 20 points and add 4 tail speed down : 15 Emoji : ��
		case 4:
			*score += 20;
			cpy_speed = *speed;
			if (cpy_score >= *nextlimit)
			{
				*stage += 1;
				*nextlimit += 100;
				if ((cpy_speed -= 10) > 0)
				{
					*speed -= 10;
				}
			}
			selectitem(key, dir, speed, length, score, x, y, food_x, food_y, last_score, best_score, stage, nextlimit, head, tail, laststage, lastitemnumber);
			*speed += 15;
			x[*length - 1] = x[*length - 2];
			y[*length - 1] = y[*length - 2];
			break;
			// Item No.5 Add 30 point speed down : 10 Emoji : $
		case 5:
			*score += 30;
			cpy_speed = *speed;
			if (cpy_score >= *nextlimit)
			{
				*stage += 1;
				*nextlimit += 100;
				if ((cpy_speed -= 10) > 0)
				{
					*speed -= 10;
				}
			}
			*speed += 10;
			selectitem(key, dir, speed, length, score, x, y, food_x, food_y, last_score, best_score, stage, nextlimit, head, tail, laststage, lastitemnumber);
			*length += 4;
			x[*length - 1] = x[*length - 2];
			y[*length - 1] = y[*length - 2];

			break;
			// Item No.6 Add 30 point speed up : 20 Emoji : ��
		case 6:
			*score += 30;
			cpy_speed = *speed;
			if (cpy_score >= *nextlimit)
			{
				*stage += 1;
				*nextlimit += 100;
				if ((cpy_speed -= 10) > 0)
				{
					*speed -= 10;
				}
			}
			if ((cpy_speed -= 10) > 0)
			{
				*speed -= 10;
			}
			selectitem(key, dir, speed, length, score, x, y, food_x, food_y, last_score, best_score, stage, nextlimit, head, tail, laststage, lastitemnumber);
			x[*length - 1] = x[*length - 2];
			y[*length - 1] = y[*length - 2];

			break;
		}

	}
	if (x[0] == 0 || x[0] == MAP_WIDTH - 1 || y[0] == 0 || y[0] == MAP_HEIGHT - 1) { //���� �浹���� ��� 
		game_over(key, dir, speed, length, score, x, y, food_x, food_y, last_score, best_score, stage, nextlimit, head, tail, laststage, lastitemnumber);
		return; //game_over���� ������ �ٽ� �����ϰ� �Ǹ� ���⼭���� �ݺ��ǹǷ� 
				//return�� ����Ͽ� move�� ������ �κ��� ������� �ʵ��� �մϴ�. 
	}
	for (i = 1; i < *length; i++) { //�ڱ���� �浹�ߴ��� �˻� 
		if (x[0] == x[i] && y[0] == y[i]) {
			game_over(key, dir, speed, length, score, x, y, food_x, food_y, last_score, best_score, stage, nextlimit, head, tail, laststage, lastitemnumber);
			return;
		}
	}

	gotoxy(MAP_X + x[*length - 1], MAP_Y + y[*length - 1], "  "); //���� �������� ���� 
	for (i = *length - 1; i > 0; i--) { //������ǥ�� ��ĭ�� �ű� 
		x[i] = x[i - 1];
		y[i] = y[i - 1];
	}
	gotoxy(MAP_X + x[0], MAP_Y + y[0], tail); //�Ӹ��� �ִ����� �������� ��ħ 
	if (*dir == LEFT) --x[0]; //���⿡ ���� ���ο� �Ӹ���ǥ(x[0],y[0])���� ���� 
	if (*dir == RIGHT) ++x[0];
	if (*dir == UP) --y[0];
	if (*dir == DOWN) ++y[0];
	gotoxy(MAP_X + x[i], MAP_Y + y[i], head); //���ο� �Ӹ���ǥ���� �Ӹ��� �׸� 
}

void pause(int* key) { // pŰ�� ������ ��� ������ �Ͻ� ���� 
	while (1) {
		if (*key == PAUSE) {
			gotoxy(MAP_X + (MAP_WIDTH / 2) - 9, MAP_Y, "< PAUSE : PRESS ANY key TO RESUME > ");
			Sleep(400);
			gotoxy(MAP_X + (MAP_WIDTH / 2) - 9, MAP_Y, "                                    ");
			Sleep(400);
		}
		else {
			draw_map();
			return;
		}
		if (_kbhit()) {

			do {
				*key = _getch();
			} while (*key == 224);
		}

	}
}

void game_over(int* key, int* dir, int* speed, int* length, int* score, int* x, int* y, int* food_x, int* food_y, int* last_score, int* best_score, int* stage, int* nextlimit, char* head, char* tail, char* laststage, int* lastitemnumber) { //�������� �Լ� 
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 6, MAP_Y + 5, "+----------------------+");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 6, MAP_Y + 6, "|      GAME OVER..     |");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 6, MAP_Y + 7, "+----------------------+");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 6, MAP_Y + 8, " YOUR SCORE : ");
	*last_score = *score;
	*laststage = *stage;
	printf("%d", *last_score);
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 6, MAP_Y + 9, " YOUR MAX STAGE : ");
	printf("%d", *laststage);
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 12, " Press any keys to restart.. ");

	if (*score > * best_score) {
		*best_score = *score;
		gotoxy(MAP_X + (MAP_WIDTH / 2) - 4, MAP_Y + 10, "�� BEST SCORE ��");
	}
	Sleep(500);
	while (_kbhit()) _getch();
	*key = _getch();
	title(key, dir, speed, length, score, x, y, food_x, food_y, last_score, best_score, stage, nextlimit, head, tail, laststage, lastitemnumber);
}


void status(int* x, int* y, int* food_x, int* food_y, int* length, int* key, int* speed, int* score) { //���� ������ ���� �ִ� �Լ� 
	gotoxy(MAP_X + MAP_WIDTH + 1, MAP_Y, "head= ");
	printf("%2d,%2d", x[0], y[0]);
	gotoxy(MAP_X + MAP_WIDTH + 1, MAP_Y + 1, "food= ");
	printf("%2d,%2d", *food_x, *food_y);
	gotoxy(MAP_X + MAP_WIDTH + 1, MAP_Y + 2, "leng= ");
	printf("%2d", *length);
	gotoxy(MAP_X + MAP_WIDTH + 1, MAP_Y + 3, "key= ");
	printf("%3d", *key);
	gotoxy(MAP_X + MAP_WIDTH + 1, MAP_Y + 4, "spd= ");
	printf("%3d", *speed);
	gotoxy(MAP_X + MAP_WIDTH + 1, MAP_Y + 6, "score= ");
	printf("%3d", *score);
}