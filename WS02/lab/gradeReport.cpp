/* ------------------------------------------------------
Workshop 2 part 1
Module: N/A
Filename: gradeReport.cpp 
  in submission this file will be replaced with main_prof.cpp
  that loads "simpsons.csv" instead
Version 1
Revision History
-----------------------------------------------------------
Date       Reason
-----------------------------------------------------------*/
#include "Student.h"
using namespace sdds;
struct Student {
      char* m_name;
      int m_studentNumber;
      char m_grade;
   };
int main() 
{
  struct student s[14];
   if (load("students.csv")) 
   {
      display();
   }
   deallocateMemory();
   return 0;
}
