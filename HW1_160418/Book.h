#pragma once
#include<string>
using namespace std;
class Book
{
private:
	string author;
	string name;
	string izdatel;
	int year;
	int kol_str;
public:
	//accessors
	string getAuthor() { return author; }
	string getName() { return name; }
	string getIzdatel() { return izdatel; }
	int getYear() { return year; }
	int getkol_str() { return kol_str; }
	//mutators
	void setAuthor(string author) { this->author = author; }
	void setName(string name) { this->name = name; }
	void setIzdetel(string izdatel) { this->izdatel = izdatel; }
	void setYear(int year) { this->year = year; }
	void setKol_str(int kol_str) { this->kol_str = kol_str; }
	//methods
	void showAuthor(string bufauthor)
	{
		if (bufauthor == author)
		{
			cout <<author<<"\t"<< name << "\t" << izdatel << "\t" << year << "\t" << kol_str << endl;
		}
	}
	void showIzdatel(string bufizdatel)
	{
		if (bufizdatel == izdatel)
		{
			cout <<izdatel<<"\t"<< name << "\t" << author << "\t" << year << "\t" << kol_str << endl;
		}
	}
	void showYear(int bufyear)
	{
		if (bufyear < year)
		{
			cout<<year << "\t" << name << "\t" << author<<"\t" <<izdatel <<"\t" << kol_str << endl;
		}
	}

};

