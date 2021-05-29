param($tivf,$path,$frameTime)

function Wait
{param($miliseconds)
    Start-Sleep -Milliseconds $miliseconds
    Clean
}
    
function Clean {[System.Console]::Clear()}

$a = Get-ChildItem $path* -Include "*.tivf"

foreach($frame in $a)
{
    Wait($frameTime)
    & $tivf $frame
}