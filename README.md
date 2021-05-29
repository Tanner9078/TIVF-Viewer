# TIVF-Reader
This is a program I made to read an image format I made.  
TIVF stands for "**T**erminal **I**mage **V**iewable **F**ile"

## How do I build this
```
git clone https://github.com/Tanner9078/TIVF-Viewer
cd TIVF-Viewer
make all
```

## How does a TIVF file work
TIVF is an file format that can be viewed in the Linux Terminal.

So a TIVF file looks like this:
`RRRRRRRRRRRRRRRNRDDDDDDDDDDDDDRNRDDDDDDDDDDDDDRNRRRRRRRRRRRRRRRNRRRRRRRRRRRRRRRNRRRRRRRRRRRRRRRNRRRR0000000RRRRNRRRR0000000RRRR`  
It may look confusing. But it really isn't. Every character is either a color or a newline.

Here is a list of colors:
```
0 = Black
R = Red
G = Green
O = Orange
B = Blue
M = Magenta
C = Cyan
L = Light gray
D = Default color
N = Newline
```
# tivfAnimationViewer
A PowerShell script to view animations using tivf.
```powershell
tivfAnimation.ps1 tivfExecutable animationPath\ ft
# animationPath\ its a directory, must have the \ 
# ft its how many milliseconds should have beetween frames
```
## Example
```powershell
.\tivfAnimationViewer.ps1 .\main.exe .\examples\anims\123counter\ 1000
```
https://user-images.githubusercontent.com/57050328/120060085-05015700-c02c-11eb-99b0-d5013dee9e3c.mp4



