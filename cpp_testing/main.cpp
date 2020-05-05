#include <iostream>

/* malloc example: random string generator*/
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */

int main ()
{
  int i,n;
  char * buffer;

  printf ("How long do you want the string? ");
//  scanf ("%d", &i);
  i=2;
  buffer = (char*) malloc (i+1);
  if (buffer==NULL) exit (1);
  
  for (n=0; n<i; n++){
      buffer[n]=rand()%26+'a';
//      std::cout<<(void *)buffer[n]<<std::endl;
  }
  buffer[i]='\0';

  printf ("Random string: %s\n",buffer);
  free (buffer);


  int *zs=(int *)malloc(sizeof(int));
  for (int i=0;i<10;i++)
  {
    zs[i]=i;
  }
  for (int i=0;i<15;i++)
  {
      std::cout<<&zs[i]<<" "<<zs[i]<<std::endl;;
  }

  

return 0;
}
