#include <iostream>
#include <cmath>
#include <string>
using namespace std;


           class Square
	
		   {

	   double length;
	 
public:

	Square(int valueA) {
		length = getValue(valueA);
	}

	
	void SetLength(double value) {
		length = value;
	}

	 

	
		double getValue(int value)
		{

			while (true) {
				cout << "Введите длину ребра квадрата: ";
				double value;
				cin >> value;
				if ((cin.fail() || value < 0))
				{
					cin.clear();
						cin.ignore(256, '\n');
						cout << "Некорректный ввод, попробуйте снова\n";
				}
				else
				{
					cin.ignore(256, '\n');

						return value;

				};
				
			
			
/*(cin.fail())
					{
						cin.clear();
						cin.ignore(256, '\n');
						cout << "Некорректный ввод, попробуйте снова\n";
					}
					else
					{
						cin.ignore(256, '\n'); 

						return value;
					} 
				}  */
				}
		
		   }; 
	void Perimeter()
	{
		cout << "Периметр квадрата равен " << 4 * length << endl;
	}

	void Area()

	{
		cout << "Площадь квадрата равна " << pow(length, 2) << endl;

	}

	
};



  int main()
{
	setlocale(LC_ALL, "rus");
	
	Square sq1(0);

	sq1.Perimeter();
	sq1.Area();
	

}
