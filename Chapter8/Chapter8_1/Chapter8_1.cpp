// Chapter8_1.cpp : 객체지향 프로그래밍과 클래스
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Friend
{
public:
	string name;
	string address;
	int age;
	double height;
	double weight;

	void print()
	{
		cout << name << " " << address << " " << age << " " <<
			height << " " << weight << endl;
	}

};

void print(const string& name, const string& address,
	const int& age, const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " << 
		height << " " << weight << endl;
}


int main()
{
	Friend jj{ "jan jan", "town", 26, 170, 63 };
	jj.print();

	//print(jj.name, jj.address, jj.age, jj.height, jj.weight);
	/*vector<string> name_vec;
	vector<string> addr_vec;
	vector<int>    age_vec;
	vector<double> height_vec;
	vector<double> weight_vec;
	
	print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);*/

	vector<Friend> my_friends;
	my_friends.resize(2);

	for (auto& ele : my_friends)
		ele.print();

	//my_friends[0].print();

    return 0;
}
