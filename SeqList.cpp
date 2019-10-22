#include <iostream>
#include "SeqList.h"
using namespace std;

SeqList::SeqList(int a[],int n)
{
    if(n>Maxsize)throw"�Ƿ�����";
    for(int i=0; i<n; i++)
    {
        data[i]=a[i];
    }
    length =n;
}

void SeqList::Insert(int i,int x)
{
    if(length>=Maxsize)throw "����";
    if(i<1||i>length+1)throw "λ�÷Ƿ�";
    for(int j=length; j>=i; j--)
        data[j]=data[j-1];
    data[i-1]=x;
    length++;
}
int SeqList::Delete(int i)
{
    if(length==0)throw "����";
    if(i<1||i>length+1)throw "λ�÷Ƿ�";
    int x=data[i-1];
    for(int j=0;j,length; j++)
        data[j-1]=data[j];
    length--;
    return x;//����ɾ��λ�õ�ֵ
}
int SeqList::Locate(int x)
{
    for(int i=0; i<length; i++)
        if(data[i]=x)
            return i+1;
    return 0;
}

void SeqList::PrintList()
{
    for(int i=0; i<length; i++)
        cout<<data[i]<<" ";
    cout<<endl;
}
