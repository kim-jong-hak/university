#include <iostream>
#include <string>
using namespace std;
int gmae(int soled);
int battle(int input,int computer);

double winning_rate = 0;
int main() 
{
	//유저들이 어떤 정수를 입력하면 
	//n*n개의 별을 찍었으면 좋겠어요
	//구구단
	
	int computer = 1 + (rand() % 3);
	int input = 0;
	double tt = 0;
	srand(time(0));
	for (int run=0 ;;run++)
	{

		cout << "\n\n\n가위(1) 바위(2) 보(3) 골라주세요!--"<< "\n";
		
		
		cout << "\n 승률 :";
		if (run <= 0)
		{
			cout << "없음"<<"\n";
		}
		else 
		{
			cout << (winning_rate / run) * 100 << "\n"; //승률계산하기 
		}
		
		cin >> input;
		 computer = 1 + (rand() % 3);
		 gmae(input);
		 cout << "(님) vs " ;
		 gmae(computer);
		 cout << "(컴퓨터)";
		 battle(input, computer);

		
		 
		
	}
	

	return 0;
}
int gmae(int soled)
{
	switch (soled)
	{
	case 1 :
			cout << "가위";
			break;
	case 2 :
		cout << "바위";
		break;
	case 3 :
		cout << "보";
		break;
	}
	return 0;
}
int battle(int input, int computer)
{
	if (input == 1 && computer == 3)
	{
		++winning_rate;
		cout << "이겼습니다.\n";

	}
	else if (input == 2 && computer == 1)
	{
		++winning_rate;
		cout << "이겼습니다.\n";
	}
	else if (input == 3 && computer == 2)
	{
		++winning_rate;
		cout << "이겼습니다.\n";
	}
	else if (input == computer)
	{
		cout << "비겼습니다.\n";
	}
	else
	{
		cout << "패배했습니다.\n";
	}



	return 0;
}



