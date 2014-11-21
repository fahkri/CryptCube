#pragma once



// CClassicKaisaForm 窗体视图
#include "Form.h"
#include "afxwin.h"

class CClassicKaisaForm : public CForm
{
	DECLARE_DYNCREATE(CClassicKaisaForm)

public:
	CClassicKaisaForm();           // 动态创建所使用的受保护的构造函数
	virtual ~CClassicKaisaForm();

public:
	enum { IDD = IDD_CLASSIC_KAISA };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate();
	DECLARE_MESSAGE_MAP()
	
public:


	CString m_strA;
	CString m_strB;
	CString m_strC;
	CString m_strD;
	CString m_strE;
	CString m_strF;
	CString m_strG;
	CString m_strH;
	CString m_strI;
	CString m_strJ;
	CString m_strK;
	CString m_strL;
	CString m_strM;
	CString m_strN;
	CString m_strO;
	CString m_strP;
	CString m_strQ;
	CString m_strR;
	CString m_strS;
	CString m_strT;
	CString m_strU;
	CString m_strV;
	CString m_strW;
	CString m_strX;
	CString m_strY;
	CString m_strZ;

	CString m_stra;
	CString m_strb;
	CString m_strc;
	CString m_strd;
	CString m_stre;
	CString m_strf;
	CString m_strg;
	CString m_strh;
	CString m_stri;
	CString m_strj;
	CString m_strk;
	CString m_strl;
	CString m_strm;
	CString m_strn;
	CString m_stro;
	CString m_strp;
	CString m_strq;
	CString m_strr;
	CString m_strs;
	CString m_strt;
	CString m_stru;
	CString m_strv;
	CString m_strw;
	CString m_strx;
	CString m_stry;
	CString m_strz;

	CString *m_strAlphabet[52];

	BOOL m_bInitControl;

	// 密钥长度0-25
	CString m_strKeyLength;

	// 明文
	CString m_strPlainText;

	// 密文
	CString m_strCipherText;

	afx_msg void OnEnChangeEditKaisaCipher();
	afx_msg void OnEnChangeEditKaisaPlain();
	// 明文输入框控件
	//CEdit m_pEditPlainText;
	// 密文输入框控件
//	CEdit m_pEditCipherText;
	// 密钥输入框
//	CEdit m_pEditKeyLength;
	CSpinButtonCtrl m_spinKeyLength;
	afx_msg void OnEnKillfocusEditKaisaKeylen();
	afx_msg void OnEnChangeEditKaisaKeylen();

	
	afx_msg void OnBnClickedButtonPrew();
	afx_msg void OnBnClickedButtonNext();

	void AlphabetList();
};


