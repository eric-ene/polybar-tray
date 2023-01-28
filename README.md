# polybar-tray
System tray module and script for polybar

## Installation
1. Drag the executable sub_bar into a folder in the $PATH environment variable such as /usr/local/bin. You can either:
    - Get the pre-compiled executable provided, or if you feel the need to make changes to it:
    - Make whichever changes you want to subbar.c and compile it.
 
2. Copy the contents of of copy_these.ini into the appropriate Polybar config files.

## Usage
1. Add the module "systray" to your Polybar like you would any other module.
2. From this point forward instead of running Polybar with the command ```polybar```, you run Polybar with ```polybar main```, assuming that your main bar is called "main".
