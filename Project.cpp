# include <iostream>
using namespace std;

void rules()
{
	cout << "\nRules of Game is given below :-\n\n";
	cout << "1_ There are 3 Lavels : i- Easy \t ii-Medium \t iii_Hard.\n";
	cout << "2_ You are suppose to search a word if you enter wrong 3 time consectively you lose the Game ...\n\n";
	
}

int catagoryOfGame()
{
	int a = 0;
	cout << "Four Catagory of Games :-\n i_ Food.\n ii_ Animals\n iii_ Metarial \n iv_ Sports.\n\n";
	cout << "Press\n\t 1 for Food.\n\t 2 for Animals.\n\t 3 for Metarial.\n\t 4 for Sports\n ==> ";
	cin >> a;
	if (a == 1)
	{
		cout << "Welcome for Food.\n";
	}
	else if (a == 2)
	{
		cout << "Welcome for Animals.\n";
	}
	else if (a == 3)
	{
		cout << "Welcome for Materials.\n";
	}
	else if (a == 4)
	{
		cout << "Welcome for Sports.\n";
	}
	else{
		cout << "Wrong input.\nSo by default select Food.\n";
		a = 1;
	}
	cout << endl;
	return a;
}

int lavelOfGame()
{
	int a = 0;
	cout << "Three Lavel of Games :-\n i_Easy.\n ii_Medium \n iii_Hard.\n\n";
	cout << "Press\n\t 1 for Easy.\n\t 2 for Medium.\n\t 3 for Hard.\n ==> ";
	cin >> a;
	if (a == 1)
	{
		cout << "Welcome for Easy.\n";
	}
	else if (a == 2)
	{
		cout << "Welcome for Medium.\n";
	}
	else if (a == 3)
	{
		cout << "Welcome for Hard.\n";
	}
	else{
		cout << "Wrong input.\nSo by default select Easy.\n";
		a = 1;
	}
	cout << endl;
	return a;
}




void food(char*arr)
{
	int size = 0; char n = {};

	for (int i = 0; arr[i] != '\0'; i++)
	{
		size++;
	}
	
	cout << "\nYou are Suppose to guess the word having " << size << " number of letters.\n";

	int b = 0, k = 0, l = 0, m = -1;
	char*in = new char[100];
	int tem = 0;
	do{
		m++;
		tem = 0;
		cout << "Enter : ";
		cin >> in[m];
		b = 0;
		n =  in[m];
		
		for (int i = 0; i < 100; i++)
		{
			if (n == in[i])
			{
				tem++;
			}
		}
		if (tem > 1)
		{
			cout << "Letter Repeat.\n";
		}
		else
		{


			for (int i = 0; i < size; i++)
			{
				if (arr[i] == n || arr[i] == n + 32 || arr[i] == n - 32)
				{
					cout << arr[i] << " ";
					k++;
				}
				else
				{
					cout << "* ";
					b++;
				}
			}

			if (b == size)
			{
				l++;
			}
			else
			{
				b = 0;
				l = 0;
			}
		}
		if (l == 3)
		{
			cout << "\nYou Enter 3 times Consective wrong input so you Lose The Game...\n\n";
			break;
		}
		cout << endl;
	} while (k != size);

	if (k == size)
	{
		cout << "Correct word is : ";
		for (int i = 0; i < size; i++)
		{
			cout << arr[i];
		}
		cout << endl;
		cout << "\t\tYou Sucessfully WON the GAME.\n\n";
	}
}

void animal(char*arr)
{
	int size = 0; char n = {};

	for (int i = 0; arr[i] != '\0'; i++)
	{
		size++;
	}

	cout << "\nYou are Suppose to guess the word having " << size << " number of letters.\n";

	int b = 0, k = 0, l = 0, m = -1;
	char*in = new char[100];
	int tem = 0;
	do{
		m++;
		cout << "Enter : ";
		cin >> in[m];
		b = 0;
		tem = 0;
		n = in[m];

		for (int i = 0; i < 100; i++)
		{
			if (n == in[i])
			{
				tem++;
			}
		}
		if (tem > 1)
		{
			cout << "Letter Repeat.\n";
		}
		else
		{


			for (int i = 0; i < size; i++)
			{
				if (arr[i] == n || arr[i] == n + 32 || arr[i] == n - 32)
				{
					cout << arr[i] << " ";
					k++;
				}
				else
				{
					cout << "* ";
					b++;
				}
			}

			if (b == size)
			{
				l++;
			}
			else
			{
				b = 0;
				l = 0;
			}
		}
		if (l == 3)
		{
			cout << "\nYou Enter 3 times Consective wrong input so you Lose The Game...\n\n";
			break;
		}
		cout << endl;
	} while (k != size);
	if (k == size)
	{
		cout << "Correct word is : ";
		for (int i = 0; i < size; i++)
		{
			cout << arr[i];
		}
		cout << endl;
		cout << "\t\tYou Sucessfully WON the GAME.\n\n";
	}

}

