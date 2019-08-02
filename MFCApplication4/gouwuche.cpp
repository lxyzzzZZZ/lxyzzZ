// gouwuche.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication4.h"
#include "gouwuche.h"
#include "afxdialogex.h"


// gouwuche 对话框

IMPLEMENT_DYNAMIC(gouwuche, CDialog)

gouwuche::gouwuche(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG6, pParent)
{

}

gouwuche::~gouwuche()
{
}

void gouwuche::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(gouwuche, CDialog)
	ON_EN_CHANGE(IDC_EDIT1, &gouwuche::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &gouwuche::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT2, &gouwuche::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON2, &gouwuche::OnBnClickedButton2)
	ON_EN_CHANGE(IDC_EDIT3, &gouwuche::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &gouwuche::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT5, &gouwuche::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT6, &gouwuche::OnEnChangeEdit6)
	ON_BN_CLICKED(IDC_BUTTON3, &gouwuche::OnBnClickedButton3)
END_MESSAGE_MAP()


// gouwuche 消息处理程序


void gouwuche::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

#include<iostream>
#include<fstream>
#include<string>
#include"zhifu.h"

using namespace std;
extern string root;


//opencv支付界面
//#include<opencv2/core/core.hpp>
////#include<opencv2/highgui/highgui.hpp>
////using namespace cv;
////int main() {
////	Mat img = imread("C:\\Users\\70786\\Desktop\\IMG_20190425_120926.jpg");
////
////	namedWindow("pay", 1);
////	imshow("pay", img);
////	//img.resize(500,500);
////	waitKey(6000);
////	system("pause");
////	return 0;
////}

void gouwuche::OnBnClickedButton1()//我的订单
{
	// TODO: 在此添加控件通知处理程序代码
	ifstream file("订单.txt");
	string name;
	CString name_jm;
	string a;
	while (file >> name)
	{
		if (name == root)
		{
			file >> name;
			file >> name;
			file >> name;//名称

			a = a + name;
			a = a + ',';
			//name_jm = name.c_str();
			//SetDlgItemText(IDC_EDIT1, name_jm);
			file >> name;
			file >> name;
		}
		else
		{
			file >> name;
			file >> name;
			file >> name;
			file >> name;
			file >> name;
		}
	}
	file.close();
	a.pop_back();
	name_jm = a.c_str();
	SetDlgItemText(IDC_EDIT1, name_jm);

}


void gouwuche::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void gouwuche::OnBnClickedButton2()//查看订单
{
	// TODO: 在此添加控件通知处理程序代码
	CString mingcheng_jm;
	GetDlgItem(IDC_EDIT2)->GetWindowText(mingcheng_jm);
	string mingcheng;
	mingcheng = CW2A(mingcheng_jm.GetString());

	string mingcheng_T;
	ifstream file("订单.txt");
	CString xianshi;
	while (file >> mingcheng_T)
	{
		if (mingcheng_T == root)
		{
			file >> mingcheng_T;
			file >> mingcheng_T;
			file >> mingcheng_T;//名称

			if (mingcheng_T == mingcheng)
			{
				xianshi = mingcheng_T.c_str();//名称
				SetDlgItemText(IDC_EDIT4, xianshi);
				file >> mingcheng_T;
				xianshi = mingcheng_T.c_str();//价格
				SetDlgItemText(IDC_EDIT5, xianshi);

				file >> mingcheng_T;//卖家

				file >> mingcheng_T;
				xianshi = mingcheng_T.c_str();//购买量
				SetDlgItemText(IDC_EDIT6, xianshi);
			}
		}
		else
		{
			file >> mingcheng_T;
			file >> mingcheng_T;
			file >> mingcheng_T;
		}
	}
	file.close();
}


void gouwuche::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void gouwuche::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void gouwuche::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void gouwuche::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void gouwuche::OnBnClickedButton3()//opencv支付
{
	// TODO: 在此添加控件通知处理程序代码
	zhifu a;
	a.DoModal();
}
