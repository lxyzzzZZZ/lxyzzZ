#pragma once


// zhifu 对话框

class zhifu : public CDialog
{
	DECLARE_DYNAMIC(zhifu)

public:
	zhifu(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~zhifu();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG7 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
