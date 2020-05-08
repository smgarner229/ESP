#include <iostream>

/* malloc example: random string generator*/
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */

struct Rectangle{
    int w,h;
    
    Rectangle()
    {
        w=1;
        h=1;
    }
    Rectangle(int h1)
    {
        w=1;
        h=h1;
    }
    Rectangle(int h1, int w1)
    {
        w=w1;
        h=h1;
    }
    int get_w()
    {
        return w;
    }
    int get_h()
    {
        return h;
    }
};

int main ()
{
  int i,n;
  char * buffer;

  Rectangle tl(5,5);
  std::cout << tl.w << " " << tl.h << std::endl;

  Rectangle * sqp;
  sqp = new Rectangle();
  std::cout << sqp->get_w() << " " << sqp->get_h() << std::endl;
  delete sqp;

//  Rectangle sqp;
//  std::cout<<sqp.w<<" "<<sqp.h<<std::endl;
  
  Rectangle ol(5);
  std::cout << ol.get_w() << " " << ol.h << std::endl;

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
