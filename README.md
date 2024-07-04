# Pagination-App

App for paginating plain text files in screen format 80x25, with a maximum of 80 characters per line and 25 lines per page, historically used in DOS-based apps, among others examples.


## Execution

### Windows

For executing the program on Windows, you can download the Release.zip on the latest release and running the PaginationApp.exe executable.

First time use, you will have to accept the Windows Defender warning due to being an executable of unknown origin.

### Linux/MacOS

To use the program in any system with a Linux-based terminal you must get the qtbase5-dev package:

**Ubuntu:**

```
sudo apt-get install qtbase5-dev
```

Once you have installed the above package, go inside the PaginationApp directory and run:

```
qmake
make
```

This will create the PaginationApp executable, to use the app:

```
./PaginatorApp
```

## Usage

Once inside the app, you will see different elements:

**Input file:**

With the "Browse" button a File Browser dialog will appear to select the input plain text that we want to paginate.

**Output file:**

We can specify the output file name(without adding an extension for the file) in the text edit line.

**Paginate:**

When we press the "Paginate" button the input file(if provided) will be processed and paginated saving the result in "output_name.txt" being the output_name the name given in the Output file text line edit. If no output name was provided it will be named "out.txt" by default.

If the pagination is completed with success we will get a confirmation message on screen. Just press "OK" to close it.
