// zhifu.cpp: 实现文件
//

#include "stdafx.h"
#include "MFCApplication4.h"
#include "zhifu.h"
#include "afxdialogex.h"


// zhifu 对话框

IMPLEMENT_DYNAMIC(zhifu, CDialog)

zhifu::zhifu(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG7, pParent)
{

}

zhifu::~zhifu()
{
}

void zhifu::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(zhifu, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &zhifu::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &zhifu::OnBnClickedButton2)
END_MESSAGE_MAP()


// zhifu 消息处理程序


void zhifu::OnBnClickedButton1()//微信
{
	// TODO: 在此添加控件通知处理程序代码

	//从资源中加载图片
	CBitmap bitmap;
	//加载指定位图资源 Bmp图片ID
	bitmap.LoadBitmap(IDB_BITMAP2);
	//获取对话框上的句柄 图片控件ID
	CStatic *p = (CStatic *)GetDlgItem(IDC_STATIC);
	//设置静态控件窗口风格为位图居中显示
	p->ModifyStyle(0xf, SS_BITMAP | SS_CENTERIMAGE);
	//将图片设置到Picture控件上
	p->SetBitmap(bitmap);
}


void zhifu::OnBnClickedButton2()//支付宝
{
	// TODO: 在此添加控件通知处理程序代码

	//从资源中加载图片
	CBitmap bitmap;
	//加载指定位图资源 Bmp图片ID
	bitmap.LoadBitmap(IDB_BITMAP3);
	//获取对话框上的句柄 图片控件ID
	CStatic *p = (CStatic *)GetDlgItem(IDC_STATIC);
	//设置静态控件窗口风格为位图居中显示
	p->ModifyStyle(0xf, SS_BITMAP | SS_CENTERIMAGE);
	//将图片设置到Picture控件上
	p->SetBitmap(bitmap);
}
