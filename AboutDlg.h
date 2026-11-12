#ifndef ABOUTDLG_H
#define ABOUTDLG_H

/* Dialog procedure for our "about" dialog */
LRESULT WINAPI AboutDialogProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);

/* Show our "about" dialog */
void ShowAboutDialog(HWND);

#endif
