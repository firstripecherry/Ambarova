#include <iostream>
#include <string>
using namespace std;



class dog {
public:
	static int count;
	int force;
	int preparation;
	int agility;
	double training;

private:
	int intelligence;
	int size;
	int endurance;

public:
	dog() {
		intelligence = 1;
		size = 1;
		endurance = 1;
		force = 10 * size;
		preparation = 5 * endurance;
		agility = 2 * intelligence + 0.5 * size;
		training = 1.5 * endurance * intelligence;
		count++;
	}
	dog(int intelligence, int size, int endurance)
	{
		this->intelligence = intelligence;
		this->size = size;
		this->endurance = endurance;
		this->force = 10 * size;
		this->preparation = 5 * endurance;
		this->agility = 2 * intelligence + 0.5 * size;
		this->training = 1.5 * endurance * intelligence;
		count++;
	}

	void rest (int intelligence, int size, int endurance)
	{
		this->intelligence = intelligence;
		this->size = size;
		this->endurance = endurance;
		this->force = 10 * size;
		this->preparation = 5 * endurance;
		this->agility = 2 * intelligence + 0.5 * size;
		this->training = 1.5 * endurance * intelligence;
	}
	void walk()
	{
		cout << "интелект: " << intelligence << endl;
		cout << "размер: " << size << endl;
		cout << "выносливость: " << endurance << endl;
		cout << "сила: " << force << endl;
		cout << "подготовка: " << preparation << endl;
		cout << "дрессировка: " << training << endl;
		cout << "ловкость: " << agility << endl;
	}
	~dog() {}

};





int dog::count = 0;
int main()
{

	setlocale(LC_ALL, "Ru");
	dog-Spitz(5, 3, 5);


	Spitz.walk();

}