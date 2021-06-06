# Set Up

To set up the Eden library, first clone the git repository in a suitable directory.
```git
git clone https://github.com/edenmath/eden.git
```
Navigate into the Eden directory:
```bash
cd eden
```
Make and run the install script:
```bash
chmod +x install.sh
./install.sh
```
You can now use the library by doing:
```c
#include "eden.h"
```
at the top of your files. You will need to add the ```-leden``` flag when compiling. For example:
```bash
gcc main.c -o main -leden
```
