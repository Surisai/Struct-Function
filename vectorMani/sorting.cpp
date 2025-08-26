//sorting number ascending/Descending check 
#include <iostream>
using namespace std;
int main(){
    
 int arr [] = {9,8,6,5,4,2,1};
 int size = 7;
bool asC= true;
bool deC = true;


for(int i = 1 ; i < size ; i ++){
    if(arr[i] < arr[i-1]){
        asC = false;
    }
    if(arr[i] > arr[i-1]){
        deC = false;
    }
}

if(asC) cout << "Array is Sorted inAscending order "<<endl;
else if(deC) cout << "Array is Sorted in Descending order" << endl;
else cout << "Array is Not sorted" <<endl;
return 0;
}