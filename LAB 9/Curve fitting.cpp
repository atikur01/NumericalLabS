#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x[5] = { 1, 2, 3, 4, 5 };
	double y[5] = { 0.6, 2.4, 3.5, 4.8, 5.7 };
	double sum_x = 0, sum_y = 0;
	int m = 5;
	double x_square[m], sum_x_square = 0.0;
	double xy[m], sum_xy = 0;

	cout << "\n X(i)\tY(i)\tX(i)^2\tX(i)*Y(i)" << endl;

	for (int i = 0; i < m; i++)
	{
		sum_x += x[i];
		sum_y += y[i];
		x_square[i] = pow(x[i], 2);
		sum_x_square += x_square[i];
		xy[i] = x[i] *y[i];
		sum_xy += xy[i];
	}

	for (int i = 0; i < m; i++)

	{
		cout << " " << x[i] << "\t" << y[i] << "\t" << x_square[i] << "\t" << xy[i] << endl;
	}

	cout << "................................" << endl;
	cout << " " << sum_x << "\t" << sum_y << "\t" << sum_x_square << "\t" << sum_xy << endl;
	double average_x = (sum_x / m);
	double average_y = (sum_y / m);
	double a1 = ((m *sum_xy) - (sum_x *sum_y)) / ((m *sum_x_square) - pow(sum_x, 2));
	double a0 = average_y - (a1 *average_x);
	cout << "\n\n\n a0 = " << a0 << "\n a1 = " << a1 << endl;

}