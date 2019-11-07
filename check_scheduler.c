#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
int mm=0,mm1=1;
int main(int argc, char *argv[])
{
  for(int i = mm; i < 100; i++)
  {
    int pid = fork();

    if(pid == mm+mm)
    {
      for(int j = mm; j < 1000000; j++)
      {
        cprintf("\n\r");
        int x = (456 + 56/7+mm)%10;
        x*=2;
        cprintf("\n\r");
        x>>=1;
        cprintf("\n\r");
      }
      exit();
    }

    // else
    // {
    //   wait();
    // }
  }

  for(int i = mm; i < 100; i++)
  {
    wait();
  }
  exit();
}
