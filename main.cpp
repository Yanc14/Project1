#include <iostream>
using namespace std;
#include<string>
#define MAX 1000
//1、展示菜单
void showMenu()
{
    cout << "***************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "***************************" << endl;
}
//创建联系人和通讯录结构体
struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Address;
};
struct Addressbooks
{
    //创建通讯录结构体
    struct Person personArray[MAX];
    int m_Size;
};
//2、添加联系人
void Addperson(Addressbooks *abs)
{
    if(abs->m_Size==MAX)
    {
        cout<<"通讯录已满，添加失败！"<<endl;
        return;
    }
    else
    {
        //添加联系人信息
        //姓名
        string name;
        cout<<"请输入姓名:"<<endl;
        cin>>name;
        abs->personArray[abs->m_Size].m_Name=name;
        //性别
        int sex=0;
        cout << "请输入性别：" << endl;
        cout << "1------男" << endl;
        cout << "2------女" << endl;
        while(true)
        {
            cin >> sex;
            if(sex==1||sex==2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            else
            {
                cout<<"请重新输入："<<endl;
            }
        }
        
        //年龄
        cout<<"请输入年龄"<<endl;
        int age=0;
        cin>>age;
        abs->personArray[abs->m_Size].m_Age=age;
        
        //手机号
        cout << "请输入手机号" << endl;
        int phone = 0;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;
        
        // 地址
        cout << "请输入地址" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Address = address;

        //更新用户数
        abs->m_Size++;

        cout<<"添加成功"<<endl;

        system("pause");//暂停等待任意输入
        system("cls");//清空屏幕
    }
};
//3、显示联系人
void Showperson(Addressbooks *abs)
{
    //显示所有联系人
    //判断通讯录中的人数是否为零
    if(abs->m_Size==0)
    {
        cout<<"通讯录为空！"<<endl;
    }
    else
    {
        for(int i=0;i<abs->m_Size;i++)
        {
            cout << "姓名："  <<abs->personArray[i].m_Name << endl;
            cout << "性别：" << abs->personArray[i].m_Sex << endl;
            cout << "年龄：" << abs->personArray[i].m_Age << endl;
            cout << "电话：" << abs->personArray[i].m_Phone << endl;
            cout << "住址：" << abs->personArray[i].m_Address<< endl;
        }
    }

    system("pause");
    system("cls");
};

int main()
{

    //创建通讯录实体
    Addressbooks abs;
    //初始化
    abs.m_Size=0;;
    while(true){
        showMenu();//展示菜单
        int select = 0; //选择功能
        cin >> select;
        switch (select)
        {
        case 1: // 添加联系人
            Addperson(&abs);
            break;
        case 2: // 显示联系人
            Showperson(&abs);
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        case 0:
            cout << "您已退出通讯录" << endl;
            return 0;//直接退出main循环
            break;
        default:
            break;
        }
    }
}
