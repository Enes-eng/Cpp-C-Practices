#include<iostream>
#include<cstdint>
using namespace std;
int main() {
    
    constexpr int32_t MAX_IRTIFA = 5000;
    constexpr int32_t MIN_IRTIFA = 0;
    
    int32_t irtifa = 0;

    cout<<"Bir irtifa değeri giriniz:";
    cin>>irtifa;
    if(irtifa<=MAX_IRTIFA&&irtifa>=MIN_IRTIFA){ //if yapısı karar vermede kullanılan bir yapıdır
        cout<<"girdiğiniz irtifa değeri geçerlidir";


    }else if(irtifa > MAX_IRTIFA){
        cout<<"Dikkatli olun irtifa seviyesi max irtifadan yüksek";

    }else{
        cout<<"geçersiz irtifa değeri";
    }
    
    

 
    return 0;
}