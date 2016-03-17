@echo off
powershell Set-ExecutionPolicy RemoteSigned
powershell %cd%\mass-usp-compiler.ps1
powershell Set-ExecutionPolicy Restricted
EXIT