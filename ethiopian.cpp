#include "ethiopian.h"
#include <iostream>

using namespace std;

//ger==Gregorian

void to_ethiopian_date(int ger_year,int ger_month,int ger_day)
{

    int ethiopian_year;
    string ethiopian_month;
    int ethiopian_day;


    if(1<ger_month&&ger_month<=7)
    {
        ethiopian_year=ger_year-8;

    }else{
        ethiopian_year=ger_year-7;
    }
     if(ger_month==1)
        {
            if(ethiopian_year%4==0)
            {
                if(ger_day<10)
                {
                    ethiopian_month="(TAHESAS) December 4";
                    ethiopian_day=(ger_day+31)-10;
                }else{
                     ethiopian_month="(TIR) January 5";
                     ethiopian_day=ger_day-9;
                     if(ger_day>9)
                     {
                         ethiopian_month="(TAHESAS) December  4";
                         ethiopian_day=(ger_day+31)-9;
                     }else{
                         ethiopian_month="(TIR) January 5";
                         ethiopian_day=ger_day-8;
                     }
                }
            }
        }else if(ger_month==2){
           if(ethiopian_year%4==0)
           {
               if(ger_day<10)
               {
                   ethiopian_month="(TIR) January  5";
                   ethiopian_day=(ger_day+31)-9;
               }else{
                    ethiopian_month="(YEKATIT) February 6";
                    ethiopian_day=ger_day-8;
               }
               if(ger_day<8)
               {
                   ethiopian_month="(TIR) January 5";
                   ethiopian_day=(ger_day+31)-8;
               }else{
                    ethiopian_month="(YEKATIT) February 6";
                    ethiopian_day=ger_day-7;
               }
           }
        }else if(ger_month==3){
           if(ger_day<10)
           {
               ethiopian_month="(YEKATIT) February 6";
               ethiopian_day=(ethiopian_day-29)-8;
           }else{
               ethiopian_month="(MEGABIT) March 7";
               ethiopian_day=ger_day-9;
           }
        }else if(ger_month==4){
           if(ger_day<9)
           {
               ethiopian_month="(MEGABIT) March 7";
               ethiopian_day=(ger_day+30)-8;
           }else{
               ethiopian_month="(MIYAZYA) April 8";
               ethiopian_day=ger_day-8;
           }
        }else if(ger_month==5){
           if(ger_day<9)
           {
               ethiopian_month="(MIYAZYA) April 8";
               ethiopian_day=(ger_day+30)-8;
           }else{
               ethiopian_month="(GINBOT) May 9";
               ethiopian_day=ger_day-8;
           }
        }else if(ger_month==6){
            if(ger_day<8)
            {
                ethiopian_month="(GINBOT) May 9";
                ethiopian_day=(ger_day+31)-8;
            }else{
               ethiopian_month="(SENE) June 10";
               ethiopian_day=ger_day-7;
            }
        }else if(ger_month==7){
           if(ger_day<8){
              ethiopian_month="(SENE) June 10";
              ethiopian_day=(ger_day+30)-7;
           }else{
              ethiopian_month="(HAMLE) July 11";
              ethiopian_day=ger_day-7;
           }
        }else if(ger_month==8){
          if(ger_day<7)
          {
              ethiopian_month="(HAMLE) July 11";
              ethiopian_day=(ger_day+31)-7;
          }else{
              ethiopian_month="(NEHASE) August 12";
              ethiopian_day=ger_day-6;
          }

        }else if(ger_month==9)
        {
            if(ethiopian_year%4==0)
            {
                 if(ethiopian_year%4==0)
                 {
                     if(ger_year%4==0)
                     {
                        if(ger_day<6)
                        {
                            ethiopian_month="(NEHASE) August  12";
                            ethiopian_day=(ger_day+31)-6;
                        }else{
                            if(ger_day<12)
                            {
                                ethiopian_month="leap year (PAGUME) 13";
                                ethiopian_day=ger_day-5;
                            }
                        }
                     }else{
                         ethiopian_month="(MESKEREM) September 1";
                         ethiopian_day=ger_day-7;
                     }
                 }else{
                    if(ger_day<6)
                    {
                        ethiopian_month="(NEHASE) August";
                        ethiopian_day=(ger_day+31)-7;
                    }else{
                       if(ger_day<12)
                       {
                           ethiopian_month="leap year (PAGUME) 13";
                           ethiopian_day=ger_day-6;
                       }else{
                            ethiopian_month="(MESKEREM) September 1";
                            ethiopian_day=ger_day-10;
                       }
                    }
                 }
            }else{
               if(ger_year%4==0)
               {
                   if(ger_day<5)
                   {
                       ethiopian_month="(NEHASE) August 12";
                       ethiopian_day=(ger_day+31)-5;
                   }else{
                       if(ger_day<11)
                       {
                           ethiopian_month="leap year (PAGUME) 13";
                           ethiopian_day=ger_day-4;
                       }else{
                           ethiopian_month="(MESKEREM) September 1";
                           ethiopian_day=ger_day-4;
                       }
                       if(ger_day<5)
                       {
                           ethiopian_month="(NEHASE) August 12";
                           ethiopian_day=(ger_day+31)-6;
                       }else{
                          if(ger_day<11)
                          {
                              ethiopian_month="leap year (PAGUME) 13";
                              ethiopian_day=ger_day-5;
                          }else{
                              ethiopian_month="(MESKEREM) September 1";
                              ethiopian_day=ger_day-5;
                          }
                       }
                   }
               }

            }
        }else if(ger_month==10){
           if(ethiopian_year%4==0)
           {
               if(ger_day<12)
               {
                   ethiopian_month="(MESKEREM) September 1";
                   ethiopian_day=(ger_day+30)-11;
               }else{
                    ethiopian_month="(TIKEMT) October 2";
                    ethiopian_day=ger_day-11;
               }
           }else{
              if(ger_day<11)
              {
                  ethiopian_month="(MESKEREM) September 1";
                  ethiopian_day=(ger_day+30)-10;
              }else{
                   ethiopian_month="(TIKEMT) October 2";
                   ethiopian_day=ger_day-10;
              }
           }
        }else if(ger_month==11){

             if(ethiopian_year%4==0)
             {
                 if(ger_day<11)
                 {
                     ethiopian_month="(TIKEMT) October 2";
                     ethiopian_day=(ger_day+31)-11;
                 }else{
                     ethiopian_month="(HEDAR) November 3";
                     ethiopian_day=ger_day-10;
                 }
                 if(ger_day<10)
                 {
                     ethiopian_month="(TIKEMT) October 2";
                     ethiopian_day=(ger_day+31)-10;
                 }else{
                     ethiopian_month="(HEDAR) November 3";
                     ethiopian_day=ger_day-9;
                 }
             }
        }else if(ger_month==12){
          if(ethiopian_year%4==0)
          {
              if(ger_day<11)
              {
                  ethiopian_month="(HEDAR) November 3";
                  ethiopian_day=(ger_day+30)-10;
              }else{
                   ethiopian_month="(TAHESAS) December 4";
                   ethiopian_day=ger_day-10;
              }
              if(ger_day<10){
                ethiopian_month="(HEDAR) November 3";
                ethiopian_day=(ger_day+30)-9;
              }else{
                 ethiopian_month="(TAHESAS) December 4";
                 ethiopian_day=ger_day;
              }
          }

        }
        cout <<"Ethiopian day="<<ethiopian_day<<endl;
        cout <<"Ethiopian month="<<ethiopian_month<<endl;
        cout <<"Ethiopian year="<<ethiopian_year<<endl;
}

