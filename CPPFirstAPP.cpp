#include <iostream>

class Apple
{
	public:
		Apple()
		{
			apple_color = (char*)"Красный";
			apple_cost = 0.1f;
			apple_edible = true;
		}
		Apple(char* _apple_color, float _apple_cost, bool _apple_edible)
		{
			apple_color = _apple_color;
			apple_cost = _apple_cost;
			apple_edible = _apple_edible;
		}
		void show_info()
		{
			std::cout	<< "Цвет яблока: " << apple_color << "\n"
						<< "Цена яблока: " << apple_cost << "\n"
						<< "Яблоко съедобно: " << apple_edible << "\n";
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
		void set_apple_edible(bool _apple_edible)
		{
			apple_edible = _apple_edible;
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
		float get_apple_edible()
		{
			return apple_edible;
		}
	private:
		char* apple_color;
		float apple_cost;
		bool apple_edible;
};

int main()
{
	setlocale(LC_ALL, "Russian");

	Apple apple((char*)"Зелёный", 0.99, true);
	apple.show_info();

	//	set
	apple.set_apple_cost(2.33);
	apple.set_apple_color((char*)"Красный");
	//	get
	std::cout << apple.get_apple_color() << "\n";
	std::cout << apple.get_apple_cost() << "\n";
	std::cout << apple.get_apple_edible() << "\n";

	apple.show_info();
}