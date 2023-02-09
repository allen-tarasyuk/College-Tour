# College Tour Installation instructions for MAC OS X & Linux Operating systems.

## How to compile the project on "Mac OS" or "Linux"

Go to this website and follow the instructions:
[Homebrew](https://brew.sh/ "Homebrew")

## Follow the instructions at the [Homebrew](https://brew.sh/ "Homebrew") here:

Enter this into your terminal to install Homebrew which is a package manager for mac and linux...
```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)
```

## Homebrew installs the stuff you need that Apple (or your Linux system) didn’t

Type the following cmd in your terminal:
```bash
brew install wget
```
You can also enter different commands in your terminal for homebrew operations...
```bash
brew --version
```
```bash
brew --help
```

## Install raylib via `brew install` formula which is...
```bash
brew install raylib
```


## Now you need to access the directory where raylib is installed and located at which is a folder called "Cellar".

Now just open terminal and type the following cmd in your terminal:
``` bash /usr/local/Cellar/raylib ```
This will allow you to access the "Cellar" directory where all the Homebrew packages are installed

commands to access the directory back and forth:
- ```bash ls ```  // This will allow youm to see the directories and files that are installed in current directory.
- now type the following cmd in your terminal:
  - ```bash cd 4.2.0 ``` // Go into the current version directory

 ```bash cd 4.2.0 ```
 ```bash ls ```  // See the current directory files and folders.
 
You should see a few folders named 'lib' and 'include'.

Now replace the following file in the folder named 'lib' and the file called 'libraylib.a' into the lib directory in the project cloned from the github repository.

Then replace all the files in the 'include' directory to your project cloned from the github repository to the folder also named 'include', there should be 3 files to be replaced in that directory.

After this previous step...
## Install raylib via `brew install` formula which is...
```bash
brew install raylib
```

## Final step for Mac OS X and Linux
install cmake on your system...
[cmake](https://cmake.org/install/ "cmake")

commands like:
make .
make folder/folder1/folder2/folder3 // Making sure you are in the correct directory with the Makefile in it.

You should be familiar with all the functions that are available on the raylib website.
[Raylib Cheatsheet](https://www.raylib.com/cheatsheet/cheatsheet.html "Raylib Cheatsheet")

Also checkout Raylib's discord channel which is very active and helpful with a lot of people who are willing to help
you solve certain issues that may arise.
[Discord Channel](https://discord.gg/raylib "Discord Channel")

# College Tour Installation instructions for 'Windows Operating' systems.

You will need to install cmake and compile raylib's github repository into
a directory of your choosing on your computer:
[cmake](https://cmake.org/install/ "cmake"

## insalling cmake (additional details)
install cmake on your system...
[cmake](https://cmake.org/install/ "cmake")

commands like these can compile the project into an executable (must be in SAME folder as Makefile is in).
make .
make folder/folder1/folder2/folder3 // Making sure you are in the correct directory with the Makefile in it.

```bash git clone https://github.com/raysan5/raylib.git ```

now use this raylib source code from github to compile it into a static library file which will end in .a using
the cmake application that was previously installed.

You should get a folder upon a "Successfully compiled" version of raylib with a static library file and some dynamic files
which are not needed right now. You can find the static library file ending with .a as the extension in the lib directory
which was generated.
  - Example: libFile.a

Now in the include directory, you'll need to replace the three header files into the cloned project directory.

lib/
include/

These folders will be replaced with all the new files for the raylib library to compile successfully.
[sourceforge](https://sourceforge.net/projects/mingw/files/ "sourceforge")
This is a link to the MingGW compiler for windows to compile the raylib library in the project.

You should be familiar with all the functions that are available on the raylib website.
[Raylib Cheatsheet](https://www.raylib.com/cheatsheet/cheatsheet.html "Raylib Cheatsheet")

Also checkout Raylib's discord channel which is very active and helpful with a lot of people who are willing to help
you solve certain issues that may arise.
[Discord Channel](https://discord.gg/raylib "Discord Channel")

# Other Resources

## Example of a simple raylib application
```cpp
#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "raylib [core] example - basic window");

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
```

## Checkout Raylib on github
[github](https://github.com/raysan5/raylib "github")