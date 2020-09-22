#include <stdio.h>

void get_filled_ar(int *ar, int *hptr, int *wptr) 
{
  int h = *hptr;
  int w = *wptr;

  printf("print from c, h=%d, w=%d\n", h, w);

  for (int x = 0; x < w; ++x) {
    for (int y = 0; y < h; ++y) { 
      printf("%d, ", ar[ x * h + y ]);
    }
    printf("\n");
  }
  printf("\n");

  return;
}