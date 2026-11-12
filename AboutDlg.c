// #include <windows.h>
// #include "AboutDlg.h"
// #include "Globals.h"
// #include "Resource.h"

// /* Dialog procedure for our "about" dialog */

// LRESULT WINAPI AboutDialogProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
// {
//   switch (uMsg)
//   {
//     case WM_COMMAND:
//     {
//       WORD id = wParam;

//       switch (id)
//       {
//         case IDOK:
//         case IDCANCEL:
//         {
//           EndDialog(hwndDlg, id);
//           return TRUE;
//         }
//       }
//       break;
//     }

//     case WM_INITDIALOG:
//     {
//       return TRUE;
//     }
//   }

//   return FALSE;
// }

// /* Show our "about" dialog */
// void ShowAboutDialog(HWND owner)
// {
//   /* Create dialog callback thunk */
//   // FARPROC aboutProc = MakeProcInstance(AboutDialogProc, g_hInstance);
//   FARPROC aboutProc = AboutDialogProc(owner, );

//   DialogBox(g_hInstance, MAKEINTRESOURCE(IDD_ABOUTDIALOG), owner, aboutProc);

//   /* Free dialog callback thunk */
//   FreeProcInstance(aboutProc);
// }
// 