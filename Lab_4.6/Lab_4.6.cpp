// Lab_4.6.cpp
// < ������� ������ >
// ����������� ������ No 4.6
// ������� �����.
// ������ 5


#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, k;
	double S, P;
	i = 1;
	P = 1;

	while (i<=10)
	{
		S = 0;
		k = 1;

		while (k<=i)
		{
			S += 1 / k;
			k++;
		}

		P *= (i + S) / sqrt(S);
		
		i++;
	}

	cout << P << endl;
	
	i = 1;
	P = 1;

	do
	{
		S = 0;
		k = 1;
		
		do
		{
			S += 1 / k;
			
			k++;
		} while (k <= i);
		
		P *= (i + S) / sqrt(S);
		
		i++;
	} while (i <= 10);
	
	cout << P << endl;

	P = 1;

	for (int i = 1; i <= 10; i++)
	{
		S = 0;
		
		for (int k = 1; k <= i; k++)
		{
			S += 1 / k;
		}
		
		P *= (i + S) / sqrt(S);
	}
	
	cout << P << endl;

	P = 1;

	for (int i = 10; i >=1; i--)
	{
		S = 0;
		
		for (int k = i; k >=1; k--)
		{
			S += 1 / k;
		}
		
		P *= (i + S) / sqrt(S);
	}
	
	cout << P << endl;

	return 0;
}