#include "main.h"

void PlayWithBot(Player* p1, Player* p2, Basket* b)
{
	p1->turn = "Player1 Turn";
	p2->turn = "Bot Turn";

	system("cls");
	while (1)
	{
		

		BotTakesStones(p2, b);
		if (b->total == 1)
		{
			p2->win++;
			break;
		}
		cout << "Bot이 " << p2-> selBasket << "번째 바구니에서 " << p2->selStone << "개의 돌을 가져감" << endl;
		
		PlayerTakesStones(p1, b);
		if (b->total == 1)
		{
			p1->win++;
			break;
		}
	
	}


}