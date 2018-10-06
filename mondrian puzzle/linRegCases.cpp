#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<math.h>
#include<iomanip>

using namespace std;

double log(vector<double> x,vector<double> y,int input){
    int n=x.size();
    double xsum=0,x2sum=0,ysum=0,xysum=0,lny[n],a,b,c;
    for(int i=0;i<n;i++){
        lny[i]=log(y[i]);
    }
    for(int i=0;i<n;i++){
        xsum=xsum+x[i];
        ysum=ysum+lny[i];
        x2sum=x2sum+pow(x[i],2);
        xysum=xysum+x[i]*lny[i];
    }
    a=(n*xysum-xsum*ysum)/(n*x2sum-xsum*xsum);
    b=(x2sum*ysum-xsum*xysum)/(x2sum*n-xsum*xsum);
    c=pow(2.71828,b);
    return c*pow(2.71828,a*input);
}
double linear(vector<double> x, vector<double> y, int start){
    int n = x.size();
    double s_x = accumulate(x.begin(),x.end(),0.0);
    double s_y = accumulate(y.begin(),y.end(),0.0);
    double s_xx = inner_product(x.begin(),x.end(),x.begin(),0.0);
    double s_xy = inner_product(x.begin(),x.end(),y.begin(),0.0);
    return (2+((n*s_xy-s_x*s_y)*abs(start-2))/(n*s_xx-s_x*s_x));
}

double linear1(vector<double> x, vector<double> y, int start){
    int n = x.size();
    double s_x = accumulate(x.begin(),x.end(),0.0);
    double s_y = accumulate(y.begin(),y.end(),0.0);
    double s_xx = inner_product(x.begin(),x.end(),x.begin(),0.0);
    double s_xy = inner_product(x.begin(),x.end(),y.begin(),0.0);
    return (4+((n*s_xy-s_x*s_y)*abs(start-3))/(n*s_xx-s_x*s_x));
}

int main(){
    ifstream myinfile;
    vector<double>x,y;
    int input;
    myinfile.open("already computed table.txt");
    if(myinfile.is_open()){
        cout<<"good"<<endl;
    }else{
        cout<<"file doesn't exist"<<endl;
    }
    while(!myinfile.eof()){
        myinfile>>input;
        x.push_back(input);
        myinfile>>input;
        y.push_back(input);
    }
    myinfile.close();

    /*
    for(int i=0;i<x.size();i++){
        cout<<y[i]<<" "<<x[i]<<endl;
    }*/

    cout<<"4 Linear Guess: "<<round(linear(x,y,4))<<endl;
    cout<<"8 Linear Guess: "<<round(linear(x,y,8))<<endl;
    cout<<"10 Linear Guess: "<<round(linear(x,y,10))<<endl;
    cout<<"20 Linear Guess: "<<round(linear(x,y,20))<<endl;
    cout<<"25 Linear Guess: "<<round(linear(x,y,25))<<endl;
    cout<<"32 Linear Guess: "<<round(linear(x,y,32))<<endl;
    cout<<"50 Linear Guess: "<<round(linear(x,y,50))<<endl<<endl;
    cout<<"4 Log Guess: "<<round(log(x,y,4))<<endl;
    cout<<"8 Log Guess: "<<round(log(x,y,8))<<endl;
    cout<<"10 Log Guess: "<<round(log(x,y,10))<<endl;
    cout<<"20 Log Guess: "<<round(log(x,y,20))<<endl;
    cout<<"25 Log Guess: "<<round(log(x,y,25))<<endl;
    cout<<"32 Log Guess: "<<round(log(x,y,32))<<endl;
    cout<<"50 Log Guess: "<<round(log(x,y,50))<<endl;

    x.clear();
    y.clear();

    myinfile.open("table without 3.txt");
    if(myinfile.is_open()){
        cout<<"good"<<endl;
    }else{
        cout<<"file doesn't exist"<<endl;
    }
    while(!myinfile.eof()){
        myinfile>>input;
        x.push_back(input);
        myinfile>>input;
        y.push_back(input);
    }
    myinfile.close();
    cout<<endl<<"Guesses without 3 included"<<endl<<endl;
    cout<<"4 linear1 Guess: "<<round(linear1(x,y,4))<<endl;
    cout<<"8 linear1 Guess: "<<round(linear1(x,y,8))<<endl;
    cout<<"10 linear1 Guess: "<<round(linear1(x,y,10))<<endl;
    cout<<"20 linear1 Guess: "<<round(linear1(x,y,20))<<endl;
    cout<<"25 linear1 Guess: "<<round(linear1(x,y,25))<<endl;
    cout<<"32 linear1 Guess: "<<round(linear1(x,y,32))<<endl;
    cout<<"50 linear1 Guess: "<<round(linear1(x,y,50))<<endl<<endl;
    cout<<"4 Log Guess: "<<round(log(x,y,4))<<endl;
    cout<<"8 Log Guess: "<<round(log(x,y,8))<<endl;
    cout<<"10 Log Guess: "<<round(log(x,y,10))<<endl;
    cout<<"20 Log Guess: "<<round(log(x,y,20))<<endl;
    cout<<"25 Log Guess: "<<round(log(x,y,25))<<endl;
    cout<<"32 Log Guess: "<<round(log(x,y,32))<<endl;
    cout<<"50 Log Guess: "<<round(log(x,y,50))<<endl;
    return 0;
}
