// denglu.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication4.h"
#include "denglu.h"
#include "afxdialogex.h"


// denglu 对话框

IMPLEMENT_DYNAMIC(denglu, CDialog)

denglu::denglu(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
{

}

denglu::~denglu()
{
}

void denglu::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(denglu, CDialog)
	ON_BN_CLICKED(IDC_BUTTON2, &denglu::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &denglu::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT1, &denglu::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &denglu::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &denglu::OnEnChangeEdit3)
END_MESSAGE_MAP()


// denglu 消息处理程序


#include<fstream>
#include<iostream>
#include<string>
#include"shangchang.h"
using namespace std;
string root;


void denglu::OnBnClickedButton1()//确定登录
{
	// TODO: 在此添加控件通知处理程序代码
	CString str1, str2, str3;
	GetDlgItem(IDC_EDIT1)->GetWindowText(str1);
	GetDlgItem(IDC_EDIT2)->GetWindowText(str2);

	string zhanghu, mima;
	zhanghu = CW2A(str1.GetString());
	mima = CW2A(str2.GetString());

	string yonghuF, mimaF;
	ifstream file("用户资料.txt");
	int flag = 0;
	while (file)
	{
		file >> yonghuF;
		file >> mimaF;
		if ((zhanghu == yonghuF) && (mima == mimaF))
		{
			flag = 1;
			str3 = "登陆成功！！！";
			SetDlgItemText(IDC_EDIT3, str3);
			//TODO
			root = zhanghu;
			shangchang a;
			a.DoModal();
			break;
		}
	}
	if (flag == 0)
	{
		str3 = "登陆失败！！！";
		SetDlgItemText(IDC_EDIT3, str3);
	}
	file.close();
}

void denglu::OnBnClickedButton2()//取消
{
	// TODO: 在此添加控件通知处理程序代码
}


void denglu::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void denglu::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void denglu::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
