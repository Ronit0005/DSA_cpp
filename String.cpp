/*#include <iostream>
using namespace std;

int Calc(int noOfDays,int amount,int i){
    i++;
     if(i==noOfDays+1){
        return amount;
     }
     else{
        return 2*Calc(noOfDays,amount,i);
     }
    }
int main(){
    int n,amt;
    cout<<"Enter the numbers of day :";
    cin>>n;
    cout<<"Enter the Your amount : ";
    cin>>amt;
    cout<<"The final amount after n number of days : "<<Calc(n,amt,0)/2;

    return 0;
}
    */

#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
int main(){
    // char str[100];
    // cout<<"Enter the string : ";
    // //cin>>str;
    // //cout<<str;
    // cin.getline(str,1000,'.');
    // cout<<str;
    // char str[]="Ronit Kumar Singh";
    // int l=0;
    // for(int i=0;str[i]!='\0';i++){
    //     l++;
    // }
    // cout<<"The length of the character array is : "<<l;
    // char str[100];
    // cout<<"Enter the string in character array : ";
    // cin.getline(str,1000,':');
    // cout<<"The length of the character array : "<<str;
    // string str="Ronit";
    // string st="Kumar Singh";
    //cout<<"Concatination of two strings can be done by : "<<str+' '+st;
    //cout<<(str==st);
   // cout<<(str>st); // Comparies the ASCII value 
    //cout<<"The lenght of the string : "<<(str+' '+st).length();
    // string str;
    // cout<<"Enter the string : ";
    // cin>>str;
    // cout<<"Output : "<<str;
    // string str;
    // getline(cin,str);
    // cout<<str;
    // REVERSE AN STRING :
    // string str;
    // str="mom";string rev="";
    // for(int i=0;i<str.length();i++){
    //    rev=str[i]+rev;
    // }
    // cout<<"Reverse of an array : "<<rev;
    string str="Ronit Kumar Singh";
    reverse(str.begin(),str.end());
    cout<<str;
    return 0;
}