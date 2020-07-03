#include <iostream>
using namespace std;

class princess {
public:
	void meet_the_Prince() {
		cout << "встретить принца" << endl;
	}


};
class dog {
public:
	void bring_ball() {

		cout << "принес мяч" << endl;
	}
};
class princess_dog :public princess, public dog
{
};



int main()
{
	setlocale(LC_ALL, "ru");
	princess_dog Vasiliy;
	Vasiliy.bring_ball();
	Vasiliy.meet_the_Prince();
}
