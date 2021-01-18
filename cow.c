#include "types.h"
#include "stat.h"
#include "user.h"

void testeCowfork()
{
  int pid;

  pid = cowfork();

  if(pid==0){
    printf(1,"processo filho\n");
  }
  else{
    printf(1,"processo pai\n");
  }

  while (1); 
}

int main(int argc, char const *argv[]) {
  testeCowfork();
  exit();
}