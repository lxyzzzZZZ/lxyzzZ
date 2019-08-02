#pragma once


// zhuce 对话框

class zhuce : public CDialog
{
	DECLARE_DYNAMIC(zhuce)

public:
	zhuce(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~zhuce();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit2();
};
