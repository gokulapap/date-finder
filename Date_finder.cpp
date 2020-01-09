#include <iostream>
using namespace std;

int main()
{
  int d,m,y,t;
  cin>>d>>m>>y;
  t=d;
  switch(m)
  {
      case 1:t+=6;break;
      case 2:t+=2;break;
      case 3:t+=2;break;
      case 4:t+=5;break;
      case 5:t+=0;break;
      case 6:t+=3;break;
      case 7:t+=5;break;
      case 8:t+=1;break;
      case 9:t+=4;break;
      case 10:t+=6;break;
      case 11:t+=2;break;
      case 12:t+=4;break;
  }
  y=y-2000;
  y+=4;
  t+=y;
   switch(t%7)
   {
      case 0:cout<<"sunday";break;
      case 1:cout<<"monday";break;
      case 2:cout<<"tuesday";break;
      case 3:cout<<"wednesday";break;
      case 4:cout<<"thursday";break;
      case 5:cout<<"friday";break;
      case 6:cout<<"saturday";break;
   }

    return 0;
}
