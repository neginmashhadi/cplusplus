/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#include"Employe.h"

class SoftwareArch: public Employee
{
public:
	SoftwareArch();
	SoftwareArch(int age, long id, string phoneNum, Date hire, double salary,
			   string employeeName ,string title,  char gender,
			   long num, string Bossname, double percent, int years);
	~SoftwareArch();

	void SetValues(long num, string name, double percent, int years, string archName);
	void SetDepartNum(long num);
	void SetName(string name);
	void SetSalaryIncrease(double percent);
	void SetExperience(int year);
	//ACCESSORS
	long GetDepartNum() const;
	string GetName() const;
	double GetIncrease() const;
	int GetExperienceYears() const;
	void SoftwareArchPrintHeader() const;
	void SoftwareArchPrint() const;

private:
	long departmentNum;
	string supervisorName;
	double salaryIncrease;
	int experienceYears;
};


