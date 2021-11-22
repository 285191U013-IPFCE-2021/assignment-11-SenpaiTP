#include "sumn.h"

#include<stdio.h>
#include<assert.h>

int sumn(int n){
  
   int total = 1;
    
    if(n == 1){
      return total;
    }
    else{
      return sumn(n - 1) + (2*n - 1);
    }
}