#pragma once
#ifndef SHAG_DB_STRUCT
#define SHAG_DB_STRUCT
#include <string>

using namespace std;

const int N = 1;

typedef struct Contact
{
	string address; // адрес
	int tel;           // телефон без +7 и без пробелов
};

typedef struct People
{
	string family;       // фамилия
	string name;         // имя
	Contact contact;       // контактная информация
};

typedef struct Date
{
	int day;              // день
	int month;            // месяц
	int year;             // год
};

typedef struct Visit
{
	Date date;            // день, месяц, год
	int status;           // статус посещения (0 - отсутствовал, 1 - присутствовал, 2 - болел)
};

typedef struct AcadPerf
{
	Date date;            // день, месяц, год
	int ac_status;        // оценка
};

typedef struct Facultet
{
	string name;           // название факультета
	string group;            // название группы
	bool actual;              // актуальность (числится или нет)
};

typedef struct Student
{
	int id;                   // уникальный идентификатор
	People people;            // фамилия, имя, контактная информация (адрес и телефон)
	Visit visit[N];           // посещаемость

	AcadPerf ac_perf[N];      // текушая успеваемость (оценка)
	AcadPerf homework[N];     // оценка за домашнюю работу
	AcadPerf test[N];         // оценка за контрольную работу
	AcadPerf lab[N];          // оценка за лабораторную
	float middle_ac;            // средневзвещенная оценка  

	Facultet facult;          // факультет
};

#endif 
