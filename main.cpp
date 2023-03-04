#include <iostream>
using namespace std;
#include <string>
#define MAX 1000
// 1��չʾ�˵�
void showMenu()
{
    cout << "***************************" << endl;
    cout << "*****  1�������ϵ��  *****" << endl;
    cout << "*****  2����ʾ��ϵ��  *****" << endl;
    cout << "*****  3��ɾ����ϵ��  *****" << endl;
    cout << "*****  4��������ϵ��  *****" << endl;
    cout << "*****  5���޸���ϵ��  *****" << endl;
    cout << "*****  6�������ϵ��  *****" << endl;
    cout << "*****  0���˳�ͨѶ¼  *****" << endl;
    cout << "***************************" << endl;
}
// ������ϵ�˺�ͨѶ¼�ṹ��
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
    // ����ͨѶ¼�ṹ��
    struct Person personArray[MAX];
    int m_Size;
};
// 2�������ϵ��
void Addperson(Addressbooks *abs)
{
    if (abs->m_Size == MAX)
    {
        cout << "ͨѶ¼���������ʧ�ܣ�" << endl;
        return;
    }
    else
    {
        // �����ϵ����Ϣ
        // ����
        string name;
        cout << "����������:" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;
        // �Ա�
        int sex = 0;
        cout << "�������Ա�" << endl;
        cout << "1------��" << endl;
        cout << "2------Ů" << endl;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            else
            {
                cout << "���������룺" << endl;
            }
        }

        // ����
        cout << "����������" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        // �ֻ���
        cout << "�������ֻ���" << endl;
        int phone = 0;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        // ��ַ
        cout << "�������ַ" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Address = address;

        // �����û���
        abs->m_Size++;

        cout << "��ӳɹ�" << endl;

        system("pause"); // ��ͣ�ȴ���������
        system("cls");   // �����Ļ
    }
};
// 3����ʾ��ϵ��
void Showperson(Addressbooks *abs)
{
    // ��ʾ������ϵ��
    // �ж�ͨѶ¼�е������Ƿ�Ϊ��
    if (abs->m_Size == 0)
    {
        cout << "ͨѶ¼Ϊ�գ�" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "������" << abs->personArray[i].m_Name << endl;
            cout << "�Ա�" << abs->personArray[i].m_Sex << endl;
            cout << "���䣺" << abs->personArray[i].m_Age << endl;
            cout << "�绰��" << abs->personArray[i].m_Phone << endl;
            cout << "סַ��" << abs->personArray[i].m_Address << endl;
        }
    }

    system("pause");
    system("cls");
};

int main()
{

    // ����ͨѶ¼ʵ��
    Addressbooks abs;
    // ��ʼ��
    abs.m_Size = 0;
    cout<<"�����ڳɹ�����"<<endl;
    while (true)
    {
        showMenu();     // չʾ�˵�
        int select = 0; // ѡ����
        cin >> select;
        switch (select)
        {
        case 1: // �����ϵ��
            Addperson(&abs);
            break;
        case 2: // ��ʾ��ϵ��
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
            cout << "�����˳�ͨѶ¼" << endl;
            return 0; // ֱ���˳�mainѭ��
            break;
        default:
            break;
        }
    }
}
