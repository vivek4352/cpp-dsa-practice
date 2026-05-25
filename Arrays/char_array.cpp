#include <iostream>
#include <cstring>
#include <string>
using namespace std;


    // char work[50];
    // cout << "enter your work : ";
    // cin>> work;
    // cout<<"your work is : "<<work<<endl;
    // cout << "length : "<<strlen(work)<<endl;
    // char sentence[50];
    // cout << "enter your sentence : ";
    // cin.getline(sentence, 50, '.');
    // cout<<"your sentence is : "<<sentence<<endl;
    // cout << "length : "<<strlen(sentence)<<endl;
    
// void toupper(char word[], int n){
//     for (int i= 0 ; i<n ; i++){
//         char ch = word[i];
//         if (ch >= 'A'&& ch <= 'Z'){
//             continue;
//         }else {
//             word[i]= ch - 'a' + 'A';
//         }
//     }cout<<"word in uppercase : "<<word<<endl;

//}

// void toupper(char word[], int n){
//     for (int i= 0 ; i<n ; i++){
//         char ch = word[i];
//         if (ch >= 'A'&& ch <= 'Z'){
//             continue;
//         }else {
//             word[i]= ch - 'a' + 'A';
//         }
//     }cout<<"word in uppercase : "<<word<<endl;
// }

// void reverse(char word[], int n){
//     int s= 0 , e = n-1;
//     while(s<e){
//         swap(word[s], word[e]);
//         s++ , e--;
//     }
//     cout<<"reversed word : " <<word<<endl;
//}

// bool ispalindrome(char word[], int n){
//     int s =0 , e = n-1;
//     while(s<e){
//         if (word[s] != word[e]){
//             cout<<word << " is not a valid palindrome"<<endl;
//             return false;
//         }
//         s++ , e--;
//     }
//     cout<<word<< " is a valid palindrome"<<endl;
//     return true;
// }
// int main() {
//     char word[]= "racecar";
//     bool result = ispalindrome(word, strlen(word));

//     return 0;
//}

// int main(){
//     char str[100];
//     char str2[100]= "hello vivek";
//     strcpy(str , str2); COPY SECONT STRING TO FIRST STIRING
//     cout<<str<<endl;
// }
// int main(){
//     char str[100]= "hello";
//     char str2[100]= " vivek";
//     strcat(str , str2); COMBINE BOTH STRINGS 
//     cout<<str<<endl;
// }
// int main(){
//     char str[100]= "xyz";
//     char str2[100]= "abc"; // COMPARE BOTH THE STRINGS +VE AND -VE VALUE OUTPUT
//     cout<<strcmp(str , str2)<<endl;
// }
// int main(){
//     string str = "hello";
//     cout <<str<< endl;
//     str = "vivek";
//     cout<< str << endl;

// }
// int main(){
//     string str;
//     getline(cin , str , '@');
//     cout<< str << endl;

// }
// int main(){
//     string  str = "viveksitole";
//     // for (int i = 0 ; i <  str.length(); i++){
//     //     cout<< str [i] << "_";
//     // }
//     for (char ch : str){
//         cout<<ch<<"-";
//     }
//     cout<<endl;

// }
// int main(){
//     string str = "hello rgpv i am in th library";
//     cout<< str.length()<<endl;
//     cout<< str.at(20)<<endl;
//     cout<<str.substr(15 , 20)<<endl;
//     cout<<str.find("library")<<endl;
// }


// EXMAPLE VALID ANAGRAM <<

int main(){
    string str1 = "anagram";
    string str2 = "nagaram";
    if(str1.length()== str2.length()){
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 == str2){
        cout << "VALID ANAGRAM"<<endl;
    }else{
        cout<<"NOT AVALID ANAGRAM"<<endl;
    }
    }else {
        cout<<"NOT AVALID ANAGRAM"<<endl;    }
}