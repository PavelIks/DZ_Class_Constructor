#include <iostream>

class Apple
{
	public:
		Apple()
		{
			color_apple = (char*)"Красный";
			cost_apple = 0.1f;
		}
		Apple(char* _color_apple, float _cost)
		{
			color_apple = _color_apple;
			cost_apple = _cost;
		}
		void show_info()
		{
			std::cout << "Цвет яблока: " << color_apple << "\n" << "Цена яблока: " << cost_apple << "\n";
		}
		//	set
		void set_cost_apple(float _cost_apple)
		{
			cost_apple = _cost_apple;
		}
		void set_color_apple(char* _color_apple)
		{
			color_apple = _color_apple;
		}
		//	get
		char* get_color_apple()
		{
			return color_apple;
		}
		float get_cost_apple()
		{
			return cost_apple;
		}
	private:
		char* color_apple;
		float cost_apple;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Apple apple((char*)"Зелёный", 0.99);
	apple.show_info();

	//	set
	apple.set_cost_apple(2.33);
	apple.set_color_apple((char*)"Красный");
	//	get
	std::cout << apple.get_color_apple() << "\n";
	std::cout << apple.get_cost_apple() << "\n";

	apple.show_info();
}