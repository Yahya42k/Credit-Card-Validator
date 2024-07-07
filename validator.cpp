#include<iostream>
#include<string>


bool isNumberString(const std::string& str){
    int len=str.length();
    for(int i=0;i<len;i++){
        if(str[i]<'0'||str[i]>'9'){
return false;
        }
    }

    return true;

}

int main(){



std::string ccNumber;

 std::cout<<"Using Luhn Algorithm to validate a cc number."<<std::endl;
    std::cout<<"Enter exit to quit"<<std::endl;

while(true){

   std::cout<<"Enter cc number to validate. "<<std::endl;
   std::cin>>ccNumber;

if(ccNumber=="exit"){
    break;
}

if(!isNumberString(ccNumber)){
    std::cout<<"Bad Input! ";
    continue;
}

int len=ccNumber.length();
int doubleEvenSum=0;

for(int i=len-2;i>=0;i=i-2){
int dbl=((ccNumber[i]-48)*2);

if(dbl>9){
    dbl=dbl-9;
}
doubleEvenSum+=dbl;
}

for(int i=len-1;i>=0;i=i-2){
    doubleEvenSum+=(ccNumber[i]-48);
}

std::cout<<((doubleEvenSum%10==0)?" Card Valid!":" Card Invalid!")<<std::endl;


    
}

    return 0;
}