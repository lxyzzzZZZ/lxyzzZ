// shangchang.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication4.h"
#include "shangchang.h"
#include "afxdialogex.h"
#include"Resource.h"

#include"chushou.h"
#include"shangdian.h"
#include<string>
#include<fstream>
#include<iostream>
using namespace std;
// shangchang 对话框
extern string root;
IMPLEMENT_DYNAMIC(shangchang, CDialog)

shangchang::shangchang(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG3, pParent)
{

}

shangchang::~shangchang()
{
}

void shangchang::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(shangchang, CDialog)
	ON_BN_CLICKED(IDC_BUTTON2, &shangchang::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &shangchang::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &shangchang::OnBnClickedButton3)
	ON_EN_CHANGE(IDC_EDIT1, &shangchang::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON4, &shangchang::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &shangchang::OnBnClickedButton5)
	ON_EN_CHANGE(IDC_EDIT2, &shangchang::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT5, &shangchang::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT6, &shangchang::OnEnChangeEdit6)
	ON_BN_CLICKED(IDC_BUTTON6, &shangchang::OnBnClickedButton6)
	ON_EN_CHANGE(IDC_EDIT8, &shangchang::OnEnChangeEdit8)
	ON_EN_CHANGE(IDC_EDIT9, &shangchang::OnEnChangeEdit9)
	ON_EN_CHANGE(IDC_EDIT11, &shangchang::OnEnChangeEdit11)
	ON_EN_CHANGE(IDC_EDIT12, &shangchang::OnEnChangeEdit12)
	ON_EN_CHANGE(IDC_EDIT13, &shangchang::OnEnChangeEdit13)
	ON_EN_CHANGE(IDC_EDIT14, &shangchang::OnEnChangeEdit14)
	ON_EN_CHANGE(IDC_EDIT15, &shangchang::OnEnChangeEdit15)
	ON_BN_CLICKED(IDC_BUTTON7, &shangchang::OnBnClickedButton7)
END_MESSAGE_MAP()


// shangchang 消息处理程序


#include"gouwuche.h"

void shangchang::OnBnClickedButton2()//购物车
{
	// TODO: 在此添加控件通知处理程序代码
	gouwuche a;
	a.DoModal();
}


void shangchang::OnBnClickedButton1()//商店
{
	// TODO: 在此添加控件通知处理程序代码
	shangdian a;
	a.DoModal();
}


void shangchang::OnBnClickedButton3()//出售
{
	// TODO: 在此添加控件通知处理程序代码
	chushou a;
	a.DoModal();
}


void shangchang::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

string mynull = "无";

void shangchang::OnBnClickedButton4()//查看商品
{
	// TODO: 在此添加控件通知处理程序代码
	ifstream file("产品种类.txt");
	string a,b;
	CString zhonglei;//产品名称
	while (file >> a)
	{
		b = b + a;
		b += ',';
	}
	if (b.empty())
	{
		b = mynull;
		zhonglei = b.c_str();
	}
	else 
	{
		b.pop_back();
		zhonglei = b.c_str();
	}
	SetDlgItemText(IDC_EDIT1, zhonglei);
	file.close();
}


void shangchang::OnBnClickedButton5()//查看种类
{
	// TODO: 在此添加控件通知处理程序代码
	CString str2;
	GetDlgItem(IDC_EDIT2)->GetWindowText(str2);
	string zhonglei;
	zhonglei = CW2A(str2.GetString());

	string xinxi,xinxi_T;
	ifstream file("产品资料.txt");
	while (file >> xinxi)
	{
		file >> xinxi;
		if (xinxi == zhonglei)
		{
			file >> xinxi;
			xinxi_T += xinxi;
			xinxi_T += ',';

			file >> xinxi;
			file >> xinxi;
			file >> xinxi;
		}
		else
		{
		file >> xinxi;
		file >> xinxi;
		file >> xinxi;
		file >> xinxi;
		}
	}
	if (xinxi.empty())
	{
		xinxi = mynull;
		str2 = xinxi.c_str();
	}
	else
	{
		xinxi_T.pop_back();
		str2 = xinxi_T.c_str();
	}
	SetDlgItemText(IDC_EDIT5, str2);
	file.close();
}


void shangchang::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangchang::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangchang::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangchang::OnBnClickedButton6()//查看名称
{
	// TODO: 在此添加控件通知处理程序代码
	CString str6;
	GetDlgItem(IDC_EDIT6)->GetWindowText(str6);
	string a;
	a = CW2A(str6.GetString());//商品名称

	string xinxi,xinxi_T;
	ifstream file("产品资料.txt");
	ifstream file1("产品资料.txt");
	while (file >> xinxi_T)
	{
		file1 >> xinxi;
		file >> xinxi_T;
		file >> xinxi_T;
		if (xinxi_T == a)
		{
			str6 = xinxi.c_str();
			SetDlgItemText(IDC_EDIT8, str6);
			file1 >> xinxi;
			str6 = xinxi.c_str();
			SetDlgItemText(IDC_EDIT9, str6);
			file1 >> xinxi;
			str6 = xinxi.c_str();
			SetDlgItemText(IDC_EDIT11, str6);
			file1 >> xinxi;
			str6 = xinxi.c_str();
			SetDlgItemText(IDC_EDIT12, str6);
			file1 >> xinxi;
			str6 = xinxi.c_str();
			SetDlgItemText(IDC_EDIT13, str6);
			file1 >> xinxi;
			str6 = xinxi.c_str();
			SetDlgItemText(IDC_EDIT14, str6);
		}
		else
		{
			file1 >> xinxi;
			file1 >> xinxi;
			file1 >> xinxi;
			file1 >> xinxi;
			file1 >> xinxi;
			file >> xinxi_T;
			file >> xinxi_T;
			file >> xinxi_T;
		}
	}
	file.close();
	file1.close();
}


