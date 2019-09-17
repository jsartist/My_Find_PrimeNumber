#include "PrimeNumber_Header.h"

int main() {
 int Array[] = { 10, 17, 30, 573, 65, 97 };
 int *p = Array;

 PrimeNumber_One_To_Hundred *POTH = new PrimeNumber_One_To_Hundred();
 POTH->Run();

 PrimeNumber *PN = new PrimeNumber(p, ( sizeof(Array) / 4 ) );
 PN->Run();

 delete POTH, PN;
}