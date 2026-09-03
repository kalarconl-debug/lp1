#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#include <iostream>
using namespace std;
int raizDigital(int num){
int entrada = num;
bool seguir = true;
while (seguir==true);
    int entero= entrada / 10;
    int residuo = entrada % 10;
    if ((entero + residuo)>9) {
             seguir=true;}
             else {seguir=false;}
        entrada=entero+residuo;
         }
         return entrada;
  int main () {
      int n;
      cin >> n;
      cout << raizDigital(n) << endl;
      return 0;
      }