// zhuce.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication4.h"
#include "zhuce.h"
#include "afxdialogex.h"


// zhuce 对话框

IMPLEMENT_DYNAMIC(zhuce, CDialog)

zhuce::zhuce(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG2, pParent)
{

}

zhuce::~zhuce()
{
}

void zhuce::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(zhuce, CDialog)
	ON_BN_CLICKED(IDC_BUTTON2, &zhuce::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &zhuce::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT1, &zhuce::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &zhuce::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &zhuce::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &zhuce::OnEnChangeEdit4)
END_MESSAGE_MAP()


// zhuce 消息处理程序

#include<iostream>
using namespace std;
#include<string>
#include<fstream>
#include<windows.h>

void zhuce::OnBnClickedButton1()//注册
{
	// TODO: 在此添加控件通知处理程序代码
	CString str1,str2,str3,str4;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str1);//用户名	
	GetDlgItem(IDC_EDIT2)->GetWindowText(str2);//第一次密码	
	GetDlgItem(IDC_EDIT3)->GetWindowText(str3);//第二次密码

	if (str2 != str3)
	{
		str4 = "两次密码不同，请重新输入！！！";
		SetDlgItemText(IDC_EDIT4, str4);
	}
	else
	{
		str4 = "注册成功，请登录！！！";
		SetDlgItemText(IDC_EDIT4, str4);

		string zhanghu, mima;
		zhanghu = CW2A(str1.GetString());//CString--》string
		mima = CW2A(str2.GetString());

		ofstream file("用户资料.txt", ios::app);
		file << zhanghu << endl;
		file << mima << endl;
		file.close();
	}

}


void zhuce::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
}


void zhuce::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void zhuce::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void zhuce::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void zhuce::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
