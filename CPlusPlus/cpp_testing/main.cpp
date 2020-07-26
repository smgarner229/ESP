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

int take_func(int (*f)(int,int),int,int);
int adder(int,int);

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

  std::cout << "Sum is: " << take_func(&adder,4,5) << std::endl;

return 0;
}

int take_func(int (*f)(int,int),int a,int b)
{
    return f(a,b);
}
int adder(int a,int b)
{
    return a + b;
}


