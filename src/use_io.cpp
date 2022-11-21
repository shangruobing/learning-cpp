#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Ruobing Shang";

    cout << "请输入您的名称： ";
    // cin >> name;
    cout << "您的名称是： " << name << endl;
    cerr << "Error message : " << name << endl;
    clog << "Error message : " << name << endl;
}