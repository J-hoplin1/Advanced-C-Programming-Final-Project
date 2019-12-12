
/*

작성자 : B889047 윤준호

Customized by J-Hoplin

Reference : Snake Game , https://m.blog.naver.com/azure0777/220282982693

Version Management : https://github.com/J-hoplin1/C_Programming_Game_Project

* Version was managed as function unit

*/

#include "prototypes.h"




// Move axis point
void gotoxy(int x, int y, char* s) { //x값을 2x로 변경, 좌표값에 바로 문자열을 입력할 수 있도록 printf함수 삽입  
	COORD pos = { 2 * x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%s", s);
}


////////////////////////////MAIN START//////////////////////////////
//아이템 설명해주는 함수

//메인함수
//Game Loop Start Here
int main(int args, char** argv) {
	int x[100], y[100]; //x,y 좌표값을 저장 총 100개 
	int food_x = 0, food_y = 0; //food의 좌표값을 저장 
	int length = 0; //몸길이를 기억 
	int speed = 0; //게임 속도 
	int score = 0; //점수 저장  --reset함수에 의해 초기화됨
	int best_score = 0; //최고 점수 저장 --reset함수에 의해 초기화 되지 않음 
	int last_score = 0; //마지막 점수 저장  --reset함수에 의해 초기화 되지 않음
	int dir = 0; //이동방향 저장 
	int key = 0; //입력받은 키 저장 
	int status_on = 0; // 개발자용 status 표시활성화 변수.. 게임중에 S키를 누르면 활성
	int last_stage = 0;//최근 플레이의 스테이지
	//Item Number
	int lastitemnumber = 0;
	//stage
	int stage = 0;
	//nex level limit score
	int nextlimit = 0;
	// default head as "ㅎ"
	char head[3] = "ㅎ";
	// default tail as "ㅇ"
	char tail[3] = "ㅇ";
	//compare speed
	int cpy_speed = speed;

	//타이틀 화면으로 전환
	title(&key, &dir, &speed, &length, &score, x, y, &food_x, &food_y, &last_score, &best_score, &stage, &nextlimit, head, tail, &last_stage, &lastitemnumber);



	while (1) {

		if (_kbhit()) do { key = _getch(); } while (key == 224); //키 입력받음
		Sleep(speed);

		switch (key) { //입력받은 키를 파악하고 실행  
		case LEFT:
		case RIGHT:
		case UP:
		case DOWN:
			if ((dir == LEFT && key != RIGHT) || (dir == RIGHT && key != LEFT) || (dir == UP && key != DOWN) ||
				(dir == DOWN && key != UP))//180회전이동을 방지하기 위해 필요. 
				dir = key;
			key = 0; // 키값을 저장하는 함수를 reset 
			break;
		case PAUSE: // P키를 누르면 일시정지 
			pause(key);
			break;
		case 115: //S키를 누르면 개발자용 status를 활성화 시킴  
			if (status_on == 0) status_on = 1;
			else status_on = 0;
			key = 0;
			break;
		case ESC: //ESC키를 누르면 프로그램 종료 
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
		if (status_on == 1) status(x, y, &food_x, &food_y, &length, &key, &speed, &score); // status표시 
	}
}




