
/*

작성자 : B889047 윤준호

Customized by J-Hoplin

Reference : Snake Game , https://m.blog.naver.com/azure0777/220282982693

Version Management : https://github.com/J-hoplin1/C_Programming_Game_Project

* Version was managed as function unit

*/
#include "prototypes.h"


//아이템 설명
void explainitem(int* key, int* dir, int* speed, int* length, int* score, int* x, int* y, int* food_x, int* food_y, int* last_score, int* best_score, int* stage, int* nextlimit, char* head, char* tail, int* laststage, int* lastitemnumber)
{
	int loop = 0;
	while (_kbhit()) _getch();
	int i = 0;
	int j = 0;
	draw_map();
	for (i = MAP_Y + 1; i < MAP_Y + MAP_HEIGHT - 1; i++) { // 맵 테두리 안쪽을 빈칸으로 채움 
		for (j = MAP_X + 1; j < MAP_X + MAP_WIDTH - 1; j++) gotoxy(j, i, "  ");
	}
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 3, "+--------------------------+");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 4, "|     Item Information     |");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 5, "+--------------------------+");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 8, "ㅇ : Add 10 points and add 1 tail");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 10, "▥ : Add 10 points and add 1 tail. Speed  up : 10");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 12, "♧ : Add 20 points and add 2 tails. Speed up : 20");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 14, "￥ : Add 20 points and add 4 tails.Speed down : 15");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 16, "$  : Add 30 points. Speed down : 10");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 18, "∞ : Add 30 points. Speed up : 20");
	while (_kbhit()) _getch();
	*key = _getch();
	title(key, dir, speed, length, score, x, y, food_x, food_y, last_score, best_score, stage, nextlimit, head, tail, laststage, lastitemnumber);
}