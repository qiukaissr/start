#include <iostream>
#include "SeqList.h"
using namespace std;

SeqList::SeqList(int a[],int n)
{
    if(n>Maxsize)throw"非法参数";
    for(int i=0; i<n; i++)
    {
        data[i]=a[i];
    }
    length =n;
}

void SeqList::Insert(int i,int x)
{
    if(length>=Maxsize)throw "上溢";
    if(i<1||i>length+1)throw "位置非法";
    for(int j=length; j>=i; j--)
        data[j]=data[j-1];
    data[i-1]=x;
    length++;
}
int SeqList::Delete(int i)
{
    if(length==0)throw "下溢";
    if(i<1||i>length+1)throw "位置非法";
    int x=data[i-1];
    for(int j=0;j,length; j++)
        data[j-1]=data[j];
    length--;
    return x;//返回删除位置的值
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
