#pragma once
#ifndef SHAG_DB_FILE
#define SHAG_DB_FILE
#include "Shag_db_struct.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void StudentOutputFile(Student stud)
{

	ofstream file_db("Student_Shag.txt");

	if (!file_db.is_open())
	{
		cout << "ERROR!";
	}
	else
	{
		file_db << stud.id << ";";
		file_db << stud.people.family << ";" << stud.middle_ac << ";" << stud.facult.name << ";" << stud.facult.group << ";";
		file_db << stud.people.name << ";";

		file_db << stud.people.contact.address << ";";
		file_db << stud.people.contact.tel << ";";

		file_db << stud.facult.actual << ";" << endl;

	}
	file_db.close();
}

void Student_Shag_Visit(Student stud)
{
	ofstream file_visit("Student_Shag_Visit.txt");

	if (!file_visit.is_open())
	{
		cout << "ERROR!";
	}
	else
	{
		file_visit << stud.visit->date.day << ";";
		file_visit << stud.visit->date.month << ";";
		file_visit << stud.visit->date.year << ";";
		file_visit << stud.visit->status << ";";
	}
	file_visit.close();
}

void Student_Shag_AcPerf(Student stud)
{
	ofstream file_acPerf("Student_Shag_AcPerf.txt");

	if (!file_acPerf.is_open())
	{
		cout << "ERROR!";
	}
	else
	{

		file_acPerf << stud.ac_perf->date.day << ";";
		file_acPerf << stud.ac_perf->date.month << ";";
		file_acPerf << stud.ac_perf->date.year << ";";
		file_acPerf << stud.ac_perf->ac_status << ";";
	}
	file_acPerf.close();
}

void Student_Shag_HomeWork(Student stud)
{
	ofstream file_HomeWork("Student_Shag_HomeWork.txt");

	if (!file_HomeWork.is_open())
	{
		cout << "ERROR!";
	}
	else
	{


		file_HomeWork << stud.homework->date.day << ";";
		file_HomeWork << stud.homework->date.month << ";";
		file_HomeWork << stud.homework->date.year << ";";
		file_HomeWork << stud.homework->ac_status << ";";
	}
	file_HomeWork.close();
}

void Student_Shag_Test(Student stud)
{
	ofstream file_Test("Student_Shag_Test.txt");

	if (!file_Test.is_open())
	{
		cout << "ERROR!";
	}
	else
	{


		file_Test << stud.test->date.day << ";";
		file_Test << stud.test->date.month << ";";
		file_Test << stud.test->date.year << ";";
		file_Test << stud.test->ac_status << ";";
	}
	file_Test.close();
}
void Student_Shag_Lab(Student stud)
{
	ofstream file_Lab("Student_Shag_Lab.txt");

	if (!file_Lab.is_open())
	{
		cout << "ERROR!";
	}
	else
	{

		file_Lab << stud.lab->date.day << ";";
		file_Lab << stud.lab->date.month << ";";
		file_Lab << stud.lab->date.year << ";";
		file_Lab << stud.lab->ac_status << ";";
	}
	file_Lab.close();
}

void Import_student_data_base(Student *stud)
{
	ifstream file_db("Student_Shag.txt");

	if (!file_db.is_open())
	{
		cout << "ERROR!";
	}
	else
	{
		string buffer;

		getline(file_db, buffer);  // берем строку из файла file_db и помещаем в переменную баффер

		int pos = 0;
		pos = buffer.find(";"); // в строке buffer командой find ищем сколько символов до ;  и помещаем в переменную pos

		string sub_str;
		sub_str = buffer.substr(0, pos); // берем  из строки buffer командой substr код от 0 символа до символа равного pos и помещаем в переменную строку sub_str
		cout << "Первый кусок кода " << sub_str << endl;
		cout << "Позиция " << pos << endl;


		int id = atoi(sub_str.c_str());// atoi переводит строку в int 
		stud->id = id;



		string buffer2;
		cout << "строка баффер " << buffer << endl;
		pos = 0;
		buffer2 = buffer.substr(pos + 2);               //    берем из большой строки 
		cout << "строка баффер 2 " << buffer2 << endl;
		pos = buffer2.find(";");
		string sub_str1;
		sub_str1 = buffer2.substr(0, pos);
		cout << "Второй кусок кода " << sub_str1 << endl;


		stud->people.family = sub_str1;

		string buffer3;
		buffer3 = buffer2.substr(pos + 1);
		cout << "строка баффер 3 " << buffer3 << endl;
		pos = 0;
		pos = buffer3.find(";");
		string sub_str2;
		sub_str2 = buffer3.substr(0, pos);
		cout << "Третий  кусок кода " << sub_str2 << endl;

		double mid = atof(sub_str2.c_str());  // atof переводит строку в double
		double mid(float);
		stud->middle_ac = mid;

		string buffer4;
		buffer4 = buffer3.substr(pos + 1);
		cout << "строка баффер 4 " << buffer4 << endl;
		pos = 0;
		pos = buffer4.find(";");
		string sub_str3;
		sub_str3 = buffer4.substr(0, pos);
		cout << "Четвертый кусок кода " << sub_str3 << endl;

		stud->facult.name = sub_str3;


		string buffer5;
		buffer5 = buffer4.substr(pos + 1);
		cout << "строка баффер 5 " << buffer5 << endl;
		pos = 0;
		pos = buffer5.find(";");
		string sub_str4;
		sub_str4 = buffer5.substr(0, pos);
		cout << "Пятый кусок кода " << sub_str4 << endl;

		stud->facult.group = sub_str4;

		string buffer6;
		buffer6 = buffer5.substr(pos + 1);
		cout << "строка баффер 6 " << buffer6 << endl;
		pos = 0;
		pos = buffer6.find(";");
		string sub_str5;
		sub_str5 = buffer6.substr(0, pos);
		cout << "Шестой кусок кода " << sub_str5 << endl;

		stud->people.name = sub_str5;


		string buffer7;
		buffer7 = buffer6.substr(pos + 1);
		cout << "строка баффер 7 " << buffer7 << endl;
		pos = 0;
		pos = buffer7.find(";");
		string sub_str6;
		sub_str6 = buffer7.substr(0, pos);
		cout << "Седьмой кусок кода " << sub_str6 << endl;

		stud->people.contact.address = sub_str6;

		string buffer8;
		buffer8 = buffer7.substr(pos + 1);
		cout << "строка баффер 8 " << buffer8 << endl;
		pos = 0;
		pos = buffer8.find(";");
		string sub_str7;
		sub_str7 = buffer8.substr(0, pos);
		cout << "Восьмой кусок кода " << sub_str7 << endl;

		int tel = atoi(sub_str7.c_str());
		stud->people.contact.tel = tel;
		string buffer9;
		buffer9 = buffer8.substr(pos + 1);
		cout << "строка баффер 9 " << buffer9 << endl;
		pos = 0;
		pos = buffer9.find(";");
		string sub_str8;
		sub_str8 = buffer9.substr(0, pos);
		cout << "Восьмой кусок кода " << sub_str8 << endl;

		int act = atoi(sub_str8.c_str());
		stud->facult.actual = act;

	}



}


/*
Student_Shag_Visit.txt - посещаемость
Student_Shag_AcPerf.txt - тек оценка
Student_Shag_HomeWork.txt - оценка за д.з.
Student_Shag_Test.txt  - оценка за тесты
Student_Shag _Lab.txt - оценка за лабы
*/

#endif