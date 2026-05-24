#include<iostream>
using namespace std;
int main(){
    // int age ;
    // cout<<"enter your age\n";
    // cin>>age;
    // if(age >= 18){
    //     cout<<"can vote\n";
    // }
    // else{
    //     cout<<"can not vote\n";
    //}


    // EXAMPLE if , else
    // int a = 4;
    // int b = 5;
    // if(a >= b){
    //     cout<< a <<endl;
    // }
    // else{
    //     cout << b <<endl;
    // }
    // int num;
    // cout<<"enter a number : "<<endl;
    // cin>>num;
    // if(num % 2 == 0){
    //     cout<<"it is a even number : " << num<<endl;
    // }
    // else {
    //     cout<<"it is a odd number : " << num << endl;
    // }



    // EXAMPLE else if
    // int marks ;
    // cout<<"enter your marks : "<<endl;
    // cin>>marks;
    // if (marks >= 90 ){
    //     cout<<" Grade A "<<endl;
    // }
    // else if (marks >= 80){
    //     cout<<" Grade B "<<endl;
    // }
    // else{
    //     cout<<"Grade C "<<endl;
    // }




    // int income;
    // float tax;
    // cout<<"enter income (in lakhs) : "<<endl;
    // cin>>income;
    // if (income <= 5 ){
    //     tax = 0;
    // }else if (income <= 10 ){
    //     tax = 0.2 * income ;
    // }else{
    //     tax = 0.3 * income ;
    // }
    // cout<< "tax : "<< (tax*100000) <<endl;


    // EXAMPLE 
    // int a , b , c;
    // cout<<"enter A : "<<endl;
    // cin>> a;
    // cout<<"enter B : "<<endl;
    // cin>>b;
    // cout<<"enter C : "<<endl;
    // cin>>c;

    // if ((a >= b) && (a >= c)){
    //     cout<<" A is larger number : "<< a <<endl;
    // }else if (b >= c ){
    //     cout<<" B is larger number : "<< b <<endl;
    // }else {
    //     cout<<" C is larger number : "<< c <<endl;
    // }


    
    // bool isadult;
    // int age;
    // cout<<"Enter age : "<<endl;
    // cin>> age;
    // isadult = age >= 18 ? true : false;
    // cout<<isadult<<endl;
    
    // int a = 10;
    // int b = 20;
    // int larger = a >= b ? a :b;
    // cout<<"larger number is : "<< larger<<endl;

    int day;
    cout<<"enter day number : "<<endl;
    cin >> day ;
    switch (day){
        case 1 : cout << "monday"<<endl;
        break;
        case 2 : cout << "tuesday"<<endl;
        break;
        case 3 : cout << "wednsday"<<endl;
        break;
        case 4 : cout << "thusday"<<endl;
        break;
        case 5 : cout << "friday"<<endl;
        break;
        case 6 : cout << "saturday"<<endl;
        break;
        case 7 : cout << "sunday"<<endl;
        break;
        default : cout<< "invalid number\n";


    }

    return 0;
}