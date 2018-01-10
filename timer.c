#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
  for(int hour=0; hour<24; hour++){
    for(int min=0; min<59; min++){
      for(int sec=0; sec<59; sec++){
        system("@cls||clear");
        printf("\t\t%d\t\t: %d\t\t: %d\t\t",hour,min,sec);
        printf("\n");

        Sleep(1000);
      }
    }
  }
}
