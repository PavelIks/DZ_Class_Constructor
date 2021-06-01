#include <iostream>

class Apple
{
	public:
		char* Color_Apple;
		float Cost;
		Apple()
		{
			Color_Apple = (char*)"Цвет";
			Cost = 0.0f;
		}
		Apple(char* _Color_Apple, float _Cost)
		{
			Color_Apple = _Color_Apple;
			Cost = _Cost;
		}
		void show_info()
		{
			std::cout << "Цвет яблока: " << Color_Apple << "\n" << "Цена яблока" << Cost << "\n";
		}

};

int main()
{
	setlocale(LC_ALL, "Russian");
	Apple apple((char*)"Зелёный", 0.99);
	apple.show_info();
}







//методы растить гнить
//геты: получить вес
//сетеры : съел или не съел


/*
#include <iostream>
class Test {
public:
	Test() {
		x = 0;
		c = '_';
		f = 0.0f;
	}
	Test(int _x, char _c, float _f) {
		x = _x;
		c = _c;
		f = _f;
	}
	void show_info() {
		std::cout << "x:\t" << x << "\nc:\t" << c << "\nf:\t" << f << "\n";
	}
	//set-ер	(установить значение)
	void setX(int _x) {
		x = _x;
	}
	//get-ер	(получить значение)
	int getX() {
		return x;
	}
private:
	float f;
	int x;
	char c;
};

int main()
{
	std::cout << "Hello World!\n";
	Test test(11, 'b', 33.33);
	/*test.x = 1;
	test.c = 'c';*/
test.show_info();
//вызов set-ора
test.setX(8188);
test.show_info();
//вызов get-ора
std::cout << test.getX() << "\n";
}

*/