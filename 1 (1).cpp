#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
int main(void)
{
	srand(time(NULL));
	for(int i = 0; i < 40; i++)
	{
		int num = 20+rand()%5;
		cout << num << endl;
	}
	system("pause"); 
}
