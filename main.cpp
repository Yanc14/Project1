#include <iostream>
using namespace std;
#include<string>
#define MAX 1000
//1、菜单界面
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
//设计联系人与通讯录的结构体
struct Person
{
    string m_name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Address;
};
struct Addressbooks
{
    //创建通讯录保存的联系人数组，数组元素为struct
    struct Person personArray[MAX];
    int m_Size;
};



int main()
{
    while(true){
        showMenu();//展示菜单

        int select = 0; // 创建用户输入的选择变量
        cin >> select;
        switch (select)
        {
        case 1: // 1、添加联系人
            /* code */
            break;
        case 2: // 2、显示联系人
            /* code */
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
            cout << "您已退出通讯录，欢迎下次使用！" << endl;
            system("pause");
            return 0;//退出循环
            break;
        default:
            break;
        }
    }
}
