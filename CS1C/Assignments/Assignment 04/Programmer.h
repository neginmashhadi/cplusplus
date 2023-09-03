/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#ifndef PROGRAMMER_H_
#define PROGRAMMER_H_

#include"Employe.h"

class Programmer: public Employee
{
public:
	Programmer();
	Programmer(int age, long id, string phoneNum, Date hire, double salary,
			   string employeeName ,string title,  char gender, long num,
			   string Bossname, double percentage, bool c, bool j);
	~Programmer();

	void SetValues(long num, string name, double percentage, bool c, bool j, string employeeName);
	void SetDepartNum(long num);
	void SetBossName(string name);
	void SetSalaryIncrease(double percent);
	void SetKnowledgeCpp(bool cpp);
	void SetKnowledgeJava(bool j);
	//ACCESSORS
	long GetDepartNum() const;
	string GetName() const;
	double GetSalaryPercent() const;
	bool GetLanguageC() const;
	bool GetLanguageJ() const;
	void Print() const;
	void PrintHeaderProgrammer() const;

private:
	long departmentNum;
	string supervisorName;
	double salaryIncrease;
	bool cplusplus;
	bool java;
};



#endif /* PROGRAMMER_H_ */
