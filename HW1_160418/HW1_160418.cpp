
//2.Abiturient: �������, ���, ��������, �����, ������.
//������� ������ ��������.������� :
//	a) ������ ������������, ������� �������������������� ������;
//	b) ������ ������������, ������� ���� � ������� ���� ���������;
//	c) ������� �������� ����� N ������������, ������� ����� ������� ������� ����(������� ����� ������ ������ ������������, ������� ������������� ����).

#include<iostream>
#include<fstream>
#include<string>
#include"Abiturient.h"
#include"Book.h"
using namespace std;
int unsigned short z;
int main() 
{
	setlocale(LC_ALL, "ru");
	while (true)
	{
		cout << "\n����� �������? 1-Abiturient, 2-Book (��� ������ ������� 0)= ";
		cin >> z;
		if (z == 0)
		{
			break;
		}

		else if (z == 1)
		{
			Abiturient *s;
			s = new Abiturient[20];
			int i = 0;
			string fam, name, otch, address;
			int ball;
			ifstream in;
			in.open("abiturient.txt");
			if (!in.is_open())
			{
				cout << "error";
			}
			else
			{
				while (!in.eof())
				{
					in >> fam >> name >> otch >> address >> ball;
					Abiturient p(fam, name, otch, address, ball);
					s[i] = p;
					i++;
				}
				cout << "������ ������������, ������� �������������������� ������: \n";
				for (int k = 0; k < i; k++)
				{
					int buf = s[k].getBall();
					s[k].show1(buf);
				}
				cout << "=========================================================================\n";
				cout << "������ ������������, ������� ���� � ������� ���� ���������: \n";
				for (int k = 0; k < i; k++)
				{
					int buf = s[k].getBall();
					s[k].show2(buf);
				}
				cout << "=========================================================================\n";
				cout << "���������� � ����� ������� ������: \n";
				int buf[10], max;
				for (int k = 0; k < i; k++)
				{
					buf[k] = s[k].getBall();
				}
				for (int k = 0; k < i; k++)
				{
					max = buf[0];
					if (buf[k] > max)
					{
						max = buf[k];
					}
				}
				s->show3(max);
				in.close();
			}
			delete[]s;
		}

		else if (z == 2)
		{
			/*4. Book: �����, ��������, ������������, ���, ����������, �������.
				������� ������ ��������.������� :
				a) ������ ���� ��������� ������;
				b) ������ ����, ���������� �������� �������������;
				c) ������ ����, ���������� ����� ��������� ����.*/
			Book b[5];
			string author, name, izdatel, sauthor, sizdatel;
			int year, kol_str, syear;
			for (int i = 0; i < 5; i++)
			{
				cout << "������� ������ ����� " << i + 1 << " : ";
				cin >> author;
				b[i].setAuthor(author);
				cout << "������� �������� ����� " << i + 1 << " : ";
				cin >> name;
				b[i].setName(name);
				cout << "������� ������������ ����� " << i + 1 << " : ";
				cin >> izdatel;
				b[i].setIzdetel(izdatel);
				b[i].setYear(1950 + rand() % 100);
				b[i].setKol_str(200 + rand() % 500);
			}
			cout << "a) ������ ���� ��������� ������:\n";
			cout << "������� ������� ������: ";
			cin >> sauthor;
			for (int i = 0; i < 5; i++)
			{
				b[i].showAuthor(sauthor);
			}
			cout << "=================================================================\n";
			cout << "b) ������ ����, ���������� �������� �������������;\n";
			cout << "������� ������ ������������: ";
			cin >> sizdatel;;
			for (int i = 0; i < 5; i++)
			{
				b[i].showIzdatel(sizdatel);
			}
			cout << "=================================================================\n";
			cout << "c) ������ ����, ���������� ����� ��������� ����\n";
			cout << "������� ������ ���: ";
			cin >> syear;
			for (int i = 0; i < 5; i++)
			{
				b[i].showYear(syear);
			}
		}
	}

		system("pause");
		return 0;
	
}