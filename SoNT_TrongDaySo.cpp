#include <iostream>
using namespace std;
bool soNguyenTo(int);


int main()
{
	int n; 
	cout << "Nhap so can kiem tra?!" << endl;
	cin >> n;
	int i;
	int c = n;
    for (i = 0; c > 0; i++) 
	c = c/10;
    cout <<"So chu so: " <<i <<endl;
	int q= 0;
	while (q<i)
	{
	q++;
	int t=n%10;
	if (soNguyenTo(t) == true)
	{
		cout << "So " << n << " chua so nguyen to\n";
		break;
	}
	else
	{
		cout << "So " << n << " khong chua so nguyen to\n";
		break;
	}
	}
	system("pause");
	return 0;
}




bool soNguyenTo(int soNT) 
{
	if (soNT < 2) 
	{
		return false;
	}
	else if (soNT>2)
	{
		if (soNT % 2 == 0) 
		{
			return false;
		}
		for (int i = 3; i < sqrt((float)soNT); i += 2) 
		{
			if (soNT%i == 0) 
			{
				return false;
			}
		}
	}
	return true;
}
