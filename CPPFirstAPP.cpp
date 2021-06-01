#include <iostream>

class Apple
{
	public:
		Apple()
		{
			color_apple = (char*)"Красный";
			cost = 0.1f;
		}
		Apple(char* _color_apple, float _cost)
		{
			color_apple = _color_apple;
			cost = _cost;
		}
		void show_info()
		{
			std::cout << "Цвет яблока: " << color_apple << "\n" << "Цена яблока: " << cost << "\n";
		}
		//set-ер	(установить значение)
		void set_cost(float _cost)
		{
			cost = _cost;
		}
		void set_color_apple(char* _color_apple)
		{
			color_apple = _color_apple;
		}
		//get-ер	(получить значение)
		char* get_color_apple()
		{
			return color_apple;
		}
	private:
		char* color_apple;
		float cost;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Apple apple((char*)"Зелёный", 0.99);
	apple.show_info();

	/*test.cost = 1;
	test.color_apple = 'c';*/

	//set-ора
	apple.set_cost(2.33);
	apple.set_color_apple((char*)"Красный");
	//get-ора
	std::cout << apple.get_color_apple() << "\n";

	apple.show_info();
}



