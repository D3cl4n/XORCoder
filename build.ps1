Write-Output "Starting build..."

# check on the output directory
if (Test-Path "C:\Users\cdecl\Projects\XORCoder\build") {
    Write-host "Clearing directory contents..."
    Remove-Item "C:\Users\cdecl\Projects\XORCoder\build\*.*"
}

else {
    New-Item -Path "C:\Users\cdecl\Projects\XORCoder" -Name "build" -ItemType "directory"
}

Set-Location -Path "C:\Users\cdecl\Projects\XORCoder\build"
cmake ..
make

Write-Outout "Finished build."