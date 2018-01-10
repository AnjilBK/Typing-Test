#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
  int hour, min, sec;
  for(hour=0; hour<24; hour++){
    for(min=0; min<59; min++){
      for(sec=0; sec<59; sec++){
		system("clear");
        printf("\t\t%d\t\t: %d\t\t: %d\t\t",hour,min,sec);
        printf("\n");
        sleep(1);
      }
    }
  }
}
