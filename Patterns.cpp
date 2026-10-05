#include<iostream>
using namespace std;

void print1(int n) {
    for(int i=0 ; i<n ; i++){  
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


void print2(int n) {
    for(int i = 0;i<n ;i++){
        for(int j =0; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print3(int n) {
    for(int i = 1; i<n ; i++) {
        for(int j =1 ; j <= i ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print4(int n) {
    for(int i = 1; i<n ; i++) {
        for(int j =1 ; j <= i ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void print5(int n) {
    for(int i = n; i>0 ; i--) {
        for(int j =1 ; j <=i  ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print6(int n) {
    for(int i = n; i>0 ; i--) {
        for(int j =1 ; j <=i  ; j++){
            cout<<j ;
        }
        cout<<endl;
    }
}

void print7() {
    for(int i =1 ; i<5 ; i++) {
        for(int j =1 ; j <=i   ; j++){
            cout<<"* " ;
        }
        cout<<endl;
    }
}

void print8(int n) {
    //rows
    for(int i = 0;i<n ; i++) {
        //spaces
        for(int j = 0; j<n-i-1 ;j++ ){
            cout<<" ";
        }
        //stars
        for(int k =0 ; k< 2*i+1 ; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print9(int n) {
    for(int i = 0 ; i<n ; i++){
        //spaces
            for(int j = 0; j < i ; j++) {
                cout<<" ";
            }
        //stars 
            for(int k =0 ; k < ( 2*n - 2*i - 1) ; k++){
                cout<<"*";
            }    
            cout<<endl;
    }
}




int main() {
        print1(5);
        cout<<"--------------------------------------"<<endl;
        print2(5);
        cout<<"--------------------------------------"<<endl;
        print3(6);
        cout<<"--------------------------------------"<<endl;
        print4(6);
        cout<<"--------------------------------------"<<endl;
        print5(5);
        cout<<"--------------------------------------"<<endl;
        print6(5);
        cout<<"--------------------------------------"<<endl;
        print7();
        cout<<"--------------------------------------"<<endl;
        print8(5);
        cout<<"--------------------------------------"<<endl;
        print9(5);





        return 0;

}