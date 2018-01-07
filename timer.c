#include<stdio.h>
#include<windows.h>
#include <stdlib.h>
int main()
{
  int hour, min, sec;
  for(hour=0; hour<24; hour++){
    for(min=0; min<59; min++){
      for(sec=0; sec<59; sec++){
        clrscr();
        printf("\t\t%d\t\t: %d\t\t: %d\t\t",hour,min,sec);
        printf("\n");

        Sleep(1000);
      }
    }
  }
}


void clrscr()
{
    system("@cls||clear");
}
