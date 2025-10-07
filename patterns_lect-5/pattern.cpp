// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
12345
1234
123
12
1

*
**
***
****
*****
****
***
**
*

*/

void print5 (int n){
        // for(int i=0;i<n;i++){
        //     for( int j=n;j>i;j--){
        //         cout<<"*"<<" ";
        //     }
        //     cout<<endl;

        // }
        for(int i = 0 ;i<n ;i++){
            for (int j=0 ;j<n-i;j++){
                cout<<"* ";
            }
            cout<<endl;}}
void print6 (int n){
        for(int i = 0 ;i<n ;i++){
            for (int j=1 ;j<=n-i;j++){
                cout<< j;
            }
            cout<<endl;
        }
}
void print7 (int n){
        for(int i = 0 ;i<n ;i++){
            //space
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }

            //star
            for(int j=0; j<2*i+1; j++){
                cout<<"*";
            }
            //space
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            cout<<endl;
            }
        
        }
void print8 (int n){
        for(int i = n-1 ;i>=0 ;i--){
            //space
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }

            //star
            for(int j=0; j<2*i+1; j++){
                cout<<"*";
            }
            //space
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            cout<<endl;
            }
        
        }
void print10 (int n){
        for(int i = 1 ;i<=2*n-1 ;i++){
            int stars =i ;
            if(i>n) stars = 2*n-i;
            for(int j=1;j<=stars;j++){
                cout<<"*";
            }
            cout<<endl;
            }
        
        }
void print11(int n){
        for(int i = 0 ;i<n ;i++){
            int stars =i ;
            if(i>n) stars = 2*n-i;
            for(int j=1;j<=stars;j++){
                cout<<"*";
            }
            cout<<endl;
            }
        
        }

int main(){
    
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print11(n);
    }
}
    

        

        


