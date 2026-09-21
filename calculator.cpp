#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
 template<typename...numbers>
    void add (numbers...nums){
        double arr[]={(double)nums ...};
        double result =arr[0];

        for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
            result = result +  arr[i];
        }cout<<" addition is "<<result <<endl;
    }
 template<typename...numbers>
    void sub (numbers...nums){
        double arr[]={(double)nums ...};
        double result =arr[0];

        for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
            result = result - arr[i];
        }cout<<"subtraction is "<<result <<endl;
    }
 template<typename...numbers>
    void multiply (numbers...nums){
        double arr[]={(double)nums ...};
        double result =arr[0];

        for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
            result = result * arr[i];
        }cout<<"multiplication is "<<result <<endl;
    }
 template<typename...numbers>
    void divide(numbers...nums){
        double arr[]={(double)nums ...};
        double result =arr[0];

        for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
            result = result /arr[i];
        }cout<<"divide is "<<result <<endl;
    }
  template<typename...numbers>
    void mod_division(numbers...nums){
        int arr[]={nums ...};
        int result =arr[0];

        for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
            result = result % arr[i];
        }cout<<"mod_division is "<<result <<endl;
    }  
    void inverse(double num){
        cout<<"inverse is="<<1/num;
    }void power(double num,double num2){
        cout<<"power is="<<pow(num,num2)<<endl;
    }
int main(){
power(5,1/2);
}