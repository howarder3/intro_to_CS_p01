//File Name:p01_0212239.cpp
//Author:�ΰ���
//Email Address:howarder3@gmail.com
//Assignment Number:1
//Description:Tell user the weight of the diet soda pop the dieter could drink without dying(unit:g).
//Last Changed:September 24,2013


#include<iostream>
using namespace std;

//�ŧi�`��
const double sugar_percent=0.001,Kg_to_g=1000;

int main()
{

	//�ŧi�ܼ�
	double total_sugar,mouse_weight,dieter_weight;
	int soda_pop_amount;
    char y_or_n;

    do
    {
	    //���o�һݪ����
        cout<<"�п�J�h�֧t�q���}�먬�H�����@���ѹ�:(���:g)"<<endl;
        cin>>total_sugar;

        cout<<"�п�J�ѹ����魫:(���:g)"<<endl;
        cin>>mouse_weight;

        cout<<"�п�J�G�������᪺�魫:(���:Kg)"<<endl;
        cin>>dieter_weight;

        //�p��L�{�P��ܱԭz
        soda_pop_amount=total_sugar*dieter_weight*Kg_to_g/mouse_weight/sugar_percent;
		cout<<endl<<endl<<endl<<endl<<"�H�U�O�p��L�{�G"<<endl;
		cout<<"�]�̦h��Y�}�몺�q��x"<<endl;
		cout<<"�G�������᪺�魫"<<dieter_weight<<"Kg�A����"<<dieter_weight*Kg_to_g<<"g"<<endl;
		cout<<"�ѹ����魫:�}�몺�q=�G�������᪺�魫:�̦h��Y�}�몺�q"<<endl<<"������"<<mouse_weight<<":"<<total_sugar<<"="<<dieter_weight*Kg_to_g<<":x"<<endl;
		cout<<"�]��x="<<total_sugar<<"*"<<dieter_weight*Kg_to_g<<"/"<<dieter_weight<<endl;
		cout<<"     ="<<total_sugar*dieter_weight*Kg_to_g/dieter_weight<<endl;
        cout<<"��1g��ΨT���u�t0.001g���}��A"<<endl;
		cout<<"�ҥH�A�i�H��"<<total_sugar*dieter_weight*Kg_to_g/dieter_weight<<"/0.001����ΨT��"<<endl<<endl;

        //�i�D�ϥΪ̵��G
        cout<<"�G�������᪺�H�i�H�ܪ���ΨT�����q��"<<soda_pop_amount<<" g."<<endl<<endl<<endl;

        //�߰ݬO�_�~�����{��
        cout<<"�аݱz�O�_�n�A�@������{��?�O���ܽХ�y�A�n�h�X�{�����ܽХ�n";
        cin>>y_or_n;

        //�̨ϥΪ̵������צA�@������{���������{��
    } while (y_or_n=='y'||y_or_n=='Y');

return 0;
}