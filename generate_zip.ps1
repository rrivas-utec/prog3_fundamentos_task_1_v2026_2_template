[CmdletBinding()]
param()

$ErrorActionPreference = 'Stop'

$projectName = 'prog3_fundamentos_task_1_v2026_2'
$sourceFiles = @(
    'include/p1.h', 'src/p1.cpp',
    'include/p2.h', 'src/p2.cpp',
    'include/p3.h', 'src/p3.cpp',
    'include/p4.h', 'src/p4.cpp',
    'include/p5.h', 'src/p5.cpp',
    'include/p6.h', 'src/p6.cpp',
    'include/p7.h', 'src/p7.cpp',
    'include/p8.h', 'src/p8.cpp',
    'include/p9.h', 'src/p9.cpp',
    'include/p10.h', 'src/p10.cpp',
    'include/p11.h', 'src/p11.cpp',
    'include/p12.h', 'src/p12.cpp',
    'include/p13.h', 'src/p13.cpp',
    'include/p14.h', 'src/p14.cpp',
    'include/p15.h', 'src/p15.cpp',
    'include/p16.h', 'src/p16.cpp',
    'include/p17.h', 'src/p17.cpp',
    'include/p18.h', 'src/p18.cpp'
)

$projectRoot = Split-Path -Parent $PSCommandPath
$outputPath = Join-Path $projectRoot "$projectName.zip"

foreach ($sourceFile in $sourceFiles) {
    if (-not (Test-Path -LiteralPath (Join-Path $projectRoot $sourceFile) -PathType Leaf)) {
        throw "No se encontro el archivo requerido: $sourceFile"
    }
}

if (Test-Path -LiteralPath $outputPath) {
    Remove-Item -LiteralPath $outputPath -Force
}

Add-Type -AssemblyName System.IO.Compression
Add-Type -AssemblyName System.IO.Compression.FileSystem
$archive = [System.IO.Compression.ZipFile]::Open(
    $outputPath, [System.IO.Compression.ZipArchiveMode]::Create)

try {
    foreach ($sourceFile in $sourceFiles) {
        $sourcePath = Join-Path $projectRoot $sourceFile
        $entryName = $sourceFile.Replace('\', '/')
        [System.IO.Compression.ZipFileExtensions]::CreateEntryFromFile(
            $archive, $sourcePath, $entryName,
            [System.IO.Compression.CompressionLevel]::Optimal) | Out-Null
    }
}
finally {
    $archive.Dispose()
}

Write-Host "Archivo generado: $outputPath"
