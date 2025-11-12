@echo off
echo ========================================
echo    PROCESS MANAGER - BUILD AND RUN
echo ========================================
echo.

REM Create build directory if it doesn't exist
if not exist "build" (
    echo Creating build directory...
    mkdir build
)

REM Navigate to build directory
cd build

REM Run CMake to configure the project
echo Configuring with CMake...
cmake .. -G "MinGW Makefiles"
if errorlevel 1 (
    echo.
    echo [ERROR] CMake configuration failed!
    cd ..
    pause
    exit /b 1
)

REM Build the project
echo.
echo Building project...
cmake --build .
if errorlevel 1 (
    echo.
    echo [ERROR] Build failed!
    cd ..
    pause
    exit /b 1
)

REM Go back to root directory
cd ..

REM Run the program
echo.
echo ========================================
echo    RUNNING PROGRAM
echo ========================================
echo.
build\ProcessManager.exe

echo.
echo ========================================
echo    PROGRAM FINISHED
echo ========================================
pause
