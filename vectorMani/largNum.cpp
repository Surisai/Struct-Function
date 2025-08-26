//finding Large number in an array and second large number
#include <iostream>
using namespace std;
 
 int main() {
     int arr[] = {12,22,34,11,3,4};
     int size= 6;
     int larG = arr[0];
     int SeLar = -1;

     
     for(int i = 1 ; i < size ; i++){
         if (arr [i] > larG){
            SeLar = larG;
            larG= arr[i];
          
         }else if (arr[i] > SeLar && arr[i] < larG)
         {
             SeLar = arr[i];
         }
     }
         cout << "Second Largest number = " << SeLar<<endl;
         cout << "Largest number = " << larG << endl;
     
         
     
     return 0 ;
 }
