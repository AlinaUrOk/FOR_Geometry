#include <iostream>
#include "ConsoleApplication1.h"
using namespace std;

void coutPryam()
{
	{
		for (int height = 1; height <= 5; height++)
		{
			for (int width = 1; width <= 30; width++)
			{
				if (width > 1 && width < 30 && height > 1 && height < 5)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}

			}
			cout << endl;
		}

	}
}

void coutPrTr()
{
	{
		for (int height = 1; height <= 6; height++)
		{
			for (int width = 1; width <= height; width++)
			{
				if (width > 1 && width < height && height > 1 && height < 6)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}

			}
			cout << endl;
		}

	}
}

void coutTre()
{
	cout << "     *     " << endl;
	cout << "    **     " << endl;
	cout << "   *  *    " << endl;
	cout << "  *    *     " << endl;
	cout << " *      *    " << endl;
	cout << "**********    " << endl;
}
void coutRomb()
{
	cout << "     *     " << endl;
	cout << "    **     " << endl;
	cout << "   *  *    " << endl;
	cout << "  *    *     " << endl;
	cout << " *      *    " << endl;
	cout << "*        *    " << endl;
	cout << " *      *    " << endl;
	cout << "  *    *    " << endl;
	cout << "   *  *    " << endl;
	cout << "    **     " << endl;
	cout << "     *     " << endl;
}
