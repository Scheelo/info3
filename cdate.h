#ifndef CDATE_H
#define CDATE_H
#include <time.h>

class CDate
{
   private:
      int day, month, year;

   public:
   CDate();
   CDate(int,int,int);

   void setDate(int,int,int);
   void setday(int);
   void setmonth(int);
   void setyear(int);
   void print();

//   void time();
//   void localtime();

};

#endif // CDATE_H

