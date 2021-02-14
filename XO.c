#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<string.h>
#pragma warning(disable:4996)
void gotoxy(int x, int y) {
	COORD crd;
	crd.X = x;
	crd.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), crd);
}
int main()
{
	system("color 74");
	char game[5] = { "yes" }, Yes[5] = { "yes" };
	int score1 = 0, score2 = 0, x, x1, x2, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0, b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, b6 = 0, b7 = 0, b8 = 0, b9 = 0;
	int ch1, ch2, i = 0, j = 2, xo[3][3] = { 0 }, c = 0;
	char player1[100], player2[100];
	printf("player1 Please enter your name :\n");
	scanf("%s", player1);
	printf("player2 Please enter your name :\n");
	scanf("%s", player2);
	srand(time(0));
	x = 1 + rand() % 2;
	x1 = x;
	x2 = x % 2 + 1;
	if (x1 == 1)
		printf("%s:x\t\t%s:o\n", player1, player2);
	else
		printf("%s:o\t\t%s:x\n", player1, player2);
	printf("%s score: %d      %s score: %d", player1, score1, player2, score2);
	while (1) {
		a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0, b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, b6 = 0, b7 = 0, b8 = 0, b9 = 0;
		i = 0;j = 2, x1 = x, c = 0;
		memset(xo, 0, sizeof(xo));
		printf("\n\n             |              |");
		printf("\n             |              |");
		printf("\n             |              |");
		printf("\n  ________________________________________");
		printf("\n             |              |");
		printf("\n             |              |");
		printf("\n             |              |");
		printf("\n  ________________________________________");
		printf("\n             |              |");
		printf("\n             |              |");
		printf("\n             |              |\n");
		while (a2 + a5 + a8 != 3 && a1 + a6 + a7 != 3 && a3 + a4 + a9 != 3 && a1 + a2 + a3 != 3 && a4 + a5 + a6 != 3 && a7 + a8 + a9 != 3 && a1 + a5 + a9 != 3 && a3 + a5 + a7 != 3 && b1 + b6 + b7 != 3 && b2 + b5 + b8 != 3 && b3 + b4 + b9 != 3 && b1 + b2 + b3 != 3 && b4 + b5 + b6 != 3 && b7 + b8 + b9 != 3 && b1 + b5 + b9 != 3 && b3 + b5 + b7 != 3 && a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9 != 9) {
			if (c % 2 == 0) {
				gotoxy(50, 8);
				printf("%s please select your choice", player1);
			}
			else {
				gotoxy(50, 8);
				printf("%s please select your choice", player2);
			}
			if (i == 0 && j == 2) {
				gotoxy(7, 8);
			}
			if (i == 0 && j == 1) {
				gotoxy(7, 12);
			}
			if (i == 0 && j == 0) {
				gotoxy(7, 16);
			}
			if (i == 1 && j == 0) {
				gotoxy(20, 16);
			}
			if (i == 1 && j == 1) {
				gotoxy(20, 12);
			}
			if (i == 1 && j == 2) {
				gotoxy(20, 8);
			}
			if (i == 2 && j == 2) {
				gotoxy(35, 8);
			}
			if (i == 2 && j == 1) {
				gotoxy(35, 12);
			}
			if (i == 2 && j == 0) {
				gotoxy(35, 16);
			}
			do
			{
				ch1 = _getch();
				ch2 = 0;
				if (ch1 == 0xE0) {
					ch2 = _getch();
					switch (ch2)
					{
					case 72:
						if (j != 2)
							j++;
						else
							j = 0;
						while (xo[i][j] == 1)
							if (j != 2)
								j++;
							else
								j = 0;
						break;
					case 80:
						if (j != 0)
							j--;
						else
							j = 2;
						while (xo[i][j] == 1)
							if (j != 0)
								j--;
							else
								j = 0;
						break;
					case 75:
						if (i != 0)
							i--;
						else
							i = 2;
						while (xo[i][j] == 1)
							if (i != 0)
								i--;
							else
								i = 2;
						break;
					case 77:
						if (i != 2)
							i++;
						else
							i = 0;
						while (xo[i][j] == 1)
							if (i != 2)
								i++;
							else
								i = 2;
						break;
					}
					if (i == 0 && j == 2) {
						gotoxy(7, 8);
					}
					if (i == 0 && j == 1) {
						gotoxy(7, 12);
					}
					if (i == 0 && j == 0) {
						gotoxy(7, 16);
					}
					if (i == 1 && j == 0) {
						gotoxy(20, 16);
					}
					if (i == 1 && j == 1) {
						gotoxy(20, 12);
					}
					if (i == 1 && j == 2) {
						gotoxy(20, 8);
					}
					if (i == 2 && j == 2) {
						gotoxy(35, 8);
					}
					if (i == 2 && j == 1) {
						gotoxy(35, 12);
					}
					if (i == 2 && j == 0) {
						gotoxy(35, 16);
					}
				}
				else if (ch1 == 'q') {
					gotoxy(0, 20);
					printf("Interrupt Key Pressed\n");
					return 0;
				}
			} while (ch1 != 32);
			xo[i][j]++;
			if (x1 % 2 == 1 && i == 0 && j == 2) {
				gotoxy(7, 8);
				printf("x");
				a1++;
			}
			if (x1 % 2 == 1 && i == 0 && j == 1) {
				gotoxy(7, 12);
				printf("x");
				a2++;
			}
			if (x1 % 2 == 1 && i == 0 && j == 0) {
				gotoxy(7, 16);
				printf("x");
				a3++;
			}
			if (x1 % 2 == 1 && i == 1 && j == 0) {
				gotoxy(20, 16);
				printf("x");
				a4++;
			}
			if (x1 % 2 == 1 && i == 1 && j == 1) {
				gotoxy(20, 12);
				printf("x");
				a5++;
			}
			if (x1 % 2 == 1 && i == 1 && j == 2) {
				gotoxy(20, 8);
				printf("x");
				a6++;
			}
			if (x1 % 2 == 1 && i == 2 && j == 2) {
				gotoxy(35, 8);
				printf("x");
				a7++;
			}
			if (x1 % 2 == 1 && i == 2 && j == 1) {
				gotoxy(35, 12);
				printf("x");
				a8++;
			}
			if (x1 % 2 == 1 && i == 2 && j == 0) {
				gotoxy(35, 16);
				printf("x");
				a9++;
			}
			if (x1 % 2 == 0 && i == 0 && j == 2) {
				gotoxy(7, 8);
				printf("o");
				b1++;
			}
			if (x1 % 2 == 0 && i == 0 && j == 1) {
				gotoxy(7, 12);
				printf("o");
				b2++;
			}
			if (x1 % 2 == 0 && i == 0 && j == 0) {
				gotoxy(7, 16);
				printf("o");
				b3++;
			}
			if (x1 % 2 == 0 && i == 1 && j == 0) {
				gotoxy(20, 16);
				printf("o");
				b4++;
			}
			if (x1 % 2 == 0 && i == 1 && j == 1) {
				gotoxy(20, 12);
				printf("o");
				b5++;
			}
			if (x1 % 2 == 0 && i == 1 && j == 2) {
				gotoxy(20, 8);
				printf("o");
				b6++;
			}
			if (x1 % 2 == 0 && i == 2 && j == 2) {
				gotoxy(35, 8);
				printf("o");
				b7++;
			}
			if (x1 % 2 == 0 && i == 2 && j == 1) {
				gotoxy(35, 12);
				printf("o");
				b8++;
			}
			if (x1 % 2 == 0 && i == 2 && j == 0) {
				gotoxy(35, 16);
				printf("o");
				b9++;
			}
			x1++;
			c++;
		}
		if (a2 + a5 + a8 == 3 || a1 + a6 + a7 == 3 || a3 + a4 + a9 == 3 || a1 + a2 + a3 == 3 || a4 + a5 + a6 == 3 || a7 + a8 + a9 == 3 || a1 + a5 + a9 == 3 || a3 + a5 + a7 == 3) {
			gotoxy(0, 20);
			if (x == 1) {
				printf("%s ,you win the game !!!\n", player1);
				score1++;
			}
			else {
				printf("%s ,you win the game !!!\n", player2);
				score2++;
			}
		}
		else if (b1 + b6 + b7 == 3 || b2 + b5 + b8 == 3 || b3 + b4 + b9 == 3 || b1 + b2 + b3 == 3 || b4 + b5 + b6 == 3 || b7 + b8 + b9 == 3 || b1 + b5 + b9 == 3 || b3 + b5 + b7 == 3) {
			gotoxy(0, 20);
			if (x == 2) {
				printf("%s ,you win the game !!!\n", player1);
				score1++;
			}
			else {
				printf("%s ,you win the game !!!\n", player2);
				score2++;
			}
		}
		else if (a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9 == 9) {
			gotoxy(0, 20);
			printf("no body win the game\n");
		}
		gotoxy(0, 22);
		printf("Do you want to play again ?  ");
		scanf("%s", game);
		if (strcmp(game, Yes) == 0) {
			system("Cls");
			printf("player1 Please enter you'r name :\n");
			printf("%s\n", player1);
			printf("player2 Please enter you'r name :\n");
			printf("%s\n", player2);
			if (x == 1)
				printf("%s:x\t\t%s:o\n", player1, player2);
			else
				printf("%s:o\t\t%s:x\n", player1, player2);
			printf("%s score: %d      %s score: %d", player1, score1, player2, score2);
		}
		else
			return 0;
	}
}