void shangchang::OnEnChangeEdit8()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangchang::OnEnChangeEdit9()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangchang::OnEnChangeEdit11()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangchang::OnEnChangeEdit12()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangchang::OnEnChangeEdit13()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangchang::OnEnChangeEdit14()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void shangchang::OnEnChangeEdit15()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

void shangchang::OnBnClickedButton7()//确定购买
{
	// TODO: 在此添加控件通知处理程序代码
	CString xinxi;//购买量
	GetDlgItem(IDC_EDIT15)->GetWindowText(xinxi);

	ofstream file("订单.txt", ios::app);

	file << root << endl;//买家

	CString str1,str2,str3,str4;
	string b;
	//SetDlgItemText(IDC_EDIT8, str1); //卖家
	GetDlgItem(IDC_EDIT8)->GetWindowText(str1);
	b = CW2A(str1.GetString());
	file << b << endl;
	//SetDlgItemText(IDC_EDIT9, str2);//种类
	GetDlgItem(IDC_EDIT9)->GetWindowText(str2);
	b = CW2A(str2.GetString());
	file << b << endl;
//	SetDlgItemText(IDC_EDIT11, str3);//名称
	GetDlgItem(IDC_EDIT11)->GetWindowText(str3);
	b = CW2A(str3.GetString());
	file << b << endl;
//	SetDlgItemText(IDC_EDIT12, str4);//价格
	GetDlgItem(IDC_EDIT12)->GetWindowText(str4);
	b = CW2A(str4.GetString());
	file << b << endl;

	b = CW2A(xinxi.GetString());//购买量
	file << b << endl;

	file.close();

	//b == 购买量
	string goumailiang = b;
	//更改销量，库存
	string mingcheng;
	GetDlgItem(IDC_EDIT11)->GetWindowText(str3);
	mingcheng = CW2A(str3.GetString());

	ofstream newfile("临时产品资料.txt");
	ifstream newfile1("产品资料.txt");

	string ziliao;

	while (newfile1 >> ziliao)
	{
		newfile << ziliao << endl;

		newfile1 >> ziliao;
		newfile << ziliao << endl;

		newfile1 >> ziliao;//名称
		newfile << ziliao << endl;

		if (mingcheng == ziliao)
		{
			newfile1 >> ziliao;//价格
			newfile << ziliao << endl;

			//更改库存
			//ziliao 库存  goumailiang 购买量
			newfile1 >> ziliao;

			//库存更改
			CString oldkc;
			GetDlgItem(IDC_EDIT13)->GetWindowText(oldkc);
			string old_kc_s;
			old_kc_s = CW2A(oldkc.GetString());

			int num = atoi(old_kc_s.c_str());
			int num1 = atoi(goumailiang.c_str());
			num = num - num1;//新库存int

			old_kc_s.erase(0);
			while (num > 0)
			{
				int temp = num % 10;
				old_kc_s.insert(old_kc_s.begin(), '0' + temp);
				num /= 10;
			}
			newfile << old_kc_s << endl;
			//库存更改
			//新库存显示
			CString newkc_jm;
			newkc_jm = old_kc_s.c_str();
			SetDlgItemText(IDC_EDIT13, newkc_jm);

			//更改销量
			newfile1 >> ziliao;//销量
			CString oldxl;
			GetDlgItem(IDC_EDIT14)->GetWindowText(oldxl);
			string old_xl_s;
			old_xl_s = CW2A(oldxl.GetString());

			 num = atoi(old_xl_s.c_str());
			 num1 = atoi(goumailiang.c_str());
			num = num + num1;//新销量int

			old_xl_s.erase(0);
			while (num > 0)
			{
				int temp = num % 10;
				old_xl_s.insert(old_xl_s.begin(), '0' + temp);
				num /= 10;
			}
			newfile << old_xl_s << endl;//销量更改

			//新销量的显示
			CString newxl;
			newxl = old_xl_s.c_str();
			SetDlgItemText(IDC_EDIT14, newxl);
		}
		else
		{
		newfile1 >> ziliao;
		newfile << ziliao << endl;

		newfile1 >> ziliao;
		newfile << ziliao << endl;

		newfile1 >> ziliao;
		newfile << ziliao << endl;
		}
		
	}
	newfile.close();
	newfile1.close();

	//临时文件存的是新信息
	string tt;

	ifstream new_file("临时产品资料.txt");
	ofstream new_file1("产品资料.txt");

	while (new_file >> tt)
	{
		new_file1 << tt << endl;
	}

	new_file.close();
	new_file1.close();
}
