// chushou.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication4.h"
#include "chushou.h"
#include "afxdialogex.h"
#include"Resource.h"

// chushou 对话框


IMPLEMENT_DYNAMIC(chushou, CDialog)

chushou::chushou(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG4, pParent)
{

}

chushou::~chushou()
{
}

void chushou::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(chushou, CDialog)
	ON_EN_CHANGE(IDC_EDIT1, &chushou::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &chushou::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT5, &chushou::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT6, &chushou::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT7, &chushou::OnEnChangeEdit7)
	ON_EN_CHANGE(IDC_EDIT8, &chushou::OnEnChangeEdit8)
	ON_BN_CLICKED(IDC_BUTTON1, &chushou::OnBnClickedButton1)

END_MESSAGE_MAP()


// chushou 消息处理程序

#include<string>
#include<fstream>
#include<iostream>
using namespace std;
extern string root;

void chushou::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void chushou::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void chushou::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void chushou::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
void chushou::OnEnChangeEdit7()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void chushou::OnEnChangeEdit8()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void chushou::OnBnClickedButton1()//出售
{
	// TODO: 在此添加控件通知处理程序代码

	CString str1, str2, str3, str4;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str1);//种类
	GetDlgItem(IDC_EDIT2)->GetWindowText(str2);//名称
	GetDlgItem(IDC_EDIT5)->GetWindowText(str3); //价格
	GetDlgItem(IDC_EDIT6)->GetWindowText(str4);//库存

	string zhonglei, mingcheng, jiage, kucun;

	zhonglei = CW2A(str1.GetString());
	mingcheng = CW2A(str2.GetString());
	jiage = CW2A(str3.GetString());
	kucun = CW2A(str4.GetString());
	string xiaoliang = "0";
	
	ofstream a1("产品资料.txt", ios::app);
	
	a1 << root << endl;
	a1 << zhonglei << endl;
	a1 << mingcheng << endl;
	a1 << jiage << endl;
	a1 << kucun << endl;
	a1 << xiaoliang << endl;

	a1.close();

	
	//更新种类
	ifstream a3("产品种类.txt");
	string zhonglei_T;
	int flag = 0;
	while (a3 >> zhonglei_T)
	{
		if (zhonglei == zhonglei_T)
		{
			flag = 1;
			break;
		}
	}
	a3.close();
	
	
	if (flag == 0)
	{
		ofstream a2("产品种类.txt", ios::app);
		a2 << zhonglei << endl;
		a2.close();
	}

	CString str6;
	str6 = "售卖成功！！！";
	SetDlgItemText(IDC_EDIT8, str6);
}



