#include <eggx.h>
#include <stdio.h>
#include  <stdlib.h>
#include  <math.h>
#include  <string.h>
#include  <X11/Xlib.h>
#include  <X11/Xutil.h>
#include "rw.h"
#include "prototypes.h"

#define X_MAX 1000
#define Y_MAX 1000

void egg_disp(void){
  static int cnt=0, win;
  int i, j;

  if(cnt==0){
    win=gopen(X_MAX,Y_MAX);
    layer(win,0,1);
  }

  newcolor(win, "Black");
  gclr(win) ;

    for (i = 2; i < ctl.mat_size+2; i++){
      for (j = 2; j < ctl.mat_size+2; j++){

	if(sys.mat0[ctl.shift*i+j]>0){
	  newcolor(win, "YellowGreen");
	  fillrect(win, i*10, j*10, 9, 9);
	}
	if(sys.mat0[ctl.shift*i+j]<0){
	  newcolor(win, "MediumOrchid");
	  fillrect(win, i*10, j*10, 9, 9);
	}
      }
    }
    copylayer(win,1,0);
  cnt++;  


}
