/*
 * Mainpage.c
 *
 *  Created on: Jan 30, 2018
 *      Author: kagaya
 */
#include <time.h>
#include "SelectSort.h"
#include "Stack.h"
#include "Queue.h"
#include <ctype.h>
#include <string.h>
#include "Tictactoe.h"
#include <time.h>
void MainPage()
{
	int option ;

		while(1)
		{

			switch(option)
			{
			case 1:
				printf("選択した番号1のスタック \n");
				Stackpage();
				break;
			case 2:
				printf("選択した番号2のキュー \n");
			    QueueMain();
				break;
			case 3:
				printf("選択した番号3を選択しました Buuble Sort \n");
				 printf("Input Array: ");
				 display_Bubble_Sort();
				 printf("\n");

				 bubbleSort();
				 printf("\nOutput Array: ");
				 display_Bubble_Sort();
				break;
			case 4:
				printf(" SelectSortに 4 を選択した \n");
				Test_Spead();
				break;
			case 5:
				//
				break;
			case 6:
				//
				break;
			case 7:
				//
				break;
			case 8:
				//
				break;
			case 9:
				//
				 View();
				 Get_Final_board();
				break;
			case 10:
				//
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");


				break;

			case 11:

				exit(1);

			}
			printf("\t1〜10の数字を入力してください  11を終了する \n");
			printf("\tスタックを使用するには1を入力してください \n");
			printf("\tキューを使用するには2を入力してください \n");
			printf("\tBubble_Sortを使用するには3を入力してください \n");
			printf("\tSelectSortを使用するには4を入力してください \n");
			printf("\t挿入ソートを使用するには5を入力します \n ");
			printf("\tマージソートを使用するには6を入力してください \n");
			printf("\tシェルソートを使用するには7を入力してください \n");
			printf("\tQuick_Sortを使用するには8を入力してください \n");
			printf("\ttictactoeを再生するには9を入力してください \n ");
			printf("\tスペースを空けるメインページをクリアする 10を入力してください \n");
			printf("\t11プログラムを終了する\n1");
			// add more the display to the the work here;

			// need to refactor this to check the letter ;
			printf("番号を入力してください ");scanf("%d",&option);
			if(option <= 10)
			{
				printf("有効な番号を入力してください1  -  10 \n");
			}
			else if (option == 11)
			{
				printf("デモを使用していただきありがとうございます \n");
			}





		}

}
