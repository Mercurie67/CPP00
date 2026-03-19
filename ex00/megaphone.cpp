#include <iostream>

using namespace std;

int main(int ac, char *av[])
{
	int i = 1;
	if (ac < 2)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while(av[i])
		{
			int j = 0;
			while(av[i][j])
			{
				cout << (char)toupper(av[i][j]);
				j++;
			}
			i++;
			if (i < ac - 1)
				cout << " ";
		}
	}
	cout << "\n";
	return 0;
}
