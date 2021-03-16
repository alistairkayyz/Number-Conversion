#include <iostream>
#include <math.h>
using namespace std;

int fromBinaryToDecimal(long int binary, int radix, int decimal)
{
   if(binary%10)
   {
       decimal += pow(2, radix);
       binary = (binary - 1) / 10;
       radix++;
       fromBinaryToDecimal(binary, radix, decimal);
   }
   else if(binary != 0)
   {
       binary /= 10;
       radix++;
       fromBinaryToDecimal(binary, radix, decimal);
   }
   if(binary == 0)
       return decimal;

}

int main()
{
    int binNum;
    int choice = 1;
    do{
        cout<<"Enter a BINARY number you want to convert to decimal.\n";
        cin>>binNum;
        cout<<binNum<<" = "<<fromBinaryToDecimal(binNum, 0, 0)<<" in decimal "<<endl;
        cout<<"Enter 1 to try again and any number to exit!\n";
        cin>>choice;

    }while(choice == 1);

   return 0;
}
