﻿#include "stdafx.h"
using namespace std;

void printCashBalance(double cash, double high, double low);
void printCard(int cardNum);
void game(double& cash, double& ante, double& bank);
void help();

int main()
{
	try
	{
		//SCORING SYSTEM
		double highest = 0;
		double lowest = 30700.00;
		double cash = 700.00;							//Initial cash of the player
		double ante = 26.71;							//Cost of ante, or initial bet
		double bank = 30000.00;							//Total cash in bank, can be depleted,
														//A game over (win)

		int choice;
		bool exit = false;
		while (!exit)
		{
			if (cash > highest)
				highest = cash;
			if (cash < lowest)
				lowest = cash;
			cout << "\n\n"
				<< "\n\tMenu\n"
				<< "\n\t 1 : Print All Cards"
				<< "\n\t 2 : Play a hand (requires ante of: $" << setprecision(2) << fixed << ante << ")"
				<< "\n\t 3 : Print Cash Balance"
				<< "\n\t 4 : Help"
				<< "\n\t 5 : Quit"
				<< "\n\n\t ->";
			cin >> choice;
			switch (choice)
			{
			case 1:
				printCard(-1);
				break;
			case 2:
				break;
			case 3:
				printCashBalance(cash, highest, lowest);
				break;
			case 4:
				help();
				break;
			case 5:
				cout << "\n\tGoodbye!\n\n";
				exit = true;
				break;
			default:
				break;
			}
		}
	}
	catch (exception&e)
	{
		cout << "\n\tERROR: MAIN\n\n";
	}
	system("pause");
	return 0;
}

void game(double& cash, double& ante, double& bank)
{
	try
	{
		if (cash >= ante)
		{
			//ARRAYS 
			vector<Card> deck;							//Array of cards for the Deck
			vector<Card> hand;							//Array of cards for the Player
			vector<Card> dealer;							//Array of cards for the Dealer

			bool fold = false;
			while (!fold)
			{
				cash = cash - ante;

			}
		}
		else
			cout << "\n\tNot enough funds to ante..\n\n";
	}
	catch (exception&e)
	{
		cout << "\n\tERROR: GAME\n\n";
	}
}

void printCashBalance(double cash, double high, double low)
{
	try
	{
		cout << "\n\n"
			<< "\n\tCurrent Balance: $" << cash
			<< "\n\t"
			<< "\n\tHighest Balance: $" << high
			<< "\n\t"
			<< "\n\tLowest Balance: $" << low;
	}
	catch (exception&e)
	{
		cout << "\n\tERROR: PRINT BALANCE\n\n";
	}
}
void help()
{
	cout
		<< "\n\tThis program is a poker game of the five"
		<< "\n\tcard draw variant.  The player starts w-"
		<< "\n\tith $700 to make bets with.  Each game  "
		<< "\n\trequires an ante of $26.71 to play the  "
		<< "\n\thand.  The game follows conventional ru-"
		<< "\n\tles.";
}

