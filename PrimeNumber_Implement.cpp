#include "PrimeNumber_Header.h"

PrimeNumber::PrimeNumber(const int* Array, int Num) {
 this->Num = Num;
 this->Array = new int[this->Num];
 for (int k = 0; k < this->Num; k++) {
  this->Array[k] = Array[k];
 }
}

void PrimeNumber::Show_Array() const {
 cout << "\n배열안에 있는 임의의 값:\n { ";
 for (int k = 0; k < Num; k++) {
  cout << Array[k] << " ";
 }
 cout << "}" << endl;
}

void PrimeNumber::Find_Max_Number() {
 Maximum = Array[0];
 for (int k = 0; k < Num - 1; k++) {
  if (Maximum <= Array[k + 1]) {
   Maximum = Array[k + 1];
  }
  else {}
 }
 cout << "배열에 있는 값 중 제일 큰 값: " << Maximum << endl;
}

void PrimeNumber::Find_Condition() {
 int temp_int = 0;
 double temp = sqrt(Maximum);
 temp_int = static_cast<int>(temp);
 LNum = temp + 1;
}

void PrimeNumber::Run() {
 Show_Array();
 Find_Max_Number();
 Find_Condition();
 Find_Prime_Number();
}

PrimeNumber::~PrimeNumber() {
 delete[] Array;
}