void material(char*arr)
{
	int size = 0; char n = {};

	for (int i = 0; arr[i] != '\0'; i++)
	{
		size++;
	}

	cout << "\nYou are Suppose to guess the word having " << size << " number of letters.\n";

	int b = 0, k = 0, l = 0, m = -1;
	char*in = new char[100];
	int tem = 0;
	do{
		m++;
		cout << "Enter : ";
		cin >> in[m];
		b = 0;
		tem = 0;
		n = in[m];

		for (int i = 0; i < 100; i++)
		{
			if (n == in[i])
			{
				tem++;
			}
		}
		if (tem > 1)
		{
			cout << "Letter Repeat.\n";
		}
		else
		{


			for (int i = 0; i < size; i++)
			{
				if (arr[i] == n || arr[i] == n + 32 || arr[i] == n - 32)
				{
					cout << arr[i] << " ";
					k++;
				}
				else
				{
					cout << "* ";
					b++;
				}
			}

			if (b == size)
			{
				l++;
			}
			else
			{
				b = 0;
				l = 0;
			}
		}
		if (l == 3)
		{
			cout << "\nYou Enter 3 times Consective wrong input so you Lose The Game...\n\n";
			break;
		}
		cout << endl;
	} while (k != size);
	if (k == size)
	{
		cout << "Correct word is : ";
		for (int i = 0; i < size; i++)
		{
			cout << arr[i];
		}
		cout << endl;
		cout << "\t\tYou Sucessfully WON the GAME.\n\n";
	}
}

void sports(char*arr)
{
	int size = 0; char n = {};

	for (int i = 0; arr[i] != '\0'; i++)
	{
		size++;
	}

	cout << "\nYou are Suppose to guess the word having " << size << " number of letters.\n";

	int b = 0, k = 0, l = 0, m = -1;
	char*in = new char[100];
	int tem = 0;
	
	
	do{
		m++;
		cout << "Enter : ";
		cin >> in[m];
		b = 0;
		tem = 0;
		n = in[m];

		for (int i = 0; i < 100; i++)
		{
			if (n == in[i])
			{
				tem++;
			}
		}
		if (tem > 1)
		{
			cout << "Letter Repeat.\n";
		}
		else
		{


			for (int i = 0; i < size; i++)
			{
				if (arr[i] == n || arr[i] == n + 32 || arr[i] == n - 32)
				{
					cout << arr[i] << " ";
					k++;
				}
				else
				{
					cout << "* ";
					b++;
				}
			}

			if (b == size)
			{
				l++;
			}
			else
			{
				b = 0;
				l = 0;
			}
		}
		if (l == 3)
		{
			cout << "\nYou Enter 3 times Consective wrong input so you Lose The Game...\n\n";
			break;
		}
	
		cout << endl;
	
	} while (k != size);
	
	if (k == size)
	{
		cout << "Correct word is : ";
		for (int i = 0; i < size; i++)
		{
			cout << arr[i];
		}
		cout << endl;
		cout << "\t\tYou Sucessfully WON the GAME.\n\n";
	}
}

int main()
{
	cout << "\t\t\t\tLets Play Hang Man Game...\n";
	int lavel = 0, catagory = 0, end = 0, count = 0;
	rules();
	do
	{

		lavel = lavelOfGame();

		catagory = catagoryOfGame();

		cout << endl;

		if (lavel == 1)
		{
			//Easy
			if (catagory == 1)
			{
				//Food
				food("Rice");
			}
			else if (catagory == 2)
			{
				//Animal 
				animal("Rat");

			}
			else if (catagory == 3)
			{
				//Material
				material("Fan");
			}
			else if (catagory == 4)
			{
				//sports
				sports("Bat");
			}
		}

		else if (lavel == 2)
		{
			//Medium
			if (catagory == 1)
			{
				//Food
				food("Bread");
			}
			else if (catagory == 2)
			{
				//Animal 
				animal("Rabbit");

			}
			else if (catagory == 3)
			{
				//Material
				material("Cattle");
			}
			else if (catagory == 4)
			{
				//sports
				sports("Wicket");
			}
		}

		else if (lavel == 3)
		{
			//Hard
			if (catagory == 1)
			{
				//Food
				food("Shawarma");
			}
			else if (catagory == 2)
			{
				//Animal 
				animal("Elephant");

			}
			else if (catagory == 3)
			{
				//Material
				material("Machine");
			}
			else if (catagory == 4)
			{
				//sports
				sports("FootBall");
			}
		}
			cout << "Press 0 to Exit the game.\nPress 1 to Play again.\nEnter : ";
			cin >> end;
			
			if (end == 0)
			{
				count++;
			}
			else if (end == 1)
			{
				cout << "Let's Start again.\n\n";
			}
			else
			{
				cout << "Wrong input.\nExit the game...\n";
				break;
			}
		
	} while (count != 1);
	cout << endl;
	cout << "Thanks for Playing Game...\n\n";
	return 0;
}