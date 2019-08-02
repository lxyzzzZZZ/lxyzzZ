// shangdian.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication4.h"
#include "shangdian.h"
#include "afxdialogex.h"

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
extern string root;

// shangdian 对话框

IMPLEMENT_DYNAMIC(shangdian, CDialog)

shangdian::shangdian(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG5, pParent)
{

}

shangdian::~shangdian()
{
}

void shangdian::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(shangdian, CDialog)
	ON_EN_CHANGE(IDC_EDIT1, &shangdian::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &shangdian::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT2, &shangdian::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON2, &shangdian::OnBnClickedButton2)
	ON_EN_CHANGE(IDC_EDIT3, &shangdian::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &shangdian::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT6, &shangdian::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT7, &shangdian::OnEnChangeEdit7)
	ON_EN_CHANGE(IDC_EDIT8, &shangdian::OnEnChangeEdit8)
END_MESSAGE_MAP()


// shangdian 消息处理程序


void shangdian::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangdian::OnBnClickedButton1()//商品
{
	// TODO: 在此添加控件通知处理程序代码
	ifstream file("产品资料.txt");
	string a,b;
	CString a1;
	while (file >> a)//卖家名称
	{
		if (a == root)
		{
			file >> a;
			file >> a;
			b = b + a;
			b = b + ' ';
			file >> a;
			file >> a;
			file >> a;
		}
	}
	a1 = b.c_str();
	SetDlgItemText(IDC_EDIT1, a1);
	file.close();
}


void shangdian::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangdian::OnBnClickedButton2()//检索
{
	// TODO: 在此添加控件通知处理程序代码

	CString mingcheng;//产品名称
	GetDlgItem(IDC_EDIT2)->GetWindowText(mingcheng);
	string mingcheng_T;
	mingcheng_T = CW2A(mingcheng.GetString());

	ifstream file("产品资料.txt");
	ifstream file1("产品资料.txt");
	string a, b;
	CString a1;
	while (file >> a)
	{
		file1 >> b;
		file >> a;
		file >> a;
		if (a == mingcheng_T)
		{
			file1 >> b;
			a1 = b.c_str();
			SetDlgItemText(IDC_EDIT3, a1);
			file1 >> b;
			a1 = b.c_str();
			SetDlgItemText(IDC_EDIT4, a1);
			file1 >> b;
			a1 = b.c_str();
			SetDlgItemText(IDC_EDIT6, a1);
			file1 >> b;
			a1 = b.c_str();
			SetDlgItemText(IDC_EDIT7, a1);
			file1 >> b;
			a1 = b.c_str();
			SetDlgItemText(IDC_EDIT8, a1);
		}
		else
		{
			file >> a;
			file >> a;
			file >> a;
			file1 >> b;
			file1 >> b;
			file1 >> b;
			file1 >> b;
			file1 >> b;
		}
	}
	file.close();
	file1.close();
}


void shangdian::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangdian::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangdian::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangdian::OnEnChangeEdit7()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangdian::OnEnChangeEdit8()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
