#include <iostream>
#include <cstdint>
using namespace std;
int main() {
    
    int32_t irtifa = 0;
    cout<<"irtifa değerini giriniz :";
    cin>>irtifa; //kullanıcıdan değer isteme 
    cout<<"irtifa:"<<irtifa<<endl;//kullanıcının girdiği değeri yazdırma 
    cout<<"irtifa değişkeninin kapladığı byte :"<<sizeof(irtifa)<<endl; //sizeof değişkeninin bir değişkenin türünün byte türünden ne kadar yer kapladığını gösterir

 
    return 0;
}