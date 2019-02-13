/*
*
* Учебный проект по созданию БД учеников и студентов на C++ в консольном исполнении
*
* (c) Компьютерная академия ШАГ. Воронеж
* (с) группа стационара
* Версия 0.0
*
*/

#include "pch.h"
#include <iostream>
#include "Shag_db_Function.h" // библиотека подключающая файл Shag_db_Function в котором есть подключения файла Shag_db_struct
#include "SHUG_DB_FILE.h"

using namespace std;

Student student_shag[N];// констанкта N инициализирована в Shag_db_struct 


int main()
{
	setlocale(LC_ALL, "rus");	

	/*for (int i = 0; i < N; i++)
	{
		student_shag[i].id = i + 1;

		InputStudentInfo(&student_shag[i]);

		InputStudentVisit(&student_shag[i], N);

		InputStudentAcperf(&student_shag[i], N);

		InputStudentFacultet(&student_shag[i]);
	}
	for (int i = 0; i < N; i++)
	{
		OtputStudentInfo(&student_shag[i]);
		StudentOutputFile(student_shag[i]);
	}*/
	
	ImportStudentDataBase(&student_shag[0]);

	//cout << " Меню пользователя " << endl;
	//cout << "1. Ввод данных" << endl;
	//cout << "2.Вывод данных " << endl;
	//cout << "3. Очистка всех данных" << endl;
	//cout << "4. Сортировка" << endl;
	//cout << "5. Поиск записи " << endl;
	//

	//int a;
	//cin >> a;

	//switch (a)
	//{
	// case 1:
	//  {
	//	 cout << "1. с клавиатуры" << endl;
	//	 cout << "2. импорт из файла " << endl;
	//	 int b;
	//	 cin >> b;
	//	 if (b == 1)
	//	 {

	//	 }
	//	 else if(b==2)
	//	 {

	//	 }
	// 
	//  }
	// case 2:
	//{
	//	 cout << "1. на экран" << endl;
	//	 cout << "2. экспорт в файл" << endl;
	//	 int b;
	//	 cin >> b;
	//	 if (b == 1)
	//	 {

	//	 }
	//	 else if (b == 2)
	//	 {

	//	 }
	//}
	// case 3:
	//{

	//}
	// case 4:
	//{

	//}
	// case 5:
	//{
	//	 cout << "1. вывод " << endl;
	//	 cout << "2. изменение" << endl;
	//	 int b;
	//	 cin >> b;
	//	 if (b == 1)
	//	 {

	//	 }
	//	 else if (b == 2)
	//	 {
	//		  
	//	 }
	//}
	//}
}