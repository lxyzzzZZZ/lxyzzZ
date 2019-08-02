#pragma once


// chushou 对话框

class chushou : public CDialog
{
	DECLARE_DYNAMIC(chushou)

public:
	chushou(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~chushou();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit7();
	afx_msg void OnEnChangeEdit8();
};
