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
            int start =1 ;
        for(int i = 0 ;i<n ;i++){
        if(i%2==0) start =1;
        else start =0;
        for(int j =0;j<=i;j++){
            cout<<start;
            start =1-start;
        }
        cout<<endl;

            
            }
        
        }
void print12(int n){
            for(int i=1 ;i<=n ;i++){
                //numbers
                for(int j=1;j<=i;j++){
                    cout<<j;
                }

                // spaces
                for(int j=1;j<=2*(n-i);j++){
                    cout<<" ";
                }

                // numbers
                for(int j=i;j>=1;j--){
                    cout<<j;
                }
                cout<<endl;
            }
        }
void print13(int n){
        int num = 1;
    for(int i=1; i<=n ; i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }

        cout<<endl;
    }
}
void print14(int n){
    
    for(int i =0; i<n;i++){
        for(char ch ='A';ch<='A'+i;ch++){
            cout<<ch <<" ";
        }
        cout<<endl;
    }
}
void print15(int n){
    for (int i =1;i<=n;i++){
        for (char ch='A'; ch<='A'+ n-i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
void print16(int n){
    // char ch='A';
    for(int i=0 ;i<n;i++){
        char ch='A' + i;
        for(int j= 0;j<=i;j++){
            cout<<ch<<" ";
            
            
        }
        cout<<endl;
    }
    
}

void print17(int n){
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
    
        //Alphabets 
        char ch = 'A';
        if((2*i+1))
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
            if(j<(2*i+1)/2) ch++;
            else ch--;
        }


        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;
    }
}
void printp(int n){
    for(int i=1;i<=n;i++){
        int num=n-i+1;
        for(int j=1;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
        /*
        5
        45
        345
        2345
        12345
        */
    }

}
void print18(int n){
    // char ch='A';
    // for(int i=1;i<=n;i++){
    //     int ch= 'A'+(n-i);
    //     for(int j=1;j<=i;j++){
    //         cout<< char(ch) <<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    //     /*
    //     E
    //     DE
    //     CDE
    //     BCDE
    //     ABCDE
    //     */
    // }
    for(int i=0 ;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){ // for input n = 5 only
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}

void print19(int n){
    for(int i =0;i<n;i++){
        // int inspace=0;
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<2*i;j++){
            cout<<" ";
        
        }
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
            
        }
        // inspace +=2;
        cout<<endl;
    }
    
    for(int i =1;i<=n;i++){
        // int inspace=0;
        
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<2*(n-i);j++){
            cout<<" ";
        
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
            
        }
        // inspace +=2;
        cout<<endl;

    }

}
void print20(int n){
    for (int i = 1;i<=2*n-1;i++){
        if(i<=n){
             //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        
        // spaces
        for(int j=1;j<=2*(n-i);j++){//8  for n = 5
            cout<<" ";
        }

        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }


        cout<<endl;
        }
    else{
        //stars
        for(int j=1;j<=2*n-i;j++){
            cout<<"*";
        }
        
        // spaces
        for(int j=1;j<=2*(i-n);j++){//8  for n = 5
            cout<<" ";
        }

        //stars
        for(int j=1;j<=2*n-i;j++){
            cout<<"*";
        }


        cout<<endl;
    }
        
        
    }
}
void print20c(int n){
    int space = 2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) space +=2;
        else space -=2;
                
    }
    
}
void print21(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }


}

void print22(int n){

    for(int i =0 ; i<2*n-1;i++){
        for(int j =0 ;j<2*n-1;j++){
            int top=i;
            int left =j;
            int right =2*n-2-j;
            int bottom =2*n-2-i;
            cout << (n- min(min(top,bottom),min(left,right))) <<" ";
            
        }
        cout<< endl;
    }
}
int main(){
    
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print22(n);
    }
}
    

        

        


