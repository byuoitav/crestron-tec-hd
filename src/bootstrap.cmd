@echo off
powershell Set-ExecutionPolicy RemoteSigned
powershell %cd%\tools\simplplus\mass-usp-compiler\mass-usp-compiler.ps2 -Path . -series2
powershell Set-ExecutionPolicy Restricted
EXIT
