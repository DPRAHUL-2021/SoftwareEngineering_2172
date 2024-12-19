#include<bits/stdc++.h>
using namespace std;
int main(){
    float prediction ,temp = 10,humi = 20,wind = 30;
    string result;
    cout<<"Enter The Values of Temp , Humi , Wind" <<endl;
    cin>>temp>>humi>>wind;
    prediction = pow((0.5 * temp),2) - 0.2 * humi + 0.1 * wind - 15;
    if(prediction > 300){
        result = "Sunny";
    }
    else if(200 < prediction && prediction <= 300){
        result = "Cloudy";
    }
    else if(100 < prediction && prediction <= 200){
        result = "Rainy";
    }
    else if(prediction <= 100){
        result = "Stormy";
    }
    else{
        result = "Error Occured";
    }
    cout<<"The Weather Predicted Is : "<<result;
}