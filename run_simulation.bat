@echo off
echo ========================================================
echo   NXP GUI Guider LVGL Simulator - Digital Dashboard
echo ========================================================
set PATH=c:\Users\user\Desktop\AUG4\lvgl-simulator\build\bin;C:\nxp\GUI-Guider-1.10.1-GA\environment\mingw\bin;C:\nxp\GUI-Guider-1.10.1-GA\environment\mingw\lib;%PATH%
cd /d "%~dp0lvgl-simulator\build\bin"
echo Launching Simulator (1280x720)...
start "" "%~dp0lvgl-simulator\build\bin\simulator.exe"
echo Simulator is now running!
