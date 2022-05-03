#include <iostream>
#include <string> 
using namespace std;

#define TOTAL 1

//not real keys
string keys[TOTAL]={
    "test"
};

int main(){
    int num;
    cin >> num;
    int im,death;
    //依序輸入 境外、死亡 個案
    cin >> im >> death;
    int kel,tpe,ntpc,tyn,hsh,hsc,txg,tnn,khh,ila,hun;
    //依序輸入 基隆、台北、新北、桃園、竹縣、竹市、台中、台南、高雄、宜蘭、花蓮 確診數
    cin >> kel >> tpe >> ntpc >> tyn >> hsh >> hsc >> txg >> tnn >> khh >> ila >> hun;
    string output;
    for(int i=0;i<TOTAL;++i){
        if(i!=0){
            output += " && ";
        }
        output += "curl -H \"Authorization: Bearer " + keys[i] 
            + "\" -d \"message=%E6%9C%AC%E5%9C%9F%20" + to_string(num) 
            + "%0D%0A%E5%A2%83%E5%A4%96%20" + to_string(im)
            + "%0D%0A%E6%AD%BB%E4%BA%A1%20" + to_string(death) 
            + "%0D%0A%0D%0A%E5%9F%BA%E9%9A%86%20" + to_string(kel) 
            + "%0D%0A%E5%8F%B0%E5%8C%97%20" + to_string(tpe)
            + "%0D%0A%E6%96%B0%E5%8C%97%20" + to_string(ntpc) 
            + "%0D%0A%E6%A1%83%E5%9C%92%20" + to_string(tyn)
            + "%0D%0A%E7%AB%B9%E7%B8%A3%20" + to_string(hsh)
            + "%0D%0A%E7%AB%B9%E5%B8%82%20" + to_string(hsc)
            + "%0D%0A%E5%8F%B0%E4%B8%AD%20" + to_string(txg)
            + "%0D%0A%E5%8F%B0%E5%8D%97%20" + to_string(tnn)
            + "%0D%0A%E9%AB%98%E9%9B%84%20" + to_string(khh)
            + "%0D%0A%E5%AE%9C%E8%98%AD%20" + to_string(ila)
            + "%0D%0A%E8%8A%B1%E8%93%AE%20" + to_string(hun) 
            + "%20%E7%AD%89%20%0D%0A(%E6%AD%A4%E7%82%BA%E6%AF%8F%E6%97%A5%E6%96%B0%E5%A2%9ECovid-19%E7%A2%BA%E8%A8%BA%E6%95%B8%E5%8D%B3%E6%99%82%E9%80%9A%E5%A0%B1%E3%80%82%E5%83%85%E6%8F%90%E4%BE%9B%E9%83%A8%E5%88%86%E7%B8%A3%E5%B8%82%E8%B3%87%E8%A8%8A)"
            + "\" https://notify-api.line.me/api/notify";
    } 
    cout << output;   
    //system(output.c_str());
}