void printCard(int cardNum)							//I really wish I did this programatically
{
	try
	{
		//ASCII ART
		list<string> card[53];
		card[1].push_back(" _________");
		card[1].push_back("|A        |");
		card[1].push_back("|         |");
		card[1].push_back("|         |");
		card[1].push_back("|    S    |");
		card[1].push_back("|         |");
		card[1].push_back("|         |");
		card[1].push_back("|        A|");
		card[1].push_back(" ========= ");

		card[2].push_back(" _________");
		card[2].push_back("|2        |");
		card[2].push_back("|         |");
		card[2].push_back("|         |");
		card[2].push_back("|    S    |");
		card[2].push_back("|         |");
		card[2].push_back("|         |");
		card[2].push_back("|        2|");
		card[2].push_back(" ========= ");

		card[3].push_back(" _________");
		card[3].push_back("|3        |");
		card[3].push_back("|         |");
		card[3].push_back("|         |");
		card[3].push_back("|    S    |");
		card[3].push_back("|         |");
		card[3].push_back("|         |");
		card[3].push_back("|        3|");
		card[3].push_back(" ========= ");

		card[4].push_back(" _________");
		card[4].push_back("|4        |");
		card[4].push_back("|         |");
		card[4].push_back("|         |");
		card[4].push_back("|    S    |");
		card[4].push_back("|         |");
		card[4].push_back("|         |");
		card[4].push_back("|        4|");
		card[4].push_back(" ========= ");

		card[5].push_back(" _________");
		card[5].push_back("|5        |");
		card[5].push_back("|         |");
		card[5].push_back("|         |");
		card[5].push_back("|    S    |");
		card[5].push_back("|         |");
		card[5].push_back("|         |");
		card[5].push_back("|        5|");
		card[5].push_back(" ========= ");

		card[6].push_back(" _________");
		card[6].push_back("|6        |");
		card[6].push_back("|         |");
		card[6].push_back("|         |");
		card[6].push_back("|    S    |");
		card[6].push_back("|         |");
		card[6].push_back("|         |");
		card[6].push_back("|        6|");
		card[6].push_back(" ========= ");

		card[7].push_back(" _________");
		card[7].push_back("|7        |");
		card[7].push_back("|         |");
		card[7].push_back("|         |");
		card[7].push_back("|    S    |");
		card[7].push_back("|         |");
		card[7].push_back("|         |");
		card[7].push_back("|        7|");
		card[7].push_back(" ========= ");

		card[8].push_back(" _________");
		card[8].push_back("|8        |");
		card[8].push_back("|         |");
		card[8].push_back("|         |");
		card[8].push_back("|    S    |");
		card[8].push_back("|         |");
		card[8].push_back("|         |");
		card[8].push_back("|        8|");
		card[8].push_back(" ========= ");

		card[9].push_back(" _________");
		card[9].push_back("|9        |");
		card[9].push_back("|         |");
		card[9].push_back("|         |");
		card[9].push_back("|    S    |");
		card[9].push_back("|         |");
		card[9].push_back("|         |");
		card[9].push_back("|        9|");
		card[9].push_back(" ========= ");

		card[10].push_back(" _________");
		card[10].push_back("|10       |");
		card[10].push_back("|         |");
		card[10].push_back("|         |");
		card[10].push_back("|    S    |");
		card[10].push_back("|         |");
		card[10].push_back("|         |");
		card[10].push_back("|       10|");
		card[10].push_back(" ========= ");

		card[11].push_back(" _________");
		card[11].push_back("|J        |");
		card[11].push_back("|         |");
		card[11].push_back("|         |");
		card[11].push_back("|    S    |");
		card[11].push_back("|         |");
		card[11].push_back("|         |");
		card[11].push_back("|        J|");
		card[11].push_back(" ========= ");

		card[12].push_back(" _________");
		card[12].push_back("|Q        |");
		card[12].push_back("|         |");
		card[12].push_back("|         |");
		card[12].push_back("|    S    |");
		card[12].push_back("|         |");
		card[12].push_back("|         |");
		card[12].push_back("|        Q|");
		card[12].push_back(" ========= ");

		card[13].push_back(" _________");
		card[13].push_back("|K        |");
		card[13].push_back("|         |");
		card[13].push_back("|         |");
		card[13].push_back("|    S    |");
		card[13].push_back("|         |");
		card[13].push_back("|         |");
		card[13].push_back("|        K|");
		card[13].push_back(" ========= ");

		card[14].push_back(" _________");
		card[14].push_back("|A        |");
		card[14].push_back("|         |");
		card[14].push_back("|         |");
		card[14].push_back("|    H    |");
		card[14].push_back("|         |");
		card[14].push_back("|         |");
		card[14].push_back("|        A|");
		card[14].push_back(" ========= ");

		card[15].push_back(" _________");
		card[15].push_back("|2        |");
		card[15].push_back("|         |");
		card[15].push_back("|         |");
		card[15].push_back("|    H    |");
		card[15].push_back("|         |");
		card[15].push_back("|         |");
		card[15].push_back("|        2|");
		card[15].push_back(" ========= ");

		card[16].push_back(" _________");
		card[16].push_back("|3        |");
		card[16].push_back("|         |");
		card[16].push_back("|         |");
		card[16].push_back("|    H    |");
		card[16].push_back("|         |");
		card[16].push_back("|         |");
		card[16].push_back("|        3|");
		card[16].push_back(" ========= ");

		card[17].push_back(" _________");
		card[17].push_back("|4        |");
		card[17].push_back("|         |");
		card[17].push_back("|         |");
		card[17].push_back("|    H    |");
		card[17].push_back("|         |");
		card[17].push_back("|         |");
		card[17].push_back("|        4|");
		card[17].push_back(" ========= ");

		card[18].push_back(" _________");
		card[18].push_back("|5        |");
		card[18].push_back("|         |");
		card[18].push_back("|         |");
		card[18].push_back("|    H    |");
		card[18].push_back("|         |");
		card[18].push_back("|         |");
		card[18].push_back("|        5|");
		card[18].push_back(" ========= ");

		card[19].push_back(" _________");
		card[19].push_back("|6        |");
		card[19].push_back("|         |");
		card[19].push_back("|         |");
		card[19].push_back("|    H    |");
		card[19].push_back("|         |");
		card[19].push_back("|         |");
		card[19].push_back("|        6|");
		card[19].push_back(" ========= ");

		card[20].push_back(" _________");
		card[20].push_back("|7        |");
		card[20].push_back("|         |");
		card[20].push_back("|         |");
		card[20].push_back("|    H    |");
		card[20].push_back("|         |");
		card[20].push_back("|         |");
		card[20].push_back("|        7|");
		card[20].push_back(" ========= ");

		card[21].push_back(" _________");
		card[21].push_back("|8        |");
		card[21].push_back("|         |");
		card[21].push_back("|         |");
		card[21].push_back("|    H    |");
		card[21].push_back("|         |");
		card[21].push_back("|         |");
		card[21].push_back("|        8|");
		card[21].push_back(" ========= ");

		card[22].push_back(" _________");
		card[22].push_back("|9        |");
		card[22].push_back("|         |");
		card[22].push_back("|         |");
		card[22].push_back("|    H    |");
		card[22].push_back("|         |");
		card[22].push_back("|         |");
		card[22].push_back("|        9|");
		card[22].push_back(" ========= ");

		card[23].push_back(" _________");
		card[23].push_back("|10       |");
		card[23].push_back("|         |");
		card[23].push_back("|         |");
		card[23].push_back("|    H    |");
		card[23].push_back("|         |");
		card[23].push_back("|         |");
		card[23].push_back("|       10|");
		card[23].push_back(" ========= ");

		card[24].push_back(" _________");
		card[24].push_back("|J        |");
		card[24].push_back("|         |");
		card[24].push_back("|         |");
		card[24].push_back("|    H    |");
		card[24].push_back("|         |");
		card[24].push_back("|         |");
		card[24].push_back("|        J|");
		card[24].push_back(" ========= ");

		card[25].push_back(" _________");
		card[25].push_back("|Q        |");
		card[25].push_back("|         |");
		card[25].push_back("|         |");
		card[25].push_back("|    H    |");
		card[25].push_back("|         |");
		card[25].push_back("|         |");
		card[25].push_back("|        Q|");
		card[25].push_back(" ========= ");

		card[26].push_back(" _________");
		card[26].push_back("|K        |");
		card[26].push_back("|         |");
		card[26].push_back("|         |");
		card[26].push_back("|    H    |");
		card[26].push_back("|         |");
		card[26].push_back("|         |");
		card[26].push_back("|        K|");
		card[26].push_back(" ========= ");

		card[27].push_back(" _________");
		card[27].push_back("|A        |");
		card[27].push_back("|         |");
		card[27].push_back("|         |");
		card[27].push_back("|    D    |");
		card[27].push_back("|         |");
		card[27].push_back("|         |");
		card[27].push_back("|        A|");
		card[27].push_back(" ========= ");

		card[28].push_back(" _________");
		card[28].push_back("|2        |");
		card[28].push_back("|         |");
		card[28].push_back("|         |");
		card[28].push_back("|    D    |");
		card[28].push_back("|         |");
		card[28].push_back("|         |");
		card[28].push_back("|        2|");
		card[28].push_back(" ========= ");

		card[29].push_back(" _________");
		card[29].push_back("|3        |");
		card[29].push_back("|         |");
		card[29].push_back("|         |");
		card[29].push_back("|    D    |");
		card[29].push_back("|         |");
		card[29].push_back("|         |");
		card[29].push_back("|        3|");
		card[29].push_back(" ========= ");

		card[30].push_back(" _________");
		card[30].push_back("|4        |");
		card[30].push_back("|         |");
		card[30].push_back("|         |");
		card[30].push_back("|    D    |");
		card[30].push_back("|         |");
		card[30].push_back("|         |");
		card[30].push_back("|        4|");
		card[30].push_back(" ========= ");

		card[31].push_back(" _________");
		card[31].push_back("|5        |");
		card[31].push_back("|         |");
		card[31].push_back("|         |");
		card[31].push_back("|    D    |");
		card[31].push_back("|         |");
		card[31].push_back("|         |");
		card[31].push_back("|        5|");
		card[31].push_back(" ========= ");

		card[32].push_back(" _________");
		card[32].push_back("|6        |");
		card[32].push_back("|         |");
		card[32].push_back("|         |");
		card[32].push_back("|    D    |");
		card[32].push_back("|         |");
		card[32].push_back("|         |");
		card[32].push_back("|        6|");
		card[32].push_back(" ========= ");

		card[33].push_back(" _________");
		card[33].push_back("|7        |");
		card[33].push_back("|         |");
		card[33].push_back("|         |");
		card[33].push_back("|    D    |");
		card[33].push_back("|         |");
		card[33].push_back("|         |");
		card[33].push_back("|        7|");
		card[33].push_back(" ========= ");

		card[34].push_back(" _________");
		card[34].push_back("|8        |");
		card[34].push_back("|         |");
		card[34].push_back("|         |");
		card[34].push_back("|    D    |");
		card[34].push_back("|         |");
		card[34].push_back("|         |");
		card[34].push_back("|        8|");
		card[34].push_back(" ========= ");

		card[35].push_back(" _________");
		card[35].push_back("|9        |");
		card[35].push_back("|         |");
		card[35].push_back("|         |");
		card[35].push_back("|    D    |");
		card[35].push_back("|         |");
		card[35].push_back("|         |");
		card[35].push_back("|        9|");
		card[35].push_back(" ========= ");

		card[36].push_back(" _________");
		card[36].push_back("|10       |");
		card[36].push_back("|         |");
		card[36].push_back("|         |");
		card[36].push_back("|    D    |");
		card[36].push_back("|         |");
		card[36].push_back("|         |");
		card[36].push_back("|       10|");
		card[36].push_back(" ========= ");

		card[37].push_back(" _________");
		card[37].push_back("|J        |");
		card[37].push_back("|         |");
		card[37].push_back("|         |");
		card[37].push_back("|    D    |");
		card[37].push_back("|         |");
		card[37].push_back("|         |");
		card[37].push_back("|        J|");
		card[37].push_back(" ========= ");

		card[38].push_back(" _________");
		card[38].push_back("|Q        |");
		card[38].push_back("|         |");
		card[38].push_back("|         |");
		card[38].push_back("|    D    |");
		card[38].push_back("|         |");
		card[38].push_back("|         |");
		card[38].push_back("|        Q|");
		card[38].push_back(" ========= ");

		card[39].push_back(" _________");
		card[39].push_back("|K        |");
		card[39].push_back("|         |");
		card[39].push_back("|         |");
		card[39].push_back("|    D    |");
		card[39].push_back("|         |");
		card[39].push_back("|         |");
		card[39].push_back("|        K|");
		card[39].push_back(" ========= ");

		card[40].push_back(" _________");
		card[40].push_back("|J        |");
		card[40].push_back("|         |");
		card[40].push_back("|         |");
		card[40].push_back("|    C    |");
		card[40].push_back("|         |");
		card[40].push_back("|         |");
		card[40].push_back("|        J|");
		card[40].push_back(" ========= ");

		card[41].push_back(" _________");
		card[41].push_back("|2        |");
		card[41].push_back("|         |");
		card[41].push_back("|         |");
		card[41].push_back("|    C    |");
		card[41].push_back("|         |");
		card[41].push_back("|         |");
		card[41].push_back("|        2|");
		card[41].push_back(" ========= ");

		card[42].push_back(" _________");
		card[42].push_back("|3        |");
		card[42].push_back("|         |");
		card[42].push_back("|         |");
		card[42].push_back("|    C    |");
		card[42].push_back("|         |");
		card[42].push_back("|         |");
		card[42].push_back("|        3|");
		card[42].push_back(" ========= ");

		card[43].push_back(" _________");
		card[43].push_back("|4        |");
		card[43].push_back("|         |");
		card[43].push_back("|         |");
		card[43].push_back("|    C    |");
		card[43].push_back("|         |");
		card[43].push_back("|         |");
		card[43].push_back("|        4|");
		card[43].push_back(" ========= ");

		card[44].push_back(" _________");
		card[44].push_back("|5        |");
		card[44].push_back("|         |");
		card[44].push_back("|         |");
		card[44].push_back("|    C    |");
		card[44].push_back("|         |");
		card[44].push_back("|         |");
		card[44].push_back("|        5|");
		card[44].push_back(" ========= ");

		card[45].push_back(" _________");
		card[45].push_back("|6        |");
		card[45].push_back("|         |");
		card[45].push_back("|         |");
		card[45].push_back("|    C    |");
		card[45].push_back("|         |");
		card[45].push_back("|         |");
		card[45].push_back("|        6|");
		card[45].push_back(" ========= ");

		card[46].push_back(" _________");
		card[46].push_back("|7        |");
		card[46].push_back("|         |");
		card[46].push_back("|         |");
		card[46].push_back("|    C    |");
		card[46].push_back("|         |");
		card[46].push_back("|         |");
		card[46].push_back("|        7|");
		card[46].push_back(" ========= ");

		card[47].push_back(" _________");
		card[47].push_back("|8        |");
		card[47].push_back("|         |");
		card[47].push_back("|         |");
		card[47].push_back("|    C    |");
		card[47].push_back("|         |");
		card[47].push_back("|         |");
		card[47].push_back("|        8|");
		card[47].push_back(" ========= ");

		card[48].push_back(" _________");
		card[48].push_back("|9        |");
		card[48].push_back("|         |");
		card[48].push_back("|         |");
		card[48].push_back("|    C    |");
		card[48].push_back("|         |");
		card[48].push_back("|         |");
		card[48].push_back("|        9|");
		card[48].push_back(" ========= ");

		card[49].push_back(" _________");
		card[49].push_back("|10       |");
		card[49].push_back("|         |");
		card[49].push_back("|         |");
		card[49].push_back("|    C    |");
		card[49].push_back("|         |");
		card[49].push_back("|         |");
		card[49].push_back("|       10|");
		card[49].push_back(" ========= ");

		card[50].push_back(" _________");
		card[50].push_back("|j        |");
		card[50].push_back("|         |");
		card[50].push_back("|         |");
		card[50].push_back("|    C    |");
		card[50].push_back("|         |");
		card[50].push_back("|         |");
		card[50].push_back("|        J|");
		card[50].push_back(" ========= ");

		card[51].push_back(" _________");
		card[51].push_back("|Q        |");
		card[51].push_back("|         |");
		card[51].push_back("|         |");
		card[51].push_back("|    C    |");
		card[51].push_back("|         |");
		card[51].push_back("|         |");
		card[51].push_back("|        Q|");
		card[51].push_back(" ========= ");

		card[52].push_back(" _________");
		card[52].push_back("|K        |");
		card[52].push_back("|         |");
		card[52].push_back("|         |");
		card[52].push_back("|    C    |");
		card[52].push_back("|         |");
		card[52].push_back("|         |");
		card[52].push_back("|        K|");
		card[52].push_back(" ========= ");

		if (cardNum < 0)
		{
			int count = 0;
			cout << "\n\ttest card output : \n\n";
			for (int i = 0; i < 52; i++)
				for (auto v : card[i])
				{
					std::cout << v << "\n";
					count++;
					if (count > 26)
					{
						cout << "\n\n";
						system("pause");
						cout << "\n\n";
						count = 0;
					}
				}
		}
		else
			for (auto v : card[cardNum])
				std::cout << v << "\n";
	}
	catch (exception&e)
	{
		cout << "\n\tERROR: PRINT CARD\n\n";
	}
}
