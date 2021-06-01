#include <iostream>

class Apple
{
	public:
		Apple()
		{
			apple_color = (char*)"Красный";
			apple_cost = 0.1f;
		}
		Apple(char* _apple_color, float _apple_cost)
		{
			apple_color = _apple_color;
			apple_cost = _apple_cost;
		}
		void show_info()
		{
			std::cout << "Цвет яблока: " << apple_color << "\n" << "Цена яблока: " << apple_cost << "\n";
		}
		//	set
		void set_apple_cost(float _apple_cost)
		{
			apple_cost = _apple_cost;
		}
		void set_apple_color(char* _apple_color)
		{
			apple_color = _apple_color;
		}
		//	get
		char* get_apple_color()
		{
			return apple_color;
		}
		float get_apple_cost()
		{
			return apple_cost;
		}
	private:
		char* apple_color;
		float apple_cost;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Apple apple((char*)"Зелёный", 0.99);
	apple.show_info();

	//	set
	apple.set_apple_cost(2.33);
	apple.set_apple_color((char*)"Красный");
	//	get
	std::cout << apple.get_apple_color() << "\n";
	std::cout << apple.get_apple_cost() << "\n";

	apple.show_info();
}