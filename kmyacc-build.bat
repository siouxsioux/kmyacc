@echo "--------- ���ϐ��̐ݒ� ----------"
rem set environment for VC.NET2003 (VC7)
call "C:\Program Files\Microsoft Visual Studio .NET 2003\Vc7\bin\vcvars32.bat"

@echo "--- MAKE ---"
nmake -f Makefile.win

@echo "--- CLEAN ---"
del *.obj

pause
