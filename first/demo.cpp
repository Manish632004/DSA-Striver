#include<bits/stdc++.h> // standard template library (contain all the libaraies)
// #include<iostream>
using namespace std;

// int main(){
// int , long , long long , float , double

//string and getline


// string s2 , s3;
// cin>> s2 >> s3;
// cout<< s2 << " " << s3;
    // string str;
    // getline(cin, str);
    // cout << str;

// char

// char ch;
// cin>> ch;
// cout<< ch;

//write a program that takes an input of age 
//and prints if you are adult or not
// int age ;
// cin>>age;
// if(age>=18){
//     cout<<"You are adult";
// }
// else if(age<10){
//     cout<<"You are not even teen";
// }


/* A school has following rules for grading system:
a. below 25 -F
b. 25 to 44 -E
c. 45 to 49 -D
d. 50 to 59 -C
e. 60 to 79 -B
f. above 80 -A

ask user to enter marks and print the corresponding garde*/

// int age;
// cin >> age;

// if(age<=18){
//     cout<<" not eligible for job";

// }
// else if (age>18){
//     cout<<"eligible for job";
//     if (age>=50){
//         cout<<"  you are eligible for job but retirment soon ";
//     }
// }


// int day;
// cin>>day;
// switch (day){
//     case 1:
//         cout<<"Monday";
//         break;
//     case 2:
//         cout<<"Tuesday";
//         break;
//     case 3:
//         cout<<"Wednesday";
//         break;
//     case 4:
//         cout<<"Thursday";
//         break;
//     case 5:
//         cout<<"Friday";
//         break;
//     case 6:
//         cout<<"Saturday";
//         break;
//     case 7:
//         cout<<"Sunday";
//         break;
//     default:
//         cout<<"Invalid day";
//         break;
// }

// Array

// 1-d array

// int arr[5];

// cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

// cout<< arr[0];

// 2D array
// int arr[2][3];
// cin>>arr[0][0]>>arr[0][1]>>arr[0][2]>>arr[1][0]>>arr[1][1]>>arr[1][2];
// cout<< arr[0][0]<<endl;
// cout<< arr[1][2];

//string

// string s ="Striver";

// int len =s.length();
// int leng =s.size();
// s[len-1]='z';
// cout << s[len-1]<<endl;
// cout<<s<<endl;
// cout<<len<<endl;
// cout<<leng<<endl;


//for loop
// cout<<"striver"<<endl;

// for(int i =5; i>0;i--){
//     cout<<"striver"<< i <<endl;
// }
// for(int i =1; i<=10;i++){
//     cout<<"striver"<<endl;
// }


//while loop

// int i =7;
// while(i>0){
//     cout<<"striver"<< i <<endl;
//     i--;
// }

//do while loop  


// function 

//modulartiry 
// readability
// multiple use time 

// void - which does not return anything 
// return 
// parameterised 
// non parameterised 


//take tow number and print their sum 

//two number which one is maximum

int maxx (int x ,int y ){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int sum(int a,int b){

    return a+b;
}

void printName (string name){
    cout<<"Hey "<<name<<endl;

}

//pass by value  -- copy of the variable is passed
void doSomething(int num ){
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;
}
// pass by reference -- address of the variable is passed --array is passed by reference
void doSomethingRef(int &num ){
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;
}

int main (){
// cout << "Hello World" << endl;
// string name;
// cin>>name;

// int a,b;
// cin>>a>>b;
// cout<<sum(a,b)<<endl;

// int x,y ;
// cin>>x>>y;
// cout<<"max number is :"<<maxx(x,y)<<endl;

// printName(name);
int num = 10;
doSomething(num);
cout <<"by value num is :"<< num << endl;
doSomethingRef(num);
cout <<"by reference num is :"<< num << endl;
return 0;
} 
