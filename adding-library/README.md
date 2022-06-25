# adding-library

To compile in the debug mode use (https://hsf-training.github.io/hsf-training-cmake-webpage/08-debugging/index.html)

```bash
$ mkdir ../adding-library-build
$ cd ../adding-library-build
$ cmake -DCMAKE_BUILD_TYPE=Debug ../adding-library
$ cmake --build .
```

There will be created executable file ```Tutorial``` in the  ```adding-library-build```

If you updated sources than it's preferable to delete build (https://stackoverflow.com/questions/14458805/editing-versus-deleting-cmakecache-txt-after-moving-directory) by using (in the ```adding-library-build``` folder) (https://askubuntu.com/questions/740805/how-can-i-remove-all-files-from-current-directory-using-terminal)

```bash
$ rm -r *
```

Then compile as above.
