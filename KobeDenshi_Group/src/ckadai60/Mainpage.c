/*
 * Mainpage.c
 *
 *  Created on: Jan 30, 2018
 *      Author: kagaya
 */
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

#include "../ckadai60/Queue.h"
#include "../ckadai60/Quick_Sort.h"
#include "../ckadai60/SelectSort.h"
#include "../ckadai60/Stack.h"
#include "../ckadai60/Tictactoe.h"
void MainPage()
{
	int option ;

		while(1)
		{

			switch(option)
			{
			case 1:
				// Ok
				printf("選択した番号1のスタック \n");
				Stackpage();
				break;
			case 2:
				// Ok
				printf("選択した番号2のキュー \n");
			    QueueMain();
				break;
			case 3:
				// OK
				printf("選択した番号3を選択しました Buuble Sort \n");
				 printf("\n");

				 TEst_Buble_Sort();
				break;
			case 4:
				// ok
				printf(" SelectSortに 4 を選択した \n");
				Test_Spead();
				printf("Finish Sorting");
				DisplaySelectSort();
				break;
			case 5:
				// ok
				printf("挿入ソート 5 を選択した \n");
				Test_InsertionSort();
				break;
			case 6:
				// ok
				printf("マージソート 6 を選択した \n");
				Test_Merge_Sort();
				break;
			case 7:
				//ok
				printf("Shell 7 を選択した \n");
				TestSpeedShell();
				break;
			case 8:
				//ok
				printf("Quick_Sort 8 を選択した \n");
				Test_Speed_Quick_Sort();
				break;
			case 9:
				//ok
				 View();
				 Get_Final_board();
				break;
			case 10:
				//ok
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");


				break;

			case 11:
				// ok
				exit(1);

			}
			// ok
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





		}// end of while

}// end of main
