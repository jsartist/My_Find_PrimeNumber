#include "PrimeNumber_Header.h"

PrimeNumber_One_To_Hundred::PrimeNumber_One_To_Hundred() {

 Num = 100;
 LNum = 8;

 this->Array = new int[Num];

 for (int k = 0; k < Num; k++) {
  Array[k] = k + 1;
 }

}

void PrimeNumber_One_To_Hundred::Show_Array() const {
 cout << "1~100 까지의 배열:\n" << "{ ";
 for (int k = 0; k < Num; k++) {
  cout << Array[k] << " ";
 }
 cout << "}" << endl;
}

void PrimeNumber_One_To_Hundred::Find_Prime_Number() {
 int s = 0;
 cout << "소수: ";
 for (int co = 0; co < Num; co++) {
  for (int k = 2; k <= LNum; k++) {

   if (Array[co] == 1) {
    ++s;
    break; 
   }

   else if (Array[co] == k) break;

   else if (Array[co] % k == 0) {
    ++s;
    break;
   }

   else {}

  }
  if (s == 0) {
   cout << Array[co] << " ";
   s = 0;
  }

  else s = 0;

 }
 cout << endl;
}

void PrimeNumber_One_To_Hundred::Run() {
 Show_Array();

 Find_Prime_Number();
}

PrimeNumber_One_To_Hundred::~PrimeNumber_One_To_Hundred() {
 delete Array;
}