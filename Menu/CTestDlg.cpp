// CTestDlg.cpp: 实现文件
//

#include "stdafx.h"
#include "Menu.h"
#include "CTestDlg.h"
#include "afxdialogex.h"


// CTestDlg 对话框

IMPLEMENT_DYNAMIC(CTestDlg, CDialog)

CTestDlg::CTestDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
{
	//m_bIsCreated = FALSE;
}

CTestDlg::~CTestDlg()
{
}

void CTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BTN_ADD, m_btn);
}


BEGIN_MESSAGE_MAP(CTestDlg, CDialog)
//	ON_BN_CLICKED(IDC_BTN_ADD, &CTestDlg::OnBtnAdd)
//ON_EN_CHANGE(IDC_EDIT1, &CTestDlg::OnEnChangeEdit1)
ON_BN_CLICKED(IDC_BTN_ADD, &CTestDlg::OnBtnAdd)
END_MESSAGE_MAP()


// CTestDlg 消息处理程序


//void CTestDlg::OnBtnAdd()
//{
//
//	if (m_bIsCreated == FALSE)
//	{
//		m_btn.Create(L"New", BS_DEFPUSHBUTTON | WS_VISIBLE | WS_CHILD, CRect(0, 0, 100, 100),this, 123);
//		m_bIsCreated == TRUE;
//	}
//	else
//	{
//		m_btn.DestroyWindow();
//		m_bIsCreated = FALSE;
//	}
//}


//void CTestDlg::OnEnChangeEdit1()
//{
//	// TODO:  如果该控件是 RICHEDIT 控件，它将不
//	// 发送此通知，除非重写 CDialog::OnInitDialog()
//	// 函数并调用 CRichEditCtrl().SetEventMask()，
//	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
//	CString str;
//	if (GetDlgItem(IDC_EDIT1)->GetWindowText(str), str == "Number1:")
//	{
//		GetDlgItem(IDC_EDIT1)->SetWindowText("数值1:");
//
//	}
//	else
//	{
//		GetDlgItem(IDC_EDIT1)->SetWindowText("Numer1：");
//	
//	// TODO:  在此添加控件通知处理程序代码
//}


void CTestDlg::OnBtnAdd()
{
	// TODO: 在此添加控件通知处理程序代码
	int num1, num2, num3;
	char ch1[10], ch2[10], ch3[10];
	GetDlgItem(IDC_EDIT1)->GetWindowTextA(ch1,10);
	GetDlgItem(IDC_EDIT2)->GetWindowTextA(ch2, 10);
	

	num1 = atoi(ch1);
	num2 = atoi(ch2);
	num3 = num1 + num2;

	itoa(num3, ch3, 10);
	GetDlgItem(IDC_EDIT3)->SetWindowTextA(ch3);
}
