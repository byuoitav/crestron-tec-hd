$Source = Split-Path -Path $PSScriptRoot -Parent
$FolderPath = Split-Path -Path $Source -Parent
$FileExtension = ".usp"

$Dir = get-childitem $FolderPath -recurse
$List = $Dir | where {$_.extension -eq $FileExtension}

$List | ForEach-Object {
    & "C:\Program Files (x86)\Crestron\Simpl\SPlusCC.exe" \build $_.FullName \target series2 series3
}
