#ifndef MY_ALPHA
#define MY_ALPHA

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	char letter;
	const int matrix = 9;
	char lar[matrix][matrix];

	//init_matrix();

	for(int i = 0; i < matrix; i++)
	{
		for(int j = 0; j < matrix; j++)
		{
			lar[i][j] = 'S';
		}
	}

	for(int i = 0; i < matrix; i++)
	{
		for(int j = 0; j < matrix; j++)
		{
			if((i*j) % 9 == 0)
			{
				cout << i << " " << j << " " << lar[i][j] << " " << "\n";
			}
		}
	}




	


	

	//populate_matrix(letter);

	return 0;
}


#endif
