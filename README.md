# TIVF-Reader
THis is a program i made to read an iamge format i made<br />
TIVF stands for "Terminal Image Viewable file"
# How do i build this
Goto the root directory and type in ```make all```
# How does a TIVF file work
TIVF is an file format that can be viewed in the Linux Terminal. <br /><br />
So a TIVF file looks like this ```RRRRRRRRRRRRRRRNRDDDDDDDDDDDDDRNRDDDDDDDDDDDDDRNRRRRRRRRRRRRRRRNRRRRRRRRRRRRRRRNRRRRRRRRRRRRRRRNRRRR0000000RRRRNRRRR0000000RRRR```
It may look confusing. But it really isn't. Every character is ether a color or a newline<br /><br />

Here is a list of colors:<br />
```
0 = Black
R = Red
G = Green
O = Orange
B = blue
M = Magenta
C = Cyan
L = Light gray
D = Use the default color
N = Newline
