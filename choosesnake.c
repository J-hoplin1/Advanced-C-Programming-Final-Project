
/*

작성자 : B889047 윤준호

Customized by J-Hoplin

Reference : Snake Game , https://m.blog.naver.com/azure0777/220282982693

Version Management : https://github.com/J-hoplin1/C_Programming_Game_Project

* Version was managed as function unit

*/
#include "prototypes.h"

//캐릭터 고를수 있는 함수
void choosesnake(char* head, char* tail)
{
	int loop = 0;
	int key = 0;
	while (_kbhit()) _getch();
	int i = 0;
	int j = 0;
	draw_map();
	for (i = MAP_Y + 1; i < MAP_Y + MAP_HEIGHT - 1; i++) {
		for (j = MAP_X + 1; j < MAP_X + MAP_WIDTH - 1; j++) gotoxy(j, i, "  ");
	}
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 3, "+--------------------------+");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 4, "|     Select Character     |");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 5, "+--------------------------+");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 7, "Selected Head : ");
	printf("%s", head);
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 8, "Selected Tail : ");
	printf("%s", tail);
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 10, "	   Select Options		");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 9, MAP_Y + 13, " Head : 1 . ◇ 2 . ▣ 3. ≪ 4 . ∑");

	key = _getch();
	switch (key)
	{
	case 49:
		strcpy(head, "◇");
		break;
	case 50:
		strcpy(head, "▣");
		break;
	case 51:
		strcpy(head, "≪");
		break;
	case 52:
		strcpy(head, "∑");
		break;
	default:
		break;
	}
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 3, "+--------------------------+");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 4, "|     Select Character     |");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 5, "+--------------------------+");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 7, "Selected Head : ");
	printf("%s", head);
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 8, "Selected Tail : ");
	printf("%s", tail);
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 7, MAP_Y + 10, "	   Select Options		");
	gotoxy(MAP_X + (MAP_WIDTH / 2) - 9, MAP_Y + 13, " Tail : 1 . □ 2 . た 3 . ♧ 4 . ♬");
	key = _getch();
	switch (key)
	{
	case 49:
		strcpy(tail, "□");
		break;
	case 50:
		strcpy(tail, "た");
		break;
	case 51:
		strcpy(tail, "♧");
		break;
	case 52:
		strcpy(tail, "♬");
		break;
	default:
		break;
	}

}