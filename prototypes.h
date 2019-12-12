
/*

¿€º∫¿⁄ : B889047 ¿±¡ÿ»£

Customized by J-Hoplin

Reference : Snake Game , https://m.blog.naver.com/azure0777/220282982693

Version Management : https://github.com/J-hoplin1/C_Programming_Game_Project

* Version was managed as function unit

*/

#pragma once
#ifndef __prototype
#define __prototype
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define PAUSE 112
#define ESC 27

#define MAP_X 3
#define MAP_Y 2
#define MAP_WIDTH 50 // ø∑ 
#define MAP_HEIGHT 25

#define AD_BLOCKS 3



void gotoxy(int x, int y, char* s);
void explainitem(int* key, int* dir, int* speed, int* length, int* score, int* x, int* y, int* food_x, int* food_y, int* last_score, int* best_score, int* stage, int* nextlimit, char* head, char* tail, int* laststage, int* lastitemnumber);
void choosesnake(char* head, char* tail);
void title(int* key, int* dir, int* speed, int* length, int* score, int* x, int* y, int* food_x, int* food_y, int* last_score, int* best_score, int* stage, int* nextlimit, char* head, char* tail, int* laststage, int* lastitemnumber);
void reset(int* dir, int* speed, int* length, int* score, int* x, int* y, int* food_x, int* food_y, int* last_score, int* best_score, int* stage, int* nextlimit, int laststage, char* head, char* tail, int* lastitemnumber);
void draw_map(void);
void food(int* x, int* y, int* score, int* last_score, int* best_score, int* food_x, int* food_y, int* length, int* speed, int* stage, int* nextlimit, int* laststage, char* tail);
void food2(int* x, int* y, int* score, int* last_score, int* best_score, int* food_x, int* food_y, int* length, int* speed, int* stage, int* nextlimit, int* laststage);
void food3(int* x, int* y, int* score, int* last_score, int* best_score, int* food_x, int* food_y, int* length, int* speed, int* stage, int* nextlimit, int* laststage);
void food4(int* x, int* y, int* score, int* last_score, int* best_score, int* food_x, int* food_y, int* length, int* speed, int* stage, int* nextlimit, int* laststage);
void food5(int* x, int* y, int* score, int* last_score, int* best_score, int* food_x, int* food_y, int* length, int* speed, int* stage, int* nextlimit, int* laststage);
void food6(int* x, int* y, int* score, int* last_score, int* best_score, int* food_x, int* food_y, int* length, int* speed, int* stage, int* nextlimit, int* laststage);
void selectitem(int* key, int* dir, int* speed, int* length, int* score, int* x, int* y, int* food_x, int* food_y, int* last_score, int* best_score, int* stage, int* nextlimit, char* head, char* tail, int* laststage, int* lastitemnumber);
void move(int* key, int* dir, int* speed, int* length, int* score, int* x, int* y, int* food_x, int* food_y, int* last_score, int* best_score, int* stage, int* nextlimit, char* head, char* tail, int* laststage, int* lastitemnumber);
void pause(int* key);
void game_over(int* key, int* dir, int* speed, int* length, int* score, int* x, int* y, int* food_x, int* food_y, int* last_score, int* best_score, int* stage, int* nextlimit, char* head, char* tail, char* laststage, int* lastitemnumber);
void status(int* x, int* y, int* food_x, int* food_y, int* length, int* key, int* speed, int* score);

#endif // !__prototype
