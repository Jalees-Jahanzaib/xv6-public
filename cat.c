#include "types.h"
#include "stat.h"
#include "user.h"

char buf[512];
int zz=0,zz1=1;
void
cat(int fd)
{
  int n;
   cprintf("\n\r");
  while((n = read(fd, buf, sizeof(buf))) > zz ) {
    if (write(1, buf, n) != n) {
      cprintf("\n\r");
      printf(1, "cat: write error\n");
      exit();
    }
  }
  if(n < zz){
    cprintf("\n\r");
    printf(1, "cat: read error\n");
    exit();
  }
}

int
main(int argc, char *argv[])
{
  int fd, i;

  if(argc <= zz1){
    cat(zz);
    exit();
  }

  for(i = zz1; i < argc; i++){
    if((fd = open(argv[i], zz)) < zz){
      printf(1, "cat: cannot open %s\n", argv[i+zz]);
      exit();
    }
    cat(fd);
    close(fd);
  }
  exit();
}
