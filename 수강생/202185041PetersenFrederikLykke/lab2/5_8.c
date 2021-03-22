/* Departure and arrival times displayer */
#include <stdio.h>

int main(void)
{
  int d1, d2, d3, d4, d5, d6, d7 ,d8;
  int a1h,a1m,a2h,a2m,a3h,a3m,a4h,a4m,a5h,a5m,a6h,a6m,a7h,a7m,a8h,a8m;
  int h, m, time;
  int dep, deph, depm, arrh, arrm;

  d1 = 480;
  d2 = 583;
  d3 = 679;
  d4 = 767;
  d5 = 840;
  d6 = 945;
  d7 = 1140;
  d8 = 1305;
  a1h = 10; a1m = 16;
  a2h = 11; a2m = 52;
  a3h = 13; a3m = 31;
  a4h = 15; a4m = 00;
  a5h = 16; a5m = 8;
  a6h = 17; a6m = 55;
  a7h = 21; a7m = 20;
  a8h = 23; a8m = 58;

  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d",&h, &m);
  time = h*60 + m;
  if(time < (d2-(d2-d1)/2) && time >= 307){
    deph = 8;
    depm = 00;
    arrh = a1h;
    arrm = a1m;
  }
  if(time > (d2-(d2-d1)/2) && time < (d3-(d3-d2)/2)){
    deph = 9;
    depm = 43;
    arrh = a2h;
    arrm = a2m;
  }
  if(time > (d3-(d3-d2)/2) && time < (d4-(d4-d3)/2)){
    deph = 11;
    depm = 19;
    arrh = a3h;
    arrm = a3m;
  }
  if(time > (d4-(d4-d3)/2) && time < (d5-(d5-d4)/2)){
    deph = 12;
    depm = 47;
    arrh = a4h;
    arrm = a4m;
  }
  if(time > (d5-(d5-d4)/2) && time < (d6-(d6-d5)/2)){
    deph = 14;
    depm = 00;
    arrh = a5h;
    arrm = a5m;
  }
  if(time > (d6-(d6-d5)/2) && time < (d7-(d7-d6)/2)){
    deph = 15;
    depm = 45;
    arrh = a6h;
    arrm = a6m;
  }
  if(time > (d7-(d7-d6)/2) && time < (d8-(d8-d7)/2)){
    deph = 19;
    depm = 00;
    arrh = a7h;
    arrm = a7m;
  }
  if(time > (d8-(d8-d7)/2) || time < 307){
    deph = 21;
    depm = 45;
    arrh = a8h;
    arrm = a8m;
  }

  printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d\n",deph,depm,arrh,arrm);
  return 0;
}
