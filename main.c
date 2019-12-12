
/*

�ۼ��� : B889047 ����ȣ

Customized by J-Hoplin

Reference : Snake Game , https://m.blog.naver.com/azure0777/220282982693

Version Management : https://github.com/J-hoplin1/C_Programming_Game_Project

* Version was managed as function unit

*/

#include "prototypes.h"




// Move axis point
void gotoxy(int x, int y, char* s) { //x���� 2x�� ����, ��ǥ���� �ٷ� ���ڿ��� �Է��� �� �ֵ��� printf�Լ� ����  
	COORD pos = { 2 * x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%s", s);
}


////////////////////////////MAIN START//////////////////////////////
//������ �������ִ� �Լ�

//�����Լ�
//Game Loop Start Here
int main(int args, char** argv) {
	int x[100], y[100]; //x,y ��ǥ���� ���� �� 100�� 
	int food_x = 0, food_y = 0; //food�� ��ǥ���� ���� 
	int length = 0; //�����̸� ��� 
	int speed = 0; //���� �ӵ� 
	int score = 0; //���� ����  --reset�Լ��� ���� �ʱ�ȭ��
	int best_score = 0; //�ְ� ���� ���� --reset�Լ��� ���� �ʱ�ȭ ���� ���� 
	int last_score = 0; //������ ���� ����  --reset�Լ��� ���� �ʱ�ȭ ���� ����
	int dir = 0; //�̵����� ���� 
	int key = 0; //�Է¹��� Ű ���� 
	int status_on = 0; // �����ڿ� status ǥ��Ȱ��ȭ ����.. �����߿� SŰ�� ������ Ȱ��
	int last_stage = 0;//�ֱ� �÷����� ��������
	//Item Number
	int lastitemnumber = 0;
	//stage
	int stage = 0;
	//nex level limit score
	int nextlimit = 0;
	// default head as "��"
	char head[3] = "��";
	// default tail as "��"
	char tail[3] = "��";
	//compare speed
	int cpy_speed = speed;

	//Ÿ��Ʋ ȭ������ ��ȯ
	title(&key, &dir, &speed, &length, &score, x, y, &food_x, &food_y, &last_score, &best_score, &stage, &nextlimit, head, tail, &last_stage, &lastitemnumber);



	while (1) {

		if (_kbhit()) do { key = _getch(); } while (key == 224); //Ű �Է¹���
		Sleep(speed);

		switch (key) { //�Է¹��� Ű�� �ľ��ϰ� ����  
		case LEFT:
		case RIGHT:
		case UP:
		case DOWN:
			if ((dir == LEFT && key != RIGHT) || (dir == RIGHT && key != LEFT) || (dir == UP && key != DOWN) ||
				(dir == DOWN && key != UP))//180ȸ���̵��� �����ϱ� ���� �ʿ�. 
				dir = key;
			key = 0; // Ű���� �����ϴ� �Լ��� reset 
			break;
		case PAUSE: // PŰ�� ������ �Ͻ����� 
			pause(key);
			break;
		case 115: //SŰ�� ������ �����ڿ� status�� Ȱ��ȭ ��Ŵ  
			if (status_on == 0) status_on = 1;
			else status_on = 0;
			key = 0;
			break;
		case ESC: //ESCŰ�� ������ ���α׷� ���� 
			exit(0);
		}
		move(&key, &dir, &speed, &length, &score, x, y, &food_x, &food_y, &last_score, &best_score, &stage, &nextlimit, head, tail, &last_stage, &lastitemnumber);
		if (score >= nextlimit)
		{
			stage += 1;
			nextlimit += 100;
			if ((cpy_speed -= 10) != 0)
			{
				speed -= 10;
			}
		}
		if (status_on == 1) status(x, y, &food_x, &food_y, &length, &key, &speed, &score); // statusǥ�� 
	}
}




