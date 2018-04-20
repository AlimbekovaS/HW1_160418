
//2.Abiturient: Фамилия, Имя, Отчество, Адрес, Оценки.
//Создать массив объектов.Вывести :
//	a) список абитуриентов, имеющих неудовлетворительные оценки;
//	b) список абитуриентов, средний балл у которых выше заданного;
//	c) выбрать заданное число N абитуриентов, имеющих самый высокий средний балл(вывести также полный список абитуриентов, имеющих полупроходной балл).

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
		cout << "\nКакое задание? 1-Abiturient, 2-Book (для выхода нажмите 0)= ";
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
				cout << "список абитуриентов, имеющих неудовлетворительные оценки: \n";
				for (int k = 0; k < i; k++)
				{
					int buf = s[k].getBall();
					s[k].show1(buf);
				}
				cout << "=========================================================================\n";
				cout << "список абитуриентов, средний балл у которых выше заданного: \n";
				for (int k = 0; k < i; k++)
				{
					int buf = s[k].getBall();
					s[k].show2(buf);
				}
				cout << "=========================================================================\n";
				cout << "Абитуриент с самым высоким баллом: \n";
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
			/*4. Book: Автор, Название, Издательство, Год, Количество, страниц.
				Создать массив объектов.Вывести :
				a) список книг заданного автора;
				b) список книг, выпущенных заданным издательством;
				c) список книг, выпущенных после заданного года.*/
			Book b[5];
			string author, name, izdatel, sauthor, sizdatel;
			int year, kol_str, syear;
			for (int i = 0; i < 5; i++)
			{
				cout << "Введите автора книги " << i + 1 << " : ";
				cin >> author;
				b[i].setAuthor(author);
				cout << "Введите название книги " << i + 1 << " : ";
				cin >> name;
				b[i].setName(name);
				cout << "Введите Издательство книги " << i + 1 << " : ";
				cin >> izdatel;
				b[i].setIzdetel(izdatel);
				b[i].setYear(1950 + rand() % 100);
				b[i].setKol_str(200 + rand() % 500);
			}
			cout << "a) список книг заданного автора:\n";
			cout << "Введите нужного автора: ";
			cin >> sauthor;
			for (int i = 0; i < 5; i++)
			{
				b[i].showAuthor(sauthor);
			}
			cout << "=================================================================\n";
			cout << "b) список книг, выпущенных заданным издательством;\n";
			cout << "Введите нужное издательство: ";
			cin >> sizdatel;;
			for (int i = 0; i < 5; i++)
			{
				b[i].showIzdatel(sizdatel);
			}
			cout << "=================================================================\n";
			cout << "c) список книг, выпущенных после заданного года\n";
			cout << "Введите нужный год: ";
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