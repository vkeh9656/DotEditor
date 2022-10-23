
// DotEditorDlg.h: 헤더 파일
//

#pragma once

#define X_COUNT			30
#define Y_COUNT			30
#define RECT_INTERVAL	20

// CDotEditorDlg 대화 상자
class CDotEditorDlg : public CDialogEx
{
private:
	COLORREF m_dot_color[Y_COUNT][X_COUNT];
	COLORREF m_left_btn_color, m_right_btn_color;
	CPen m_grid_pen;
// 생성입니다.
public:
	CDotEditorDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DOTEDITOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedLeftColorBtn();
	afx_msg void OnBnClickedRightColorBtn();
};
