#pragma once
#define __PRIMENUMBER_ONE_TO_HUNDRED__

class PrimeNumber_One_To_Hundred {
protected:

 int *Array;
 int Num;
 int LNum;

public:

 explicit PrimeNumber_One_To_Hundred();

 void Find_Prime_Number();

 void Show_Array() const;

 void Run();

 ~PrimeNumber_One_To_Hundred();
};
