//File Name:p01_0212239.cpp
//Author:翁健豪
//Email Address:howarder3@gmail.com
//Assignment Number:1
//Description:Tell user the weight of the diet soda pop the dieter could drink without dying(unit:g).
//Last Changed:September 24,2013


#include<iostream>
using namespace std;

//宣告常數
const double sugar_percent=0.001,Kg_to_g=1000;

int main()
{

	//宣告變數
	double total_sugar,mouse_weight,dieter_weight;
	int soda_pop_amount;
    char y_or_n;

    do
    {
	    //取得所需的資料
        cout<<"請輸入多少含量的糖精足以殺死一隻老鼠:(單位:g)"<<endl;
        cin>>total_sugar;

        cout<<"請輸入老鼠的體重:(單位:g)"<<endl;
        cin>>mouse_weight;

        cout<<"請輸入瘦身完成後的體重:(單位:Kg)"<<endl;
        cin>>dieter_weight;

        //計算過程與顯示敘述
        soda_pop_amount=total_sugar*dieter_weight*Kg_to_g/mouse_weight/sugar_percent;
		cout<<endl<<endl<<endl<<endl<<"以下是計算過程："<<endl;
		cout<<"設最多能吃糖精的量為x"<<endl;
		cout<<"瘦身完成後的體重"<<dieter_weight<<"Kg，等於"<<dieter_weight*Kg_to_g<<"g"<<endl;
		cout<<"老鼠的體重:糖精的量=瘦身完成後的體重:最多能吃糖精的量"<<endl<<"→→→"<<mouse_weight<<":"<<total_sugar<<"="<<dieter_weight*Kg_to_g<<":x"<<endl;
		cout<<"因此x="<<total_sugar<<"*"<<dieter_weight*Kg_to_g<<"/"<<dieter_weight<<endl;
		cout<<"     ="<<total_sugar*dieter_weight*Kg_to_g/dieter_weight<<endl;
        cout<<"而1g減肥汽水只含0.001g的糖精，"<<endl;
		cout<<"所以，可以喝"<<total_sugar*dieter_weight*Kg_to_g/dieter_weight<<"/0.001的減肥汽水"<<endl<<endl;

        //告訴使用者結果
        cout<<"瘦身完成後的人可以喝的減肥汽水重量為"<<soda_pop_amount<<" g."<<endl<<endl<<endl;

        //詢問是否繼續執行程式
        cout<<"請問您是否要再一次執行程式?是的話請打y，要退出程式的話請打n";
        cin>>y_or_n;

        //依使用者給的答案再一次執行程式或關閉程式
    } while (y_or_n=='y'||y_or_n=='Y');

return 0;
}