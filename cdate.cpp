#include <stdio.h>
#include <stdlib.h>
#include "cdate.h"
#include <time.h>

CDate::CDate()
{
   time_t timer;
   struct tm*date;

   time(&timer);
   date = localtime (&timer);
   this->day=date->tm_mday;
   this->month=date->tm_mon+1; // tm_mon Monate seit Januar (0,11)
   this->year=date->tm_year+1900;  // Jahre seit 1900
}

//{day=month=year=0;}

CDate::CDate (int day,int month, int year)
{
   this->day =day;
   this->month =month;
   this->year =year;
/* day=tm_mday;
 month=tm_mon;
 year=tm_year; */
}


void CDate::print()
{ //     TT   MM  YYYY
printf("%02d.%02d.%04d.", this->day, this->month, this->year);
}


/*
void CDate:: set Date(int day,int month, int year)
{

  this-> day=day;
  this-> month=month;
  this-> year=year;
}
*/



