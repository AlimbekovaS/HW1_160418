#pragma once
#include<iostream>
#include<string>
using namespace std;
class Abiturient
{
	
private:
	//: Фамилия, Имя, Отчество, Адрес, Оценки. 
	string fam;
	string name;
	string otch;
	string address;
	int ball;
public:
	Abiturient() = default; //konstructor by_default
	Abiturient(string fam, string name, string otch, string address, int ball)
	{
		this->fam = fam;
		this->name = name;
		this->otch = otch;
		this->address = address;
		this->ball = ball;
	}
	//accessors
	
	string getFam(){return fam;}
	string getName() { return name; }
	string getOtch() { return otch; }
	string getAddress() { return address; }
	int getBall() { return ball; }

	//mutators
	void setFam(string fam){this->fam = fam;}
	void setName(string name) {this->name= name; }
	void setOtch(string otch) { this->otch= otch; }
	void setAddress(string address) { this->address= address; }
	void setBall(int ball) { this->ball= ball; }

	//methods
	void show1(int ball)
	{
		if (ball < 50)
		{
			cout << fam << " \t" << name << "\t" << otch << "\t" << address << "\t" << ball << endl;
		}
	}
	
	void show2(int ball)
	{
		if (ball > 80)
		{
			cout << fam << " \t" << name << "\t" << otch << "\t" << address << "\t" << ball << endl;
		}
	}

	void show3(int max)
	{
		cout << fam << " \t" << name << "\t" << otch << "\t" << address << "\t" << ball << endl;
	}